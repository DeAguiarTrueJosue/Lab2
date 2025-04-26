#include <stdio.h>
#include <stdlib.h>

int main() {

	int height = 9;

	for (int i = 0; i <= height + 1; i++)
	{
		for (int j = 0; j <= height * 2 + 2; j++)
		{
			if (i == 0 || i == height + 1 || j == 0 || j == height * 2 + 2)
			{
				printf("*");
			}
			else {
				if (j % 2 == 0 && j < i * 2 + 1)
				{
					printf("%i", i);
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}


	return 0;
}