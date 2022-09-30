#include<stdio.h>
#include<locale.h>

void main(void)
{

	setlocale(LC_ALL, "RUS");
	
	int num, A, x;

	puts("Задание 1");
	puts("Введите число");
	scanf_s("%d", &num);
	A = num;
	printf("Введено число %d\n", A);
	puts("Введите число B");
	scanf_s("%d", &x);
	printf("Введено число %d\n", x);
	printf("a+b=%d\n", x + num);
	printf("a-b=%d\n", x - num);
	printf("a*b=%d\n", x * num);
	printf("a/b=%d\n", x / num);
	printf("Остаток от деления a%b=%d\n", x % num);

}
