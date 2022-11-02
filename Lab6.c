#include <stdio.h>
#include <malloc.h>

int main()
{
    int a;
    scanf("%d", &a);
    char* m = (char*)malloc(a * sizeof(char));

    scanf("%s", m);
    for (int i = 0; i < a; ++i) {
        printf("%c", m[i]);
    }

    printf("\n");

    int a2;
    scanf("%d", &a2);
    char m2[a2];
    for (int i = 0; i < a2; ++i) {
        scanf("%c", &m2[i]);
    }

    int* p = m;

    printf("%c", *p);
    return 0;
}