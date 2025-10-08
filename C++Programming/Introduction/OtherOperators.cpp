//
// Created by Rookr on 08/10/25.
//

#include<iostream>
using namespace std;

int main() {
    cout<<sizeof (char)<<endl;
    bool varname  = true;
    cout<<sizeof (varname)<<endl;

    //Comma operator
    int m =3;
    int n = (m+1, m-2, m+5);
    int a, b, c;

    //Address Opeator
    cout<<&varname<<endl;

    return 0;
}
