#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <malloc.h>
#include <string.h>
#include <math.h>
#include <locale.h>



struct book {
	char book_name[50];
	char author[50];
	int year;
} book;
struct T {
	char name[50];
	char fam[50];
};
int main() {
	setlocale(LC_ALL, "");
	struct book b[3];

	strcpy(b[0].book_name, "�������");
	strcpy(b[0].author, "Zulfat");
	b[0].year = 2004;

	strcpy(b[1].book_name, "�������");
	strcpy(b[1].author, "Shakal");
	b[1].year = 1984;

	strcpy(b[2].book_name, "����� ���");
	strcpy(b[2].author, "Diana");
	b[2].year = 2019;
	
	printf("������� ������: ");
	char sym[50];
	int counter = 0;
	scanf("%s", &sym);
	for (int i = 0; i < 3; i++) {
		if (strcmp(sym, b[i].author) == 0) {
			counter++;
		}
	}
	printf("���-�� ����: %d", counter);
	struct T t[4];
	for (int i = 0; i < 4; i++) {
		strcpy(t[i].name, "Diana");
		strcpy(t[i].fam, "Sabirova");
	}
	return 0;
}