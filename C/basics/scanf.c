#include <stdio.h>
#include <stdlib.h>

int main()
{
	int age;
	printf("Enter your age: \n");

	// the value of the user input (scanf) goes into &age
	scanf("%d", &age);
	if (age > 18) {
    	printf("Age is greater than 18\n");
	}	

    else if (age < 18) {
		printf("Age is less than 18\n");
	}

    else {
    	printf("Age is equal to 18\n");
	}
    
	char name[4];
	printf("What is your name?\n ");
    scanf("%s", &name);
    printf("Hello, %s\n", name);


return 0;
}
