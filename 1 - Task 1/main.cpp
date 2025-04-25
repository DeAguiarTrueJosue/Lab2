#include <stdio.h>

int main() {

	for (int i = 1, j = 100; i <= 20 || j > 80; i++, j--)
	{
		printf("i = %2i and j = %i\n", i, j);
	}

	for (int i = 1; i <= 50; i++)
	{
		if (i % 3 == 0 || i % 4 == 0) {
			printf("%2i is divisible by", i);
			if (i % 3 == 0) {
				printf(" 3");
				if (i % 4 == 0)
				{
					printf(" and");
				}
			}

			if (i % 4 == 0) {
				printf(" 4");
			}
			printf("\n");
		}
	}



	return 0;
}