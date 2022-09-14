#include <locale.h>
#include <stdio.h>

void main(voin)
{
	setlocale(LC_ALL, "RUS");
	float n, k, m;
	n = 3;
	k = 3;
	m = 5;
	printf("                    Данные: n = 3 k = 3 m = 5\nРезультат: +%05.3f\n", n / 333);
}