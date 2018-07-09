#include <stdio.h>
#include <stdlib.h>

int main(){

	int i;
    printf("Enter a number for range: \n");
	scanf("%d", &i);
   
   // while loop - check the condition before excuting the code
	while (i > 0) {
    	printf("value: %d \n", i);
		i--;
	}
    
   // do while loop - execute once before checking the condition
    int d;
	printf("Enter another number:\n");
	scanf("%d",&d);

	do {
    	printf("do while value: %d\n",d);
	    d--;
	}
    while (d > 0);

	// for loop
    int upper;
	printf("Enter another one again:\n");
	scanf("%d",&upper);
	for (int j=0; j<upper; j++) {
    	printf("for loop value: %d\n",j);
	}

//return 0;
}
