#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int proizv()
{
    setlocale(LC_CTYPE, "RUS");

    int N, i;
    double result = 1.0;
    double chislo;

    printf("=============================================================\n");
    printf("Введите целое N: ");
    scanf("%d", &N);
    printf("=============================================================\n");

    for (i = 1; i <= N; i++) {
        chislo = 1.0 + (double)i / 10.0;
        result = result * chislo;
    }

    printf("Исходные данные:\n");
    printf("N = %d\n", N);
    printf("=============================================================\n");
    printf("Результат:\n");
    printf("Произведение = %.6f\n", result);
    printf("=============================================================\n");
}

int main()
{
    proizv();
    getchar();
    return 0;
}