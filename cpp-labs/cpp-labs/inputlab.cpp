//
//  inputlab.cpp
//  cpp-labs
//
//  Created by Mårten Hakkestad on 2018-08-31.
//  Copyright © 2018 Mårten Hakkestad. All rights reserved.
//

#include "inputlab.hpp"
#include <iostream>
#include <iomanip>
using namespace std;
char c;
int  i;
double d;
string s;

void inputlab(){
    
    //Enter one int
    cout << "Enter one integer: ";
    cin >> i;
    cout << "You entered the number: " << i << endl;
    clearBuffer();
    
    //Enter four int
    cout << "Enter four integers: ";
    cin >> i;
    cout << "You entered the numbers: ";
    cout << i << " ";
    cin >> i;
    cout << i << " ";
    cin >> i;
    cout << i << " ";
    cin >> i;
    cout << i << " " << endl;
    clearBuffer();

   
    //Enter one int and one real
    cout << "Enter one integer and one real number: ";
    cin >> i;
    cin >> d;
    cout << fixed << setprecision(4) <<"The real is: " << d << endl;
    cout << "The integer is: " << i << endl;
    clearBuffer();
    
    //Enter one real and one int
    cout << "Enter one real number and one integer: ";
    cin >> d;
    cin >> i;
    cout << setw(11) << setfill('.') << fixed << setprecision(8) << "The real is: " << d << endl;
    cout << setw(11) << setfill('.') << "The integer is: " << i << endl;
    clearBuffer();
    
    //Enter a char
    cout << "Enter a character: ";
    cin >> c;
    cout << "You entered: " << c << endl;
    clearBuffer();
    
    //Enter a word
    cout << "Enter a word: ";
    cin >> s;
    cout << "The word '" << s << "' has " << s.length() << " character(s)." << endl;
    clearBuffer();
    
    //Enter an int and one word
    cout << "Enter an integer and a word: ";
    cin >> i >> s;
    cout << "You entered '" << i << "' and '" << s << "'." << endl;
    clearBuffer();
    
    //Enter char and word
    cout << "Enter a character and a word: ";
    cin >> c >> s;
    cout << "You entered the string \"" << s << "\" and the character '" << c << "'." << endl;
    clearBuffer();
    
    //Enter word and real
    cout << "Enter a word and a real number: ";
    cin >> s >> d;
    cout << "You entered \"" << s << "\" and \"" << setprecision(3) << fixed << d << "\"." << endl;
    clearBuffer();
    
    //Enter text line
    cout << "Enter a text-line: ";
    getline(cin, s);
    cout << "You entered: \"" << s << "\"" << endl;
    
    //Enter second tect linte
    cout << "Enter a second line of text: ";
    getline(cin, s);
    cout << "You entered: '" << s <<"\"" << endl;
    
    //Enter three words
    cout << "Enter three words: ";
    cin >> s;
    cout << "You entered: '";
    cout << s << " ";
    cin >> s;
    cout << s << " ";
    cin >> s;
    cout << s << "'" << endl;
    clearBuffer();
}


void clearBuffer(){
    getline(cin, s);
    s.clear();
}
