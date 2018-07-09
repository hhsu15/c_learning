#include <stdio.h>
#include <stdlib.h>

int main() {
	// declare array in C
	// indicate the number of elements in the array
 	int my_array[3] = {20, 30, 40};
	int access_array = my_array[1];
	printf("value is equal to %d\n", access_array);

    char char_array[5] = {'h','e','l','l','o'};
	for (int i=0; i<5; i++) {
    	printf("%c", char_array[i]);
	}
	printf("\n");

	//change the value in the array
	char_array[0] = 'y';
	printf("The array is now: \n");
	for (int i=0; i<5; i++) {
    	printf("%c", char_array[i]);
	}
	printf("\n");

    //two dimention array (like dataframe)
	 int data_frame [3][4] = {
     	{1,2,3,0},
		{4,5,6,0},
		{7,8,9,0}
	 };
     
	 for (int i=0; i<3; i++) {
     	for (int j=0; j<4; j++) {
        	printf("checking...%d\n", data_frame[i][j]);

		}
	 }
}

