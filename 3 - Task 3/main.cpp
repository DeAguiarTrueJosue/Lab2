#include <stdio.h>

int Pow(int base, int exponent) {
	int answer = 1;
	for (int i = 0; i < exponent; i++)
	{
		answer *= base;
	}
	return answer;
}

int CountDigits(int number) {
	int iterations = 0;
	while (number != 0) {
		iterations++;
		number /= 10;
	}
	return iterations;
}

int GetReverseNumber(int number) {
	int reverseNumber = 0;
	int iterations = CountDigits(number) - 1;
	while (iterations >= 0) {
		reverseNumber += number % 10 * Pow(10, iterations);
		number /= 10;
		iterations--;
	}
	return reverseNumber;
}

int GetDigitSum(int number) {
	int sum = 0;
	while (number > 0) {
		sum += number % 10;
		number /= 10;
	}
	return sum;
}

int IsArmstrongNumber(int number) {
	int maybeArmstrong = number;
	int answer = 0;
	int digits = CountDigits(maybeArmstrong);
	while (number > 0) {
		answer += Pow(number % 10, digits);
		number /= 10;
	}
	if (maybeArmstrong == answer) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	printf("%i\n", GetReverseNumber(12345));
	printf("%i\n", GetReverseNumber(381648));
	printf("%i\n", GetReverseNumber(3585131));

	printf("\n");

	printf("%i\n", GetDigitSum(12345));
	printf("%i\n", GetDigitSum(381648));
	printf("%i\n", GetDigitSum(3585131));

	printf("\n");

	for (int i = 1; i < 1000000000; i++)
	{
		if (IsArmstrongNumber(i) == 1) {
			printf("%i is an Armstrong Number\n", i);
		}
	}

	return 0;
}