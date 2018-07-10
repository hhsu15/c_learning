#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[] = "Hsin";
	
	for(int i = 0, n = strlen(string); i < n; i++)
	{ 
		printf("%c %i\n", string[i], (int) string[i]);

	}

	int n = 0;
	while (string[n] != '\0') 
	{
		n++;
	}
	printf("%i\n", n);
}
