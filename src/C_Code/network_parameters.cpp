#include "network_parameters.h"
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cstdlib>
using namespace std;

void read_from_file(double *weights, const char* address){ 
	ifstream f; 
	f.open(address); 
	int iterator = 0;
	if(f.is_open()){
		cout << "read from: \t\t :" << address << endl;
		string line; 
		while (getline(f, line)){
			std::stringstream linestream(line); 
			std::string value; 
			while(getline(linestream, value, ' ')){
				weights[iterator] = std::atof(value.c_str()); 
				iterator++; 
			}
		}
	}
	f.close();
}

network_parameters::network_parameters(const char* weights1, const char* weights2, const char* biases, const char* full, const char* full2, const char* fo, const char* g){
	read_from_file(romcontents, weights1); 
	read_from_file(romcontents2, weights2); 
	read_from_file(bias, biases); 
	read_from_file(fully_connected, full); 
	read_from_file(fully_connected2, full2); 
	read_from_file(final_bias, fo); 
	read_from_file(fully_connected_bias, g); 
}
