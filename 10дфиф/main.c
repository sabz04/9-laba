#include <stdio.h>
#include <time.h>
#include <malloc.h>
#include <string.h>
#include <math.h>
#include <locale.h>



struct book {
	char book_name[50];
	char author[50];
	int count;
} book;

int main() {
	setlocale(LC_ALL, "");

	struct book b[3];

	strcpy(b[0].book_name, "�������");
	strcpy(b[0].author, "�������");
	strcpy(b[0].count, 2);

	strcpy(b[1].book_name, "�������");
	strcpy(b[1].author, "������");
	strcpy(b[1].count, 6);

	strcpy(b[2].book_name, "����� ���");
	strcpy(b[2].author, "��������");
	strcpy(b[2].count, 3);
	
	printf("������� ������:\n ");
	char sym[40];
	scanf_s("%s", &sym);
	for (int i = 0; i < 2; i++) {
		if (sym == b[i].author) {
			printf("���-��: %d", b[i].count);
		}
	}
	
	
	return 0;
}