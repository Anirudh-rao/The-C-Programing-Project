//
// Created by Rookr on 04/10/25.
//

#include<iostream>
using namespace std;

class Car{
    string Brand;
    string Model;
    int year;
};

void getSum(int a, int b){
    int _sum = a + b;
    cout<<"The Sum is: "<<_sum;
}

int main(){
    // Identifiers used as variable names
    int studentAge = 20;
    double accountBalance = 1000.50;
    string student_Name = "Karan";

    getSum(2, 10);

    return 0;
}