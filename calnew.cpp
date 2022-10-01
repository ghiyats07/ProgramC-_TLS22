#include <iostream>
#include <math.h>
using namespace std;

int main (){
    char op;
    double number1 , number2 ;
    cout << "##PROGRAM CALCULATOR SEDERHANA##"<<endl;
    cout << "Keterangan : "<<endl;
    cout << "+ = Operator Penjumlahan" <<endl;
    cout << "- = OPerator Penguragan"  <<endl;
    cout << "* = Operator Perkalian"   <<endl;
    cout << "/ = OPerator Pembagian"   <<endl;
    cout << "^ = Operator Perpangkatan"<<endl;
    cout << "untuk operator ^ : "      <<endl;
    cout << "number1= bilangan basis"  <<endl;
    cout << "number2= bilangan pangkat"<<endl;
    cout <<endl;
    cout << "Choose the operator +,-,*,/,^ = ";
    cin >> op;
    cout << "Enter first number : ";
    cin >> number1;
    cout << "Enter second number : ";
    cin >> number2;

    switch (op){
        case '+':
            cout<<number1<<"+"<<number2<< "=" << (number1 + number2);
        break;

        case '-':
            cout<<number1<<"-"<<number2<< "=" << (number1 - number2);
        break;

        case '*':
            cout<<number1<<"*"<<number2<< "=" << (number1 * number2);
        break;

        case '/':
            if (number2!=0){
            cout<<number1<<"/"<<number2<< "=" << (number1 / number2);
        break;}

        else if (number1!=0){
            cout << "The number is an infinite number";
        break;}

        else
            cout << "Unidentified number";
        break;



        case '^' :

        cout <<number1<<"^"<<number2<<"="<<pow (number1,number2)<<endl;
        break;

        default : cout << "The operator is invalid";}



    }
