/*
 * 6_4.c
 * 
 * ���� ��᫥����⥫쭮��� 楫�� �ᥫ �१ �஡��, 
 * ����������� �᫮� 0.�뢥�� �� ������ �᫠ 
 * �� �⮩ ��᫥����⥫쭮��,��࠭�� �� ���冷�.
 * 
 * 
 */

#include <stdio.h>

void odd_number(void)
{
	int x;
	scanf("%d", &x);
	if (x == 0)
		return;
	if (x % 2 != 0)
		printf("%d ", x);
	odd_number();
}

int main()
{
	printf("������ ����ࠫ�� �᫠ �१ �஡��: \n");
	odd_number();
	return 0;
}


