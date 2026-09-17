 #include <stdio.h>
#include<ctype.h>
int main(void)
{
	char department;
	int semester;
    
	printf("Enter department (C, E, or B): ");//C-computer,E-engineer,B-business
	scanf(" %c", &department);
	printf("Enter semester (1, 2, or 3): ");
	scanf("%d", &semester);

    department=toupper(department);
	
    switch (department)
	{
		case 'C':
			switch (semester)
			{
				case 1: printf("Core course: Programming Fundamentals\n"); break;
				case 2: printf("Core course: Data Structures\n"); break;
				case 3: printf("Core course: Database Systems\n"); break;
				default: printf("Invalid semester.\n");
			}
			break;

		case 'E':
			switch (semester)
			{
				case 1: printf("Core course: Circuit Analysis\n"); break;
				case 2: printf("Core course: Digital Logic Design\n"); break;
				case 3: printf("Core course: Signals and Systems\n"); break;
				default: printf("Invalid semester.\n");
			}
			break;

		case 'B':
			switch (semester)
			{
				case 1: printf("Core course: Principles of Management\n"); break;
				case 2: printf("Core course: Financial Accounting\n"); break;
				case 3: printf("Core course: Marketing Management\n"); break;
				default: printf("Invalid semester.\n");
			}
			break;

		default:
			printf("Invalid department.\n");
	}

	return 0;
}
