 #include <stdio.h>

int main(void)
{
	int category, item;

	printf("Restaurant Menu\n");
	printf("1. Beverages\n2. Main Course\n3. Desserts\n");
	printf("Choose a category: ");
	scanf("%d", &category);

	switch (category)
	{
		case 1:
			printf("Beverages\n");
			printf("1. Tea - $2.00\n2. Coffee - $3.00\n3. Juice - $4.00\n");
			printf("Choose an item: ");
			scanf("%d", &item);
			switch (item)
			{
				case 1: printf("Tea: $2.00\n"); break;
				case 2: printf("Coffee: $3.00\n"); break;
				case 3: printf("Juice: $4.00\n"); break;
				default: printf("Invalid beverage selection.\n");
			}
			break;

		case 2:
			printf("Main Course\n");
			printf("1. Burger - $8.00\n2. Pizza - $10.00\n3. Pasta - $9.00\n");
			printf("Choose an item: ");
			scanf("%d", &item);
			switch (item)
			{
				case 1: printf("Burger: $8.00\n"); break;
				case 2: printf("Pizza: $10.00\n"); break;
				case 3: printf("Pasta: $9.00\n"); break;
				default: printf("Invalid main course selection.\n");
			}
			break;

		case 3:
			printf("Desserts\n");
			printf("1. Cake - $5.00\n2. Ice Cream - $4.00\n3. Brownie - $4.50\n");
			printf("Choose an item: ");
			scanf("%d", &item);
			switch (item)
			{
				case 1: printf("Cake: $5.00\n"); break;
				case 2: printf("Ice Cream: $4.00\n"); break;
				case 3: printf("Brownie: $4.50\n"); break;
				default: printf("Invalid dessert selection.\n");
			}
			break;

		default:
			printf("Invalid category selection.\n");
	}

	return 0;
}
