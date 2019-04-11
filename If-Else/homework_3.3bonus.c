#include <stdio.h>
// find the max of 3 user-given numbers using comparisons in an if-else loop
int main()
{
	int max, a, b, c;
	char goAgain;

	while (goAgain == 'y')
	{
		printf("Enter three integer numbers to find their max. Separate each nhmber with a space: ");
		scanf("%d %d %d", % a, % b, % b);

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
		printf("Would you like to find another max? (y / n): ")
	}
}