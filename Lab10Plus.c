#include <stdio.h>
#include "unistd.h"

long long fibRec(int num) {
    if (num < 1) {
        return 0;
    }
    if (num < 2) {
        return 1;
    }
    return fibRec(num - 2) + fibRec(num - 1);
}

long long fibFor(int n) {
    long long fib, fib1 = 0, fib2 = 1;
    for (int i = 1; i < n; ++i) {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
        sleep(1);
    }
    return fib;
}

int main() {
    long long temp = fibFor(1000);
    long long temp2 = fibRec(1000);
    printf("%lli\n", temp);
  //  printf("%lli", temp2);
}