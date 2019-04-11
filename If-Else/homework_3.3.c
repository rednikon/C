#include <stdio.h>
// find the max of 3 numbers using comparisons in an if-else loop
int main()
{
	int max, a = 9, b = 11, c = 7; 

	if (a > b && a > c) {
		max = a;
	}
	else if (b > a && b > c)
	{
		max = b;
	}
	else {
		max = c;
	}
	printf("The max is: %d\n\n", max);
}