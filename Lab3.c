#include <stdio.h>

int main()
{
    int n1;
    printf("1) Input:");
    scanf("%d", &n1);
    printf("2) Hex: %x", n1);

    int n2 = n1 << 4;
    printf("\n3) Hex << 4: %x", n2);

    int n3 = ~n1;
    printf("\n4) ~Hex: %x", n3);

    int n4 = n1 & n2;
    printf("\n5) &: %x", n4);

    return 0;
}