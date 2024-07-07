/*
 * 6_3.c
 * 
 * Дано натуральное число N.
 * Посчитать количество "1" в двоичной записи числа.
 * 
 * 
 * 
 */

#include <stdio.h>

int number_1(int x)
{
	if (x / 2 == 0)
		return x % 2;
	return x % 2 + number_1(x / 2);
}

int main()
{
	int x;
	printf("Введите натуральное число: \n");
	scanf("%d", &x);
	printf("%d \n", number_1(x));
	return 0;
}


