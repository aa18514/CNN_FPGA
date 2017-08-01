#ifndef NETWORK_PARAMETERS_H
#define NETWORK_PARAMETERS_H
#include<cstdlib>
#include<stdint.h>
class network_parameters{
	public:	
		network_parameters(const char* weights1, const char* weights2, const char* bias, const char* fully, const char* fully2, const char* final_bias, const char* b);
		double romcontents[20 * 25];
		double romcontents2[25000]; 
		double fully_connected[500 *800];
		double fully_connected2[10 * 500]; 
		double bias[20];
		
		double final_bias[10]; 
		double fully_connected_bias[500]; 
};

#endif
