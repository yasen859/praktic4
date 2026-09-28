#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_CTYPE, "RUS");
    int a = 11;
    int b = 3;
    int x = a / b; 
    float y = a / b * 1. ; 
    double z = a / b; 
    printf("int x = %d\n", x);
    printf("fload y = %f\n", y);
    printf("doudle z = %e\n", z);
    
    // Вариант 1: приводим только а 
    printf("(float)a / b = %f\n", (float)a / b);
    printf("(double)a / b = %lf\n", (double)a / b);

    // Вариант 2: приводим обе переменные
    printf("(float)a / (float)b = %f\n", (float)a / (float)b);
    printf("(double)a / (double)b = %lf\n", (double)a / (double)b);

    // Вариант 3: приводим результат деления (скобки вокруг a/b)
    printf("(float)(a / b) = %f\n", (float)(a / b));
    printf("(double)(a / b) = %lf\n", (double)(a / b));





}


