#include <stdio.h>
#include <stdlib.h>

int main() {

//The ternary (conditional) operator in C
int a = 10;
int b = 20;

///(logical expression) ? (return if true) : (return if false)
int c;
c = (a > b) ? a : b;
printf("The answer is %d\n",c);

int x = 30;
int y = 40;
int z = (x < y) ? x*2 : y*2;
printf("The number is %d\n", z);

return 0;
}
