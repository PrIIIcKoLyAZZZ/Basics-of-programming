#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 2; i <= n; ++i) {
        int f = 1;
        for (int j = 2; j < i; ++j) {
            if ((i % j) == 0) {
                f = 0;
                break;
            }
        }
        if (f == 1)
            printf("%d ", i);
    }

    float m, p, mo;

    scanf("%f%f%f", &m, &p, &mo);

    for (int i = 0; i <= mo; ++i) {
        m = m + (m * (p / 12));
    }

    printf("%lf", m);

    return 0;
}