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
struct people {
	char fullname[20];
	int age;
};

typedef struct people T1;

int main() {
	setlocale(LC_ALL, "");
	struct book b[3];

	strcpy(b[0].book_name, "Гуливер");
	strcpy(b[0].author, "Zulfat");
	b[0].year = 2004;

	strcpy(b[1].book_name, "Жульбек");
	strcpy(b[1].author, "Shakal");
	b[1].year = 1984;

	strcpy(b[2].book_name, "Книту каи");
	strcpy(b[2].author, "Diana");
	b[2].year = 2019;
	
	printf("Введите автора: ");
	char sym[50];
	int counter = 0;
	scanf("%s", &sym);
	for (int i = 0; i < 3; i++) {
		if (strcmp(sym, b[i].author) == 0) {
			counter++;
		}
	}
	printf("Кол-во книг: %d", counter);


	T1 Mas[4] = { "",0,"",0, "",0, "",0 };
	for (int i = 0; i < 4; i++) {
		printf("\nВведите фамилию: ");
		scanf("%s", &Mas[i].fullname);
		printf("\nВведите возраст: ");
		scanf("%d", &Mas[i].age);
		printf("\n");
	}
	for (int i = 0; i < 4; i++) {
		printf("\nфамилия: %s\n Возраст: %d", Mas[i].fullname, Mas[i].age);
	}


	return 0;
}
