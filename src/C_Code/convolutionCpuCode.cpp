#include <math.h> 
#include <stdio.h>  
#include <sys/time.h>
#include <iomanip>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <cmath>
#include <string.h>
#include <fstream>
#include <stdio.h>
#include <sys/types.h>
#include <math.h>
#include "mnist_image_reader.h"
#include "cifar10_reader.h"
#include "network_parameters.h"
#include "convolution.h"
#include "Maxfiles.h"
#include "MaxSLiCInterface.h"

void perform_convolution_and_maxpooling(float* result, float* result2, double* romcontents, double* romcontents2, double* biases, int* first_set, int* second_set, double* fully_connected, double* second_fully_connected, double* final_bias, double* first_fully_connected_bias); 	
void read_results_from_lmem(float* result, float* first_set); 
void display_results(float* filter); 
void load_normalized_feature_maps(int normalization_constant, float*** dataset); 
void perform_second_convolution(double* romcontents, float* filter, float* filter2);
void init_convolution(max_actions_t* actions, const char* name, int cycles, double* romcontents, double* bias, int channels, int blocks, int depth); 
void init_fully_connected(max_actions_t* actions, const char* name, int cycles, double* romcontents, double* bias, int weight_size, int bias_size);
int* pointers[5]; 

int main()
{
	
	mnist_image_reader first_test_dataset("/mnt/data/cccad3/aa18514/latest_conv_net/full1/final/src/C_Code/t10k-images-idx3-ubyte");
	//cifar10_reader cifar10("/mnt/data/cccad3/aa18514/convolutional_nueral_network/cifar-10-batches-bin/data_batch_1.bin"); 
	//cifar10.read_images();
	first_test_dataset.read_images();
	//cifar10.pretty_print(0, 2);
	first_test_dataset.pretty_print(1);
        network_parameters LeNet("/mnt/data/cccad3/aa18514/latest_conv_net/full1/final/src/C_Code/weights/conv1.txt", 
				"/mnt/data/cccad3/aa18514/latest_conv_net/full1/final/src/C_Code/weights/conv2.txt",
				"/mnt/data/cccad3/aa18514/latest_conv_net/full1/final/src/C_Code/weights/bias1.txt", 
				"/mnt/data/cccad3/aa18514/latest_conv_net/full1/final/src/C_Code/weights/test.txt",
				"/mnt/data/cccad3/aa18514/latest_conv_net/full1/final/src/C_Code/weights/final.txt", 
				"/mnt/data/cccad3/aa18514/latest_conv_net/full1/final/src/C_Code/weights/final_bias.txt",
				"/mnt/data/cccad3/aa18514/latest_conv_net/full1/final/src/C_Code/weights/fully_connected1_bias.txt");  
	float* filter = new float[20];
	float* filter2 = new float[20]; 
	for(int i = 0; i < 5; i++){
		pointers[i] = new int[784];
	} 
	load_normalized_feature_maps(256, first_test_dataset._dataset);
	cout << "Running on DFE\n";
	perform_convolution_and_maxpooling(filter, filter2, LeNet.romcontents, LeNet.romcontents2, LeNet.bias,  pointers[0], pointers[1], LeNet.fully_connected, LeNet.fully_connected2, LeNet.final_bias, LeNet.fully_connected_bias); 	  
	display_results(filter); 
	return 0;
} 

void load_normalized_feature_maps(int normalization_constant, float*** dataset){
	for(int q = 0; q < 2; q++){
		for(int p = 0; p < 1; p++){
			for(int i = 0; i < 28; i++){
				for(int j = 0; j < 28; j++){
					float bigI = dataset[q + 2*p][i][j]/normalization_constant; 
					int64_t result = 1; 
					for(int k = 0; k < 32; k++){
						result *= 2; 
					}
					int32_t small = (int32_t(result * bigI) & 0xF0000000) >> 28;
					pointers[q][(28 * 28 * p) + (28 * i)  + j] = small; 
				}
			}
		}
	}
}

