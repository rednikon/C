#include <stdio.h>
// demonstrate several math operations from user input
int main()
{
	// make the numbers decimals
	float firstN;
	float secondN;
	char op;
	char user_input;

	while (user_input == 'y') {
		printf("Type a number, operator, number -- separated by a space: ");
		scanf("%f %c %f", &firstN, &op, &secondN);

		if (op == '+')
			printf("%f + %f = %f", firstN, secondN, firstN + secondN);
		else if (op == '-')
			printf("%f - %f = %f", firstN, secondN, firstN - secondN);
		else if (op == '*')
			printf("%f * %f = %f", firstN, secondN, firstN * secondN);
		else if (op == '/')
			printf("%f / %f = %f", firstN, secondN, firstN / secondN);
		else if (op == '%')
			printf("%f % %f = %f", firstN, secondN, firstN % secondN);
		else
			printf("Unknown operator")
			printf("\n\n");
		printf("Do you wish to continue? (y / n) ");
		scanf("%c", &user_input);
		if (loop != 'y')
			printf("Good-bye!");
	}
	return 0;
}