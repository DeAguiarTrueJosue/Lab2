#include <stdio.h>
#include <stdlib.h>

int main() {

	int height = 9;

	for (int i = 1; i <= height; i++) // This line is responsable to say the amount of lines the pyramid is going to use. 1 to height.
	{
		for (int j = 1; j <= height * 2 - 1; j++) // This line is responsable to say the amount of columns the pyramid is going to use. 1 to height * 2 - 1.
		{
			if (abs(height - j) + abs(i - height) - height < 0) // here, the if is checking if the space in the grid should have a * or not.
			{
				if (((i % 2) != (j % 2) && height % 2 == 0) || ((i % 2) == (j % 2) && height % 2 == 1)) {
					printf("%i", i);
				}
				else {
					printf(" ");
				}
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