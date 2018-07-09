#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	int *x;
    
	// need to allocate memory for a pointer if you want to dereference
	x = malloc(sizeof(int));

	// this is called dereferencing x, i.e, set a value to the pointer
	// btw this is stored in "heap" as opposed to "stack"
	*x = 10;
	printf("%i\n", *x);
    free(x);
}
