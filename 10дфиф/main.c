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

	strcpy(b[0].book_name, "Гуливер");
	strcpy(b[0].author, "Зульфат");
	strcpy(b[0].count, 2);

	strcpy(b[1].book_name, "Жульбек");
	strcpy(b[1].author, "Андрей");
	strcpy(b[1].count, 6);

	strcpy(b[2].book_name, "Книту каи");
	strcpy(b[2].author, "Алтынбек");
	strcpy(b[2].count, 3);
	
	printf("Введите автора:\n ");
	char sym[40];
	scanf_s("%s", &sym);
	for (int i = 0; i < 2; i++) {
		if (sym == b[i].author) {
			printf("Кол-во: %d", b[i].count);
		}
	}
	
	
	return 0;
}