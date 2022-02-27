/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Ricardo Luna Zermeno
 * class; CIS 5 43518
 *
 * Created on February 26, 2022, 7:09 PM
 */
#include <iostream>
using namespace std;

string ricky = "gay";
double howgay = 1000;
double input;

int main() {
    cout << "Hello world!\n"  << "this is gay \n";
    cout << "Ricky is " << ricky << " but how gay is he\n" << "he is " << howgay << "\n";
    cout << "How gay is he times 1000\n";
    cin >> input;
    double total = input * howgay;
    cout << "He is " <<total<<" gay";
    
    return 0;
}
