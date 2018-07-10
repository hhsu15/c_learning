#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
// declear an array, or really assign the memory
	int nums[3];
	nums[0] = 20;
	nums[1] = 3;
	nums[2] = 10;

	for (int i = 0; i < 3; i++)
	{
		printf("%i\n", nums[i]);
	}


}
