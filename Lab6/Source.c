#include <locale.h>
#include <stdio.h>
#define _USE_MATH_DEFINES 

void main()
{
	setlocale(LC_CTYPE, "RUS");

	int min = 0; 
	int hour = 0;

	puts("������� ���-�� �����: ");
	scanf("%d", &hour);
	puts("������� ���-�� �����: ");
	scanf("%d", &min);

	if (min / 5 == hour)
		printf("������� ��������� �� ����� �����");
	else
		printf("������� ��������� �� �� ����� �����");

}