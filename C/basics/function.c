#include <stdio.h>
#include <stdlib.h>

//void means it's a function that does not return anything
//prototying the function if it's below the main
void myFunction();
int sum(int a, int b);

int main(){
	myFunction();
    int	sum_num = sum(3, 5);
	printf("The output of the sum function is %d\n", sum(10,5));
	return 0;
}


void myFunction(){
	printf("myFunction is called!\n");
}

int sum(int a, int b) {
	int sum = a + b;
	return sum;
}
