#include <stdio.h>
#include <locale.h>

int main() 
{

	setlocale(LC_ALL, "RUS");

	int a, b;
	puts("������� ����� A");
	scanf_s("%d", &a);
	puts("������� ����� B");
	scanf_s("%d", &b);
	printf("%s\n", "___________________");
	printf("%s\n", "| a*b | a+b | a-b |");
	printf("%s\n", "___________________");
	printf("|%2d*%2d|%2d+%2d|%2d-%2d|\n", a, b, a, b, a, b);
	printf("%s\n", "___________________");
	printf("|%5d|%5d|%5d|\n", a * b, a + b, a - b);
	return 0;

}