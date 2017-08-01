#ifndef CIFAR10_READER_H
#define CIFAR10_READER_H
#include <fstream>
using namespace std; 

class cifar10_reader{
	public: 
		cifar10_reader(const char* full_path); 
		void pretty_print(int image_number, int feature_map); 	
		void read_images();
		float**** _dataset;
	private:  
		ifstream file;
}; 	
#endif
