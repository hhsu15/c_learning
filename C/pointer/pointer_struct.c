#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
	int number;
	struct node *next; //pointer of a node structure
}

int main(void)
{
	bool found = false;
	// -> is the way for pointer structure (node *ptr) to get the attribute 
	// much like Student.id using the dot operator 
	for (node *ptr = numbers; ptr != NULL; ptr = ptr->next)
	{
		if (ptr->number == number)
		{
			found = true;
			break;
		}
	}

	 


}
