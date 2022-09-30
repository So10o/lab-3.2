#include<stdio.h>
#include<locale.h>
#define D 2.54
#define S 2.7076

void main(void)
{

	setlocale(LC_ALL, "RUS");
	int dym, star;
	float result_dym, result_star;
	puts("¬ведите количество дюйм");
	scanf_s("%d", &dym);
	result_dym = D * dym;
	result_star = S * dym;
	printf("% d дюймов Ц это % .1f см\n", dym, result_dym);
	printf("% d старолитовских дюймов Ц это % .1f см", dym, result_star);



}