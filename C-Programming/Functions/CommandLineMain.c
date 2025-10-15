//
// Created by Rookr on 15/10/25.
//

// this main Functions is called by os
// and hence we need to provide arguments in the begining
#include<stdio.h>
int main(int argc,char * argv[]) {
    printf("The Value of argc is %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("%s \n", argv[i]);
    }

    return 0;
}