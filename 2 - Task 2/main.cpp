#include <stdio.h>

void PrintBox(int width, int height, char character) {
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			printf("%c", character);
		}
		printf("\n");
	}
	printf("\n");
}

void RepeatSequence(char character, int count, int repetition) {
	for (int i = 0; i < repetition; i++)
	{
		for (int j = 0; j < count; j++)
		{
			printf("%c", character);
		}
	}
	printf("\n");
	printf("\n");
}

int main() {
	PrintBox(5, 3, '>');
	PrintBox(8, 9, 'q');
	PrintBox(7, 4, '0');

	RepeatSequence('a', 2, 4);
	RepeatSequence('9', 9, 7);
	RepeatSequence('*', 8, 3);


}