#include<stdio.h>
#include<locale.h>

void main(void)
{

	setlocale(LC_ALL, "RUS");
	
	int num, A, x;

	puts("������� 1");
	puts("������� �����");
	scanf_s("%d", &num);
	A = num;
	printf("������� ����� %d\n", A);
	puts("������� ����� B");
	scanf_s("%d", &x);
	printf("������� ����� %d\n", x);
	printf("a+b=%d\n", x + num);
	printf("a-b=%d\n", x - num);
	printf("a*b=%d\n", x * num);
	printf("a/b=%d\n", x / num);
	printf("������� �� ������� a%b=%d\n", x % num);

}
