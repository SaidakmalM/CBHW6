/*
 * 6_3.c
 * 
 * ���� ����ࠫ쭮� �᫮ N.
 * ������� ������⢮ "1" � ����筮� ����� �᫠.
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
	printf("������ ����ࠫ쭮� �᫮: \n");
	scanf("%d", &x);
	printf("%d \n", number_1(x));
	return 0;
}


