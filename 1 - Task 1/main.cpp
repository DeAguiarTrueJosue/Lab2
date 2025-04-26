#include <stdio.h>
#include <stdlib.h>

int main() {

	int height = 9;

	for (int i = 1; i <= height; i++)
	{
		for (int j = 1; j <= i * 2 + 1; j++)
		{
			if (j % 2 == 0)
			{
				printf("%i", i);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}


	return 0;
}