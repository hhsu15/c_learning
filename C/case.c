#include <stdio.h>
#include <stdlib.h>

int main() {

	int score;

	printf("What is your score? \n");
	scanf("%d", &score);

	switch (score)
	{
    case 95: // jumps to the next case action
	case 94:
	case 93:
    case 90:
		printf("Excellent\n");
		break;
	case 75:
		printf("Good\n");
		break;
	case 60:
		printf("Meet Expectation\n");
		break;
	case 40:
		printf("Failed\n");
		break;
	default:
		printf("Unknown\n");
	}

return 0;
}
