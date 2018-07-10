#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student
{
	int id;
}
Student;

int main(void)
{
	struct Student Tom;
	Tom.id = 1;
	printf("%d\n", Tom.id);

	// Now let's try struture and pointer together
	struct Student *Jess;
	Jess = malloc(sizeof(Student));
    // This is for pointer, same as Jess.id if Jess were a varibale rather than a pinter
	Jess->id = 10;
	printf("%d\n",Jess->id); //this will print 10
    
}
