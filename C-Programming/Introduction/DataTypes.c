//
// Created by Rookr on 17/09/25.
//

#include<stdio.h>

int main() {
    //Integer
    int var = 22;

    printf("var = %d\n", var);

    //Charecter
    char ch = 'A';

    printf("ch = %c\n", ch);

    //Float
    float flt = 12.45;

    printf("val = %f\n", flt);

    //Double
    double val = 1.4521;

    printf("val = %lf\n", val);

    // Use sizeof() to know size
    // the data types
    printf("The size of int: %lu\n",
        sizeof(int));
    printf("The size of char: %lu\n",
        sizeof(char));
    printf("The size of float: %lu\n",
        sizeof(float));
    printf("The size of double: %lu",sizeof(double));


    return 0;
}