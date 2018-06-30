#include <stdio.h>
#include <stdlib.h>

//A pointer is a variable whose variable is the address of antoher variable
int main(){
	int val=30;
    //declare pointer variable
	int *p = NULL;
    
	//assgin address to the pointer variable
	p = &val;


	printf("address of val = %x\n", &val); //print address of varibale val
	printf("value of pointer variable = %x\n", p); //should print same address
	
	//Get the value of the pointer, also called de-reference
	printf("value of pointer = %d\n", *p); //should print 30

    //Create array pointer
	int val_array[3] = {10, 20, 30};
	int *p_array[3];
	for (int i=0; i<3; i++){
	   //assgin the address of array elements
    	p_array[i] = &val_array[i];
	}
	
	//access array pointer to get values
	for (int i=0; i<3; i++){
		printf("element value of array pointer: %d\n", *p_array[i]);
	}
    
}
