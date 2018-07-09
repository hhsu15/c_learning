#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// char *var is a way to declear a string
// for string, we can think of this like we
// declear a pointer (type *var)
// whose value is the address (of another variable)


int main(void)
{
	// declear string using char *
	char *s = "Hello";
	printf("%s\n", s);

    /* This does not work...
	printf("please enter your name: \n");    
	// declear strig without specifying the length 
	char *name;
	scanf("%s", name);
	printf("Hi %s\n", name);
    */
    
    // to compare two strings if they are visually the same
    /*
	char *string1 = "my string";
	char *string2 = "my second string";
	*/
    char string1[12]= "my string";
    char string2[12]= "my string";

	printf("string 1 is %s. \n", string1);
	printf("string 2 is %s. \n", string2);
	
    // when you get the string, you are getting back the address of 
	// the first charecter stored in the memory
    printf("%x\n", string1);
    printf("%x\n", string2);

	
	if (strcmp(string1, string2) == 0)
	{
 		printf("Same\n");
	}
	else 
	{
		printf("different\n");
	}
}

