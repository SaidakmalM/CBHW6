/*
 * 6_2.c
 * 
 * ���⠢��� ४��ᨢ��� �㭪��.�뢥��� �� �᫠ �� A �� B
 * �����⥫쭮, � ���浪� �����⠭��, �᫨ A < B, ��� � ���浪�
 * �뢠��� � ��⨢��� ��砥.
 * 
 * 
 */

#include <stdio.h>

void order_number(int x1, int x2)
{
	if (x1 == x2)
	{
		printf("%d", x1);
	}
	else
	{
		(x1 < x2) ? printf("%d ", x1++) : printf("%d ", x1--);
		order_number(x1, x2);
	}
}

int main()
{
	int x1, x2;
	printf("������ ��� ����ࠫ��� �᫠: \n");
	scanf("%d%d", &x1, &x2);
	order_number(x1, x2);
	return 0;
}


