#include <stdio.h>
#include <math.h>

double pi = 3.14; // Задаю число пи

double findZ1(int a)
{
    return 2 * pow(sin(pi - 2 * a), 2) * pow(cos(pi * 5 + 2 * a), 2); // Вычисление z1
}

double findZ2(int a)
{
    return 0.25 - 0.25 * sin(2.5 * pi + 8 * a); // Вычисление z2
}

int main() {
    double a; // Задаю a

    scanf("%lf", &a); // Ввод a

    double output1 = findZ1(a);
    printf("z1: %lf\n", output1); // Выввод z1

    double output2 = findZ2(a);
    printf("z2: %lf\n", output2); // Вывод z2

    return 0;
}