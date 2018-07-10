#include <stdio.h>


// main function takes two arguments
// argc stands for argument count 
int main(int argc, char *argv[])
{

	if (argc == 2)
	{
		printf("hello, %s\n", argv[1]);
	}

	else
	{
		printf("hello world\n");
	}


}
