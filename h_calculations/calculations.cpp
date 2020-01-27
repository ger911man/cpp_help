//
// Created by Gera on 27.01.2020.
//
#include <cmath>
#include "iostream"
using namespace std;

int main(){
    // %
    cout << "4%2=" << 4%2 << endl;
    cout << "4%5=" << 4%5 << endl;
    float decimal, fraction;
    fraction = modf(3.14, &decimal);
    cout << "3.14=" << decimal << "+" << fraction << endl;

}