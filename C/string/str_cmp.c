#include <stdio.h>
#include <string.h>


int main(void)
{

char *string_1 = "my string";
char *string_2 = "my string";



if (!string_1)
{
	return 1; // main return 1 means error occured
}

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
