//
// Created by Rookr on 26/10/25.
//
#include <stdio.h>

int main() {
    printf("Outer Function\n");

    // Defining inner function
    void inner() {
        printf("Inner Function\n");
    }

    // Calling nested functions
    inner();
    return 0;
}