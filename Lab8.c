#include <stdio.h>

char Comparison(int n, char* str1, char* str2)
{
    int c = 0;
    for (int i = 0; i < n; ++i) {
        if (str1[i] == str2[i])
            ++c;
    }

    if (c == n)
        return 'Y';
    else
        return 'N';
}

void Copy(int n, char* str1, char* str2)
{
    for (int i = 0; i < n; ++i) {
        str2[i] = str1[i];
    }
}

int Search(char* str, char symb)
{
    int out;
    for (int i = 0; i < 10; ++i) {
        if (str[i] == symb) {
            out = i;
            break;
        }
    }

    return out;
}

char LotsSearch(char* str1, char* str2)
{
    char out = 'N';
    for (int i = 0; i < 7; ++i) {
        if (str2[i] == str1[0] && str2[i + 1] == str1[1] && str2[i + 2] == str1[2] && str2[i + 3] == str1[3])
            out = 'Y';
    }

    return out;
}

int LenSearch(char* str1, char* str2)
{
    int c = 0;
    for (int i = 0; i < 10; ++i) {
        if (str2[i] == str1[0] || str2[i] == str1[1])
            str2[i] = '*';
    }
    for (int i = 0; i < 10; ++i) {
        if (str2[i] != '*')
            ++c;
    }

    return c-1;
}

int main()
{
    //Задание №1
    char str1[10];
    char str2[10];
    int n;
    scanf("%d", &n);
    scanf("%s", str1);
    scanf("%s", str2);

    printf("%c\n", Comparison(n, str1, str2));
    printf("--------\n");

    //Задание №2
    char str21[10];
    char str22[10];
    int n2;
    scanf("%d", &n2);
    scanf("%s", str21);

    Copy(n2, str21, str22);
    printf("%s\n", str22);
    printf("--------\n");

    //Задание №3
    char str3[10];
    char symb;
    scanf("%s", str3);
    scanf("%s", &symb);

    printf("%d\n", Search(str3, symb));
    printf("--------\n");

    //Задание № 4
    char str41[4] = "abcd";
    char str42[10];
    scanf("%s", str42);

    printf("%c\n", LotsSearch(str41, str42));
    printf("--------\n");

    //Задание №5
    char str51[2] = "ab";
    char str52[10];
    scanf("%s", str52);

    printf("%d\n", LenSearch(str51, str52));

    return 0;
}