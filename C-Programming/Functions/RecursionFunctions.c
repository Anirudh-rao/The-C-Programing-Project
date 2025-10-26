//
// Created by Rookr on 26/10/25.
//

#include<stdio.h>

void rec(int n){

    if (n== 6) return;
    printf("Recursion Level %d\n", n);
    rec(n + 1);
}

int main() {
    rec(1);
    return 0;
}