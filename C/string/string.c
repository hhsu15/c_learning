#include <stdio.h>
#include <stdlib.h>
#include <string.h> //different function for string
int main(){

//string is char *


char my_str[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
char my_other_str[] = "hello";

printf("my string vlaue = %s\n", my_str);
printf("my other string vlaue = %s\n", my_other_str);

char string_1[12] = "hello";
char string_2[12] = " world";
char string_3[12];

strcpy(string_3, string_1); //strcpy(dest, source)
printf("Copy string to string_3:%s\n", string_3);

strcat(string_1, string_2);
printf("Concat string: %s\n", string_1);

int len_str = strlen(string_1);
printf("The length of the string: %d\n", len_str);

//compare two strings using strcmp
int value = strcmp(string_1, string_2);
printf("strcmp = %d \n", value);

if (strcmp(string_1, string_2) == 0)
{
	printf("same\n");
}
else
{
	printf("different\n");
}

return 0;


}
