//
//  wordlength.cpp
//  cpp-labs
//
//  Created by Mårten Hakkestad on 2018-08-31.
//  Copyright © 2018 Mårten Hakkestad. All rights reserved.
//

#include "wordlength.hpp"
#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
using namespace std;

using namespace std;
void wordlength(){
    //Variabler
    int num_words = 0;
    int average = 0;
    int total_length = 0;
    string shortest;
    string longest;
    string temp;
    
    //skapar och öppnar
    ofstream of;
    of.open("data.txt");
    of << "skriv till fil massaa text och kul elelr hur vad heter du din lilla bajsmackapppp shasi asodjasd sadas skskskd p";
    of.close();
    
    ifstream infile;
    infile.open("data.txt");
    
    if(!infile.is_open()) cout << "File not open" << endl;
    
    //Själva koden va
    while(infile >> temp){
        total_length += temp.length();
        num_words++;
        
        if(shortest.empty()) shortest = temp;
        if(longest.empty()) longest = temp;
        if(shortest.length() > temp.length()) shortest = temp;
        if(longest.length() < temp.length()) longest = temp;
    }
    
    //Calc average
    average = total_length / num_words;
    
    cout << "There are " << num_words << " words in the file." << endl;
    cout << "The shortest word was \"" << shortest << "\" with " << shortest.length() << " character(s)." << endl;
    cout << "The longest word aws \"" << longest << "\" with " << longest.length() << " characters(s)." << endl;
    cout << "The average length was " << average << " character(s)." << endl;
    
    //Stäng
    infile.close();
}
