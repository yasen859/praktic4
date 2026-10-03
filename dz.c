#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, ".UTF8");
	int hero1, hero2, hero3;
	int triple_strike;

	puts("Введите уровень силы для трёх героев:");
	scanf_s("%d", &hero1);
	scanf_s("%d", &hero2);
	scanf_s("%d", &hero3);

	triple_strike = (hero1 % 3 == 0) && (hero2 % 3 == 0) && (hero3 % 3 == 0);
	printf("Тройной удар был сделан(1 - да, 0 - нет): %d", triple_strike);
	system("pause");

}
