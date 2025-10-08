//
// Created by Rookr on 08/10/25.
//
#include<stdio.h>

void hello(){
    printf("Hello From C Functions\n");
  }

int Square(int x){
    return x*x;
}

int main(){
    hello();
    int result = Square(5);
    printf("Square of 5 is :%d\n", result);
    return 0;
}