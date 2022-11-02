#include <stdio.h>

enum Cars
{
    car,
    truck,
    bus,
    sportsCar,
};

struct BF
{
    unsigned int keyboard : 3;
};

struct circle
{
    int x;
    int y;
    int r;
};

double S(int r)
{
    return 3.14 * r * r;
}

double P(int r)
{
    return 2 * 3.14 * r;
}

int main()
{
    //Задание №1
    enum Cars c, t, b, s;
    c = car;
    t = truck;
    b = bus;
    s = sportsCar;
    printf("%d", b);
    printf("\n");

    //Задание №2
    struct circle Circle;
    scanf("%d", &Circle.r);
    printf("S= %lf\n", S(Circle.r));
    printf("P= %lf\n", P(Circle.r));
    printf("\n");

    //Задание №3
    struct BF bf;
    int key;
    printf("Enter key's number (NumL = 1, Caps = 2, ScrolL = 3)\n");
    scanf("%d", &key);
    if (key == 1)
        bf.keyboard = 1;
    if (key == 2)
        bf.keyboard = 2;
    if (key == 3)
        bf.keyboard = 4;
    printf("%u\n", bf.keyboard);
    return 0;
}