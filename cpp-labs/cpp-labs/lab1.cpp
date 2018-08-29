//
//  lab1.cpp
//  cpp-labs
//
//  Created by Mårten Hakkestad on 2018-08-29.
//  Copyright © 2018 Mårten Hakkestad. All rights reserved.
//

#include "lab1.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

void lab1(){
    float first;
    float last;
    float stride;
    float tax;
    
    cout << "INPUT PART" << endl;
    cout << "===========" << endl;
    while(true){
        cout << "Enter first price: ";
        cin >> std::setprecision(2) >> first;
        if( first > 0){
            break;
        }else{
            cerr << "ERROR: First price must be at least 0 (zero) sek" << endl;
        }
    }
    while(true){
        cout << "Enter last price: ";
        cin >> last;
        if( last > first){
            break;
        }else{
            cerr << "ERROR: Last price must be higher than first price: " << first << endl;
        }
    }
    while(true){
        cout << "Enter stride: ";
        cin >> stride;
        if( stride > 0.01){
            break;
        }else{
            cerr << "ERROR: Stride must be at least 0.01" << endl;
        }
    }
    while(true){
        cout << "Enter tax percent: ";
        cin >> tax;
        if( tax > 0.1){
            break;
        }else{
            cerr << "ERROR: Tax must be at least 0.1" << endl;
        }
    }
    
    
    cout << "TAX TABLE" << endl;
    cout << setw(20) << std::right << "Price";
    cout << setw(20) << std::right << "Tax";
    cout << setw(20) << std::right << "Price with tax" << endl;
    cout << "------------------------------------------------------------"<< endl;
    
    while(first <= last){
        float taxcalc = first * (tax / 100);
        cout << setw(20) << std::right << std::setprecision(2) << std::fixed << first;
        cout << setw(20) << std::right << std::setprecision(2) << std::fixed << taxcalc;
        cout << setw(20) << std::right << std::setprecision(2) << std::fixed << first + taxcalc << endl;
        first += stride;
    };
    
}
