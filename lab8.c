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
    printf("ВЫЧИСЛЕНИЕ ПРОИЗВЕДЕНИЯ\n");
    printf("=============================================================\n");
    printf("Условие задачи:\n");
    printf("Вычислить произведение 1.1 * 1.2 * 1.3 * ... * 1.N\n");
    printf("Введите целое N: ");
    scanf("%d", &N);
    printf("=============================================================\n");

    if (N < 0) {
        printf("Ошибка: N должно быть неотрицательным.\n");
        printf("=============================================================\n");
        return 0;
    }

    for (i = 1; i <= N; i++) {
        chislo = 1.0 + (double)i / 10.0;
        result = result * chislo;
    }

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
