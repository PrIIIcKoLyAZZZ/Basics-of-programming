#include <stdio.h>

int summa(int num1, int num2)
{
    return num2 + num2;
}

int main()
{
    int num1, num2, summ;
    scanf("%d%d", &num1, &num2);

    FILE *file = fopen("output.txt", "w");
    if (file == NULL)
        printf("-");
    else {
        fprintf(file, "%4d", summa(num1, num2));
    }


    fclose(file);

    return 0;
}