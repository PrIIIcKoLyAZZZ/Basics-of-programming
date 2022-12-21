#include <stdio.h>
#include "struct.h"

int main()
{
    struct ParallelogramCoord PC;
    printf("Fill in the coordinates of the vertices from the upper left corner, clockwise\n");
    scanf("%d %d", &PC.x1, &PC.y1);
    scanf("%d %d", &PC.x2, &PC.y2);
    scanf("%d %d", &PC.x3, &PC.y3);
    scanf("%d %d", &PC.x4, &PC.y4);

    int s = S(PC);
    int p = P(PC);

    printf("%d\n", s);
    printf("%d\n", p);
    return 0;
}