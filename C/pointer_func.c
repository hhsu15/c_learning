#include <stdio.h>
#include <stdlib.h>

//A pointer is a variable whose value is an address of another variable

//A function that takes a pointer as argument
// i.e, you will pass the address of an variable
void get_value(int *my_pointer){
    
	//it then assign the value to that address
    *my_pointer = 1000;
	return;
};

//get sum from an array
//there are 3 ways to pass an array into a function:
//int array_val[3]
//int array_val[]
//int *array_val  //you can just pass the pointer of the array
int get_sum(int *array_val, int size){
	int sum = 0;
	for (int i=0; i < size; i++){
    	sum += array_val[i];
	};

	return sum;
}

int main() {

	int the_value;
	//pass the address of the_value variable
	get_value(&the_value);

	//it then assgin value of 1000 to that address
	//so when you now print the value of the_value..
	printf("The value becomes...%d\n",the_value);
    
	//now I want to see if I can simply assgin value to an address
	int x;
	int *p = &x;
	printf("the value of x is: %d\n", x);
	printf("now let's try assigning the value..");
	*p = 500;
	printf("now the value of x is...%d\n", x);
    
	//call sum function by passing the array
    int my_arr[5] = {2,4,5,6};
    int my_sum = get_sum(my_arr, 5);
	printf("my sum is :%d \n", my_sum);
}