void init_convolution(max_actions_t* actions, const char* name, int cycles, double* romcontents, double* bias, int channels, int depth, int row_size, int block_size, int t){
	max_set_ticks(actions, name, cycles); 
	int b = 0; 
	if(block_size == 25){ 
		b = 7; 
	}
	for(int p = 0; p < channels; p++){
		for(int j = 0; j < depth; j++){
			for(int i = 0; i < row_size; i++){	
				for(int single =  0; single < block_size; single = single + 4){
					int64_t constructed_memory_location = 0; 
					stringstream ss; 
					ss << (i * b + (single/4)); 
					char Result[100]; 
					strcpy(Result, "mappedRom"); 
					strcat(Result, ss.str().c_str()); 
					for(int k = 0; k < 4; k++)
					{ 
						int a = k + single; 
						if(a < block_size){
							if(a > t & (j+2) % 2 == 0); 
							else
							{
								int64_t result = 1;  
								for(int i = 0; i < 16; i++)
								{ 
									result *= 2; 
								}
								int64_t small = int16_t((romcontents[(t - a) + block_size * (i + row_size * (j + p * depth))] * result)) & 0xFFFF;
								constructed_memory_location = constructed_memory_location | (small << (16 * k)); 
							}
						}
					}
					cout << constructed_memory_location << endl;
					max_set_mem_double(actions, name, Result, j + depth * p, constructed_memory_location); 
					/*
					stringstream ss; 
					ss << ((i * block_size) + single); 
					char result[100]; 
					strcpy(result, "mappedRom"); 
					strcat(result, ss.str().c_str()); 
					if(single > t & ((j+2)%2) == 0)
						max_set_mem_double(actions, name, result, j + depth*p, 0);	
					else
						max_set_mem_double(actions, name, result, j + depth*p, romcontents[(t - single) + block_size * (i  + row_size * (j + p * depth))]); 	
					*/
				}
			}
		}
	}
	for(int i = 0; i < channels * 20; i++){
		max_set_mem_double(actions, name, "bias", i, bias[i]); 
	}
}

void init_fully_connected(max_actions_t* actions, const char* name, int cycles, double* weights, double* bias, int weight_size, int bias_size){
	max_set_ticks(actions, name, cycles); 
	for(int j = 0; j < weight_size; j++){
		for(int i = 0; i < 10; i++){
			stringstream ss; 
			ss << i; 
			char result[100]; 
			strcpy(result, "mappedRom"); 
			strcat(result, ss.str().c_str()); 
			max_set_mem_double(actions, name, result, j, weights[i + 10*j]);
		}
	}
	for(int i = 0; i < bias_size; i++){
		max_set_mem_double(actions, name, "fully_connected_bias", i, bias[i]);
	} 
}  
		

void perform_convolution_and_maxpooling(float* result, float* result2, double* romcontents, double* romcontents2, double* bias, int* first_set, int* second_set, double* fully_connected, double* second_fully_connected, double* final_bias, double* fully_connected_bias){
	max_file_t* mavMaxFile = convolution_init();
	max_engine_t* engine = max_load(mavMaxFile, "local:*"); 
	max_actions_t* actions = max_actions_init(mavMaxFile, "default");
	max_queue_input(actions, "x01", first_set,  3136);  
	max_queue_input(actions, "x11", second_set, 3136);	
	init_convolution(actions, "convolutionKernel00",  4 * 28 * 28 * 1 * 1, romcontents, bias, 1, 4, 5, 25, 24); 
	init_convolution(actions, "convolutionKernel10",  20 * 50 * 12 * 12 * 1 * 2, romcontents2, romcontents, 50, 40, 1, 20, 4);
	init_fully_connected(actions, "fully_connected01",  40000, fully_connected, fully_connected_bias, 40000,500); 
	init_fully_connected(actions, "fully_connected11",  500,  second_fully_connected, final_bias, 500, 10); 
	max_set_ticks(actions, "maxpooling10", 12 *50* 12);
	max_set_ticks(actions, "maxpooling00", 28 * 28 * 4 ); 
	max_set_ticks(actions, "sliding_window00", ((28 * 5) + (4 *  28 * 28)));  
	max_set_ticks(actions, "sliding_window10", ((12 *20 * 5) + (50 * 20 * 12 * 12 * 2)));
	max_queue_output(actions, "y01", result,   80);
	max_queue_output(actions, "y11", result2,  80); 
	struct timeval tv, tb;
	gettimeofday(&tv, NULL);
	max_run(engine, actions);
	gettimeofday(&tb, NULL); 
	cout << ((((unsigned long long)tb.tv_sec) -((unsigned long long)tv.tv_sec))) + (((tb.tv_usec) - (tv.tv_usec))/1e6) << endl;
	max_actions_free(actions); 
	max_unload(engine); 
	max_file_free(mavMaxFile);
}

void read_results_from_lmem(float* result, float* first_set){
	max_file_t* mavMaxFile = convolution_init(); 
	max_engine_t* engine = max_load(mavMaxFile, "local:*"); 
	max_actions_t* actions = max_actions_init(mavMaxFile, "readLMem"); 
	max_set_param_uint64t(actions, "size_bytes", 20 * 12 * 12); 
	max_set_param_uint64t(actions, "start_bytes", 0); 
	max_queue_output(actions, "toCpu", result, 12 * 12 * 20 * 4);  
	max_disable_validation(actions);  
	max_run(engine, actions); 
	max_actions_free(actions); 
	max_unload(engine);
} 

void display_results(float* filter){
	int j = 0; 
	for(int i = 10; i < 20; i = i + 1){
		cout << filter[i] <<  endl;
	}
}
