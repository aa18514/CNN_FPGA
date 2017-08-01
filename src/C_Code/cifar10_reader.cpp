#include "cifar10_reader.h"
#include <fstream>
#include <iostream>
using namespace std; 

cifar10_reader::cifar10_reader(const char* full_path){
	file.open(full_path, ios::binary);
}

void cifar10_reader::read_images(){
	/*
		i represents number of samples 
		j represens number of feature maps 
		r and c represent the dimension of each feature map 
	*/
	_dataset = new float ***[10000];
	for(int i = 0; i < 10000; i++){
		_dataset[i] = new float**[3]; 
		for(int j = 0; j < 3; j++){
			_dataset[i][j] = new float*[32]; 
			for(int r = 0; r < 32; r++){
				_dataset[i][j][r] = new float[32]; 
				for(int c = 0; c < 32; c++){
					unsigned char temp; 
					file.read((char*)&temp, sizeof(temp)); 
					_dataset[i][j][r][c] = temp; 
				}
			}
		}
	}
}


void cifar10_reader::pretty_print(int image_number, int feature_map){
	for(int i = 0; i < 32; i++){
		for(int j = 0; j < 32; j++){
			cout << _dataset[image_number][feature_map][i][j]/256 << "\t"; 
		}
		cout << endl;
	}
}

