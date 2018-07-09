#include <stdio.h>
#include <string.h>

void swap (int *a, int *b);

int main(void)
{
	int x = 1;
	int y = 2;
	
	printf("x is %i, y is %i \n", x, y);
    
	// & means get the address of the variable,
	// so we pass the address of x, y
    swap(&x, &y);

	printf("x is %i y is %i \n", x, y);
}

// swap function takes addresses (pointers) as arguments
void  swap(int *a, int *b)
{
	// declear variable tmp and assgin value stored in pointer a
	int tmp = *a;
    // assign value of b to a
	a* = b*;
	// assign tmp (which is just a value, not a pointer) to what's stored in b
	// again, b is an address (pointer) *b is what's stored in that address)
	*b = tmp;
}



