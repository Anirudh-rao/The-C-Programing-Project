//
// Created by Rookr on 08/10/25.
//

#include<stdio.h>

void func(int* val){
    *val = 123;

 }

int main(){
    int x = 1;
    func(&x);
    printf("%d\n",x);
    return 0;
}