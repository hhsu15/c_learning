#include <stdio.h>  //preprocessor commend
#include <stdlib.h> 

/*
This is c lanages code example
*/
int main() //entry point - must have one and only function
{
	//print function with placeholders
	printf("Hello World!!\n"); //print has to be double quote
    printf("%f\n",18.2); //float
    printf("%d\n",18);  //integer
    printf("%ld\n",123213123121); //large int
    printf("%lf\n",18.22222); //large float
    printf("%s\n","hello"); //string
    printf("%x\n",16); //hex

	//scanf("%s",); //take user input
	puts("this is my c program"); //same as printf

	// variables
	int age = 23;
	printf("The age is %d.\n",age);
    
	float pi = 3.14;
	char my_char = 'a'; //use single quote
	double big_pi = 3.1415927888888888;

	// always need to return	
	return 0;  //successful return 
}






