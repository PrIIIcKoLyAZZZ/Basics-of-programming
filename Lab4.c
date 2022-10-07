#include <stdio.h>
#include <math.h>

int main()
{
    int n, c1, c2;
    scanf("%d", &n);
    printf("%d", ((n >= 23) && (n <= 45))); //Через логический оператор

    c1 = 45 / n;
    c2 = n / 23;
    printf("\n%d", c1 & c2);
    printf("\n");

    //Задание №2

    int bin[32];
    int ii = 0;
    int number = n;
    while(number > 0) {
        bin[ii] = abs(number % 2);
        number /= 2;
        ++ii;
    }
    for (int i = ii; i < 32; ++i) {
        bin[i] = 0;
    }
    if(n < 0)
        bin[31] = 1;
    printf("\n%d",bin[3]);

    return 0;
}