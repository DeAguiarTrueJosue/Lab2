#include <stdio.h>

static float CalculateArea(float radius) {
	return radius * radius * 3.14159f;
}

static int IsPerfectSquare(int number) {
	for (int i = 1; i <= number; i++)
	{
		if (i * i == number) {
			return 1;
		}
	}
	return 0;
}

static float ConvertTemperature(float value, char convertTo) {
	switch (convertTo)
	{
	case 'C':
	case 'c':
		return (value - 32) * 5 / 9;
	case 'F':
	case 'f':
		return value * 9 / 5 + 32;
	default:
		return 0;
		break;
	}
}

int main() {

	printf("The area of a circle with radius %.2f is %.2f\n", 4.0f, CalculateArea(4.0f));
	printf("The area of a circle with radius %.2f is %.2f\n", 2.0f, CalculateArea(2.0f));
	printf("The area of a circle with radius %.2f is %.2f\n", 15.9f, CalculateArea(15.9f));
	printf("The area of a circle with radius %.2f is %.2f\n", 7.3f, CalculateArea(7.3f));

	printf("\n");

	if (IsPerfectSquare(7) == 1) { printf("%i is a perfect circle!\n", 7); }
	else { printf("%i is NOT a perfect square\n", 7); }
	if (IsPerfectSquare(1) == 1) { printf("%i is a perfect circle!\n", 1); }
	else { printf("%i is NOT a perfect square\n", 1); }
	if (IsPerfectSquare(2) == 1) { printf("%i is a perfect circle!\n", 2); }
	else { printf("%i is NOT a perfect square\n", 2); }
	if (IsPerfectSquare(4) == 1) { printf("%i is a perfect circle!\n", 4); }
	else { printf("%i is NOT a perfect square\n", 4); }
	if (IsPerfectSquare(81) == 1) { printf("%i is a perfect circle!\n", 81); }
	else { printf("%i is NOT a perfect square\n", 81); }
	if (IsPerfectSquare(80) == 1) { printf("%i is a perfect circle!\n", 80); }
	else { printf("%i is NOT a perfect square\n", 80); }
	if (IsPerfectSquare(50) == 1) { printf("%i is a perfect circle!\n", 50); }
	else { printf("%i is NOT a perfect square\n", 50); }
	if (IsPerfectSquare(10000) == 1) { printf("%i is a perfect circle!\n", 10000); }
	else { printf("%i is NOT a perfect square\n", 10000); }

	printf("\n");

	printf("Converting %.2f to %c: %.2f\n", 7.3f, 'c', ConvertTemperature(7.3f, 'c'));
	printf("Converting %.2f to %c: %.2f\n", 73.0f, 'C', ConvertTemperature(73.0f, 'C'));
	printf("Converting %.2f to %c: %.2f\n", 7.3f, 'f', ConvertTemperature(7.3f, 'f'));
	printf("Converting %.2f to %c: %.2f\n", 73.0f, 'F', ConvertTemperature(73.0f, 'F'));
	printf("Converting %.2f to %c: %.2f\n", 7.3f, '0', ConvertTemperature(7.3f, '0'));
	printf("Converting %.2f to %c: %.2f\n", 7.3f, 'e', ConvertTemperature(7.3f, 'e'));
	printf("Converting %.2f to %c: %.2f\n", 7.3f, '>', ConvertTemperature(7.3f, '>'));

	return 0;
}