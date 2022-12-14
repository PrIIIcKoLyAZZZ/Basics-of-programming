#include <stdio.h>

int main()
{
    char line1[] = "1488.23.3.9.2";
    char line2[] = "1488.23.3.9.2.1";

    char* ptr1 = line1;
    int c1 = 0;
    int size1 = 0, size2 = 0;
    char* ptr2 = line2;
    int c2 = 0;

    while(*ptr1 != '\0') {
        if(*ptr1 == '.')
            ++c1;
        ++ptr1;
        ++size1;
    }

    while(*ptr2 != '\0') {
        if(*ptr2 == '.')
            ++c2;
        ++ptr2;
        ++size2;
    }

    int newLine1[c1+1];
    int newLine2[c2+1];

    int c = 0, j = 0;
    int tmp_sum = 0;

    for (int i = size1-1; i >= 0 ; --i) {
        if (line1[i] == '.') {
            c = 0;
            newLine1[c1-j] = tmp_sum;
            tmp_sum = 0;
            ++j;
        }
        else {
            if (c == 0) {
                tmp_sum += (int)(line1[i] - '0');
                ++c;

                if (i == 0) {
                    c = 0;
                    printf("%d",c1+1-j);
                    newLine1[c1-j] = tmp_sum;
                    tmp_sum = 0;
                    ++j;
                }
            } else {
                c *= 10;
                tmp_sum += (int)(line1[i] - '0') * c;

                if (i == 0) {
                    c = 0;
                    newLine1[c1-j] = tmp_sum;
                    tmp_sum = 0;
                    ++j;
                }
            }
        }
    }


    c = 0, j = 0;
    tmp_sum = 0;

    for (int i = size2-1; i >= 0 ; --i) {
        if (line2[i] == '.') {
            c = 0;
            newLine2[c2-j] = tmp_sum;
            tmp_sum = 0;
            ++j;
        }
        else {
            if (c == 0) {
                tmp_sum += (int)(line2[i] - '0');
                ++c;
                if (i == 0) {
                    c = 0;
                    newLine2[c2-j] = tmp_sum;
                    tmp_sum = 0;
                    ++j;
                }
            } else {
                c *= 10;
                tmp_sum += (int)(line2[i] - '0') * c;
                if (i == 0) {
                    c = 0;
                    newLine2[c2-j] = tmp_sum;
                    tmp_sum = 0;
                    ++j;
                }
            }
        }
    }

    int i = 0;
    j = 0;
    while (i != c1+1 && j != c2+1 ) {
        if ( (newLine1[i] > newLine2[j]) && (i != c1+1 && j != c2+1 )) {
            printf("ver1 > ver2");
            break;
        }
        else if ((newLine1[i] < newLine2[j]) && (i != c1+1 && j != c2+1 )) {
            printf("ver2 > ver1");
            break;
        }
        else {
            ++i;
            ++j;
        }
        if ((i != c1+1 && j >= c2+1 )) {
            printf("ver1 > ver2");
            break;
        }
        else if ((i >= c1+1 && j != c2+1 )) {
            printf("ver2 > ver1");
            break;
        }
    }

    return 0;
}