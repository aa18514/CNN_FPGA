#ifndef MNIST_IMAGE_READER_H
#define MNIST_IMAGE_READER_H
#include <fstream>
using namespace std; 
class image_reader{
	public: 
		image_reader(const char* full_path, const char* network); 
		int set_attributes(); 
	        void read_images(); 
		void pretty_print(int image_number); 	
		float*** _dataset;
		int get_rows();
		int get_cols();
	private:  
		int magic_number; 
		const char* net; 
		int n_rows; 
		int n_cols; 
		int image_size; 
		int number_of_images; 
		ifstream file;
}; 	
#endif
