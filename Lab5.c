#include <stdio.h>

int main()
{
    //Задание №1
    int massiveLen;
    scanf("%d", &massiveLen);
    int massive[massiveLen];

    for (int i = 0; i < massiveLen; ++i) {
        scanf("%d", &massive[i]);
    }

    for (int i = 0; i < massiveLen; ++i) {
        printf("%d ", massive[i]);
    }

    printf("\n");

    //Задание №2
    int matrix1[2][2];
    int matrix2[2][2];
    int matrix3[2][2];

    scanf("%d %d", &matrix1[0][0], &matrix1[0][1]);
    scanf("%d %d", &matrix1[1][0], &matrix1[1][1]);

    scanf("%d %d", &matrix2[0][0], &matrix2[0][1]);
    scanf("%d %d", &matrix2[1][0], &matrix2[1][1]);

    matrix3[0][0] = matrix1[0][0] * matrix2[0][0] + matrix1[0][1] * matrix2[1][0];
    matrix3[0][1] = matrix1[0][0] * matrix2[0][1] + matrix1[0][1] * matrix2[1][1];
    matrix3[1][0] = matrix1[1][0] * matrix2[0][0] + matrix1[1][1] * matrix2[1][0];
    matrix3[1][1] = matrix1[1][0] * matrix2[0][1] + matrix1[1][1] * matrix2[1][1];

    printf("%d %d\n", matrix3[0][0], matrix3[0][1]);
    printf("%d %d", matrix3[1][0], matrix3[1][1]);


    return 0;
}