#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    
	// char *str = get_string("s: ");
	char *str = "hsin";
	if (!str)
	{
		return 1;
	}
	
	// allocate memory for another string
	// the length of the string + 1 (for the \0) times the size of memory char needs (1 byte)
	char *str_t = malloc((strlen(str) + 1)* sizeof(char));

	if (!str_t) // if out of memory you can get null 
	{
		return 1;
	}
    
	// copy string into memory
    for (int i = 0, n = strlen(str); i <=  n; i++) // i <= n to include the \0
	{ 
		str_t[i] = str[i];
	}
     
    // capitalize first letter in copy
	if (strlen(str_t) > 0)
	{
	str_t[0] = toupper(str_t[0]);
	printf("%s \n", str_t);
	}

    // pointer arithmetic 
	for (i = 0, n = strlen(str_t); i < n; i++)
	{
		// print out back to back charecters in memory
		printf("%c\n", *(str_t + i)

	}

return 0;
}
