#include <stdio.h>
#include <math.h>

int main(void)
{
	int mode;
    char op,operation;
	double first, second,number;

	printf("Select mode:\n");
	printf("1. Basic Arithmetic\n");
	printf("2. Power/Root Operations\n");
	printf("Enter mode: ");
	scanf("%d", &mode);

	switch (mode)
	{
		case 1:
		{

			printf("Enter an operator (+, -, *, /): ");
			scanf(" %c", &op);
			printf("Enter two numbers: ");
			scanf("%lf %lf", &first, &second);

			switch (op)
			{
				case '+':
					printf("Result: %.2f\n", first + second);
					break;
				case '-':
					printf("Result: %.2f\n", first - second);
					break;
				case '*':
					printf("Result: %.2f\n", first * second);
					break;
				case '/':
					if (second == 0)
						printf("Error: division by zero is not allowed.\n");
					else
						printf("Result: %.2f\n", first / second);
					break;
				default:
					printf("Invalid operator.\n");
			}
			break;
		}
		case 2:
		{

			printf("Enter 's' for square or 'r' for square root: ");
			scanf(" %c", &operation);
			printf("Enter a number: ");
			scanf("%lf", &number);

			switch (operation)
			{
				case 's':
					printf("Result: %.2f\n", number * number);
					break;
				case 'r':
					if (number < 0)
						printf("Error: square root of a negative number is not real.\n");
					else
						printf("Result: %.2f\n", sqrt(number));
					break;
				default:
					printf("Invalid operation.\n");
			}
			break;
		}
		default:
			printf("Invalid mode.\n");
	}

	return 0;
}
