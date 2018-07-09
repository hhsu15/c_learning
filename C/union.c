#include <stdlib.h>
#include <stdio.h>
#include <string.h>


//union
//union differs from structure in that it only allocates the max from its
//variables and share that memory with all other variables in it
union my_union {
	int id; //takes 4 byte of memory
	char the_char; //takes 1 bybe of memory
};


int main() {
	union my_union union_1;
    union_1.id = 5;
	union_1.the_char = 'h';

	printf("id is %d\n the char is %c\n ", union_1.id, union_1.the_char);
    

	//print out the size
	printf("size of union = %d\n", sizeof(union_1));
return 0;
}
