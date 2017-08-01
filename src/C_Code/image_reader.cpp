#include "image_reader.h"
#include <fstream>
#include <iostream>
using namespace std; 

int reverseInt(int i){
	unsigned char c1, c2, c3, c4;
	c1 = i & 255; 
	c2 = (i >> 8) & 255; 
	c3 = (i >> 16) & 255; 
	c4 = (i >> 24) & 255; 
	return ((int)c1 << 24) + ((int)c2 << 16) + ((int)c3 << 8) + c4; 
}

int image_reader::get_rows(){
	return n_rows;
}

int image_reader::get_cols(){
	return n_cols; 
}

image_reader::image_reader(const char* full_path, const char* network){
	net  = network; 
	file.open(full_path, ios::binary);
	magic_number = set_attributes(); 
	number_of_images = set_attributes(); 
	n_rows = set_attributes(); 
	n_cols = set_attributes(); 
	image_size = n_rows * n_cols; 
}

int image_reader::set_attributes(){
	int attribute; 
	if(file.is_open()){
		file.read((char*)&attribute, sizeof(attribute));   
                int a = reverseInt(attribute); 
		return a; 
	}
	else{
		return 0; 
	}
}

void image_reader::read_images(){
	_dataset = new float **[number_of_images];
	for(int i = 0; i < number_of_images; i++){
		_dataset[i] = new float*[n_rows]; 
		for(int r = 0; r < n_rows; r++){
			_dataset[i][r] = new float[n_cols];	
			for(int c = 0; c < n_cols; c++){	
				unsigned char temp; 
				file.read((char*)&temp, sizeof(temp)); 
				_dataset[i][r][c] = float(temp); 
			}
		}
	}
}


void image_reader::pretty_print(int image_number){
	for(int i = 0; i < 28; i++){
		for(int j = 0; j < 28; j++){
			cout << _dataset[image_number][i][j] << "\t"; 
		}
		cout << endl;
	}
}

