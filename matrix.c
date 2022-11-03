#include <stdio.h>

int main()
{
    int m1, n1, m2, n2;

    scanf("%d %d", &m1, &n1);
    int matrix1[m1][n1];
    for (int i = 0; i < m1; ++i) {
        for (int j = 0; j < n1; ++j) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    scanf("%d %d", &m2, &n2);
    int matrix2[m2][n2];
    for (int i = 0; i < m2; ++i) {
        for (int j = 0; j < n2; ++j) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    if (n1 == m2) {
        int matrix3[m1][n2];
        //Обнуление новой матрицы
        for (int i = 0; i < m1; ++i) {
            for (int j = 0; j < n2; ++j) {
                matrix3[i][j] = 0;
            }
        }

        for (int i = 0; i < n2; ++i) {
            for (int j = 0; j < m1; ++j) {
                for (int k = 0; k < n1; ++k) {
                    matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }

        for (int i = 0; i < m1; ++i) {
            for (int j = 0; j < n2; ++j) {
                printf("%d ", matrix3[i][j]);
            }
            printf("\n");
        }
    } else
        printf("Error");

    return 0;
}