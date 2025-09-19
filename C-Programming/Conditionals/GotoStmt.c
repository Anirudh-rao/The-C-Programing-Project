//
// Created by Rookr on 19/09/25.
//
#include <stdio.h>

int main() {
    int n = 1;
    label:
        printf("%d ", n);
    n++;
    if (n <= 10)
        goto label;
    return 0;
}