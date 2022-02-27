/* 
 * File:   main.cpp
 * Author: Ricardo Luna
 *
 * Created on February 26, 2022, 8:59 PM
 */

#include <iostream>

using namespace std;

int main() {
    // storing integers for sale state and county tax 
    float tsales = 95;
    float state = .04;
    float county = .02;
    
    //dividing total sales with state tax
    float total_state = tsales * state;
    //cout<< total_state<<endl;
    
    //dividing total sales with state county
    float total_county = tsales * county;
    //cout<< total_county<<endl;
    
    int total = total_county + total_state;
    
    cout << "Total sales tax: "<< total;
    
    return 0;
     }

