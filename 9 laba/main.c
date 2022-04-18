#include <stdio.h>
#include <time.h>
#include <malloc.h>
#include <string.h>
#include <math.h>
#include <locale.h>

typedef int зульфат;
//1.4,2.4
int func_1_4(int x) {
	return 5 * x * 32;
}
int func_2_4_dop(int x) {
	return x + 10;
}
int Function(int (*p) (int), int (*s) (int), int x, int y) {
	return p(x, y) + s(x, y);
}
зульфат Function1(int (*p) (int), int (*s) (int), int x, int y) {
	return p(x, y) + s(x, y);
}
int main()
{
	setlocale(LC_ALL, "");
	int m = func_1_4(20);
	printf("1.4: %d\n", m);
	printf("2.4:%d ", Function(func_1_4, func_2_4_dop, 10, 20));
	printf("3:%d ", Function1(func_1_4, func_2_4_dop, 10, 20));
	int a = 0, b = 0, tmp = 0;;
	
	printf("\nВведите а =");
	scanf_s("%d", &a);
	printf("Введите b =");
	scanf_s("%d", &b);
	int i = a;
	printf("1.Возвести а в степень b\n2.Умножение ab\n3.Получение остатка от a/b\n4. проверка a/b\n");
		int sym = 0;
		scanf_s("%d", &sym);
		switch (sym) {
		case 1: 
			while (b > 1) {
				a *= i;
				b--;
			}
			printf("Результат : %d", a);
			break;
		case 2: printf("Результат : %d", a * b);
			break;
		case 3: printf("Результат : %d", a % b);
			break;
		case 4:
			if (a % b == 0) {
				printf("Результат : Да");
				break;
			}
			else {
				printf("Результат : Нет");
				break;
			}
		
		}
	return 0;
}