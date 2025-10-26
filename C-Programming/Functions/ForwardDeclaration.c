//
// Created by Rookr on 26/10/25.
//
#include <stdio.h>

// Forward declaration
int foo();

// Inline function in C
inline int foo() {
    return 2;
}

int main() {
    int res;

    // Inline function call
    res = foo();
    printf("%d", res);
    return 0;
}