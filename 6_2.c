/*
 * 6_2.c
 * 
 * Составить рекурсивную функцию.Выведите все числа от A до B
 * включительно, в порядке возрастания, если A < B, или в порядке
 * убывания в противном случае.
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
	printf("Введите два натуральных числа: \n");
	scanf("%d%d", &x1, &x2);
	order_number(x1, x2);
	return 0;
}


