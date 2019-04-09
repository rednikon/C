#include <stdio.h>

int main()
{
	int yourAge;

	printf("How old are you?: ");
	scanf("%d", &yourAge);

	if (yourAge < 13)
		printf("You are a kid.\n");
	else if (13 <= yourAge <= 19)
		printf("You are a teenager.\n");
	else
		printf("You are an adult.\n");
	return 0;
}