#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//declare and initialize unsigned int to value > 2.1 billion
	unsigned int i=2200000000; 
	
	//declare a char * that points to address of unsigned int
	char *ir = &i;
	
	//print int i in hex
	printf("Value of unsigned int i: %x\n", i);
	
	//use pointer to print out each ind byte of your int
	for (int j=1; j<= sizeof(i); j++){
		printf("Value of byte # %d: %hhx\n", j, ir++);
		//increment each byte by 1
		printf("Value of byte # %d after increment by 1 in hex is %x and in decimal is %d\n", j, ir, ir);
		//increment each byte by 16
		ir+=15;
		printf("Value of byte # %d after increment by 16 in hex is %x and in decimal is %d\n", j, ir, ir);
		ir = &i; //resets value of i
		ir+=j;
	}

}