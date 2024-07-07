/*
 * 6_1.c
 * 
 * Дано натуральное число N. Выведите все его цифры по одной, в прямом
 * порядке, раздуляя их пробелами или новыми строками.
 * Необходимо реализовать рекурсивную функцию.
 * void print_num(int num)
 * 
 */

#include <stdio.h>

void print_num(int num)
{
	if (num >= 10)
		print_num(num / 10);
	printf("%d\n", num % 10);
}

int main()
{
	int num;
	printf("Введите натуральное число: \n");
	scanf("%d", &num);
	print_num(num);
	return 0;
}


