/*
 * 6_1.c
 * 
 * ���� ����ࠫ쭮� �᫮ N. �뢥��� �� ��� ���� �� �����, � ��אַ�
 * ���浪�, ࠧ���� �� �஡����� ��� ���묨 ��ப���.
 * ����室��� ॠ�������� ४��ᨢ��� �㭪��.
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
	printf("������ ����ࠫ쭮� �᫮: \n");
	scanf("%d", &num);
	print_num(num);
	return 0;
}


