#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//C data structure
struct Student {
	int id;
	char name[20];
	float percentage;

};

int main(){
    //declear the variable
	struct Student tom;
	tom.id = 1;
	strcpy(tom.name, "Tom"); //copy the string value into the attribute
	tom.percentage = 90.0;
    
	printf("id = %d\n name = %s\n percentage = %f\n", tom.id, tom.name, tom.percentage);





return 0;
}
