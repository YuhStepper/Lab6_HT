#include <locale.h>
#include <stdio.h>
#define _USE_MATH_DEFINES 

void main()
{
	setlocale(LC_CTYPE, "RUS");

	int min = 0; 
	int hour = 0;

	puts("Введите кол-во часов: ");
	scanf("%d", &hour);
	puts("Введите кол-во минут: ");
	scanf("%d", &min);

	if (min / 5 == hour)
		printf("Стрелки находятся на одной линии");
	else
		printf("Стрелки находятся не на одной линии");

}