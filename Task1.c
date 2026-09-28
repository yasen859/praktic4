#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_CTYPE, "RUS");
    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;
    printf("char c =%c\n", c);
    printf("int i =%d\n", i);
    printf("float f =%f\n", f);
    printf("double d =%e\n", d);

   
    printf("Введите символ char:");
    scanf_s("%c", &c); 

    printf("Введите целое число:");
    scanf_s("%d", &i);

    printf("Введите число float:");
    scanf_s("%f", &f);

    printf("Введите число(double):");
    scanf_s("%lf", &d);

    printf("char c =%c\n", c);
    printf("int i =%d\n", i);
    printf("float f =%.2f\n", f); 
    printf("double d =%.10e\n", d); 

}


