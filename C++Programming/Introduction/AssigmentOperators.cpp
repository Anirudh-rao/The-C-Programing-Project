//
// Created by Rookr on 08/10/25.
//

#include<iostream>
using namespace std;

int main() {
    int a =6, b =4;
    cout<<"A = "<<a<<endl;
    cout<<"A+= B = "<<(a+=b)<<endl;
    cout<<"A -= B =  "<<(a-=b)<<endl;
    cout << "a *= b is " << (a *= b) << endl;
    cout << "a /= b is " << (a /= b);

    return 0;

}