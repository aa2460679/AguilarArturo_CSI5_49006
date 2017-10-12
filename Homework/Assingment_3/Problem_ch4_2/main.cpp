

/* 
 * File:   main.cpp
 * Author: Art
 * Created on october 3, 2017, 9:21 PM
 * Purpose: roman numeral converter
 */

//System Libraries

#include <iostream>     //Input/Output Stream Library
#include <stdlib.h>     //exit function
#include <cmath>        //math library
#include <cmath>        //for the ower function
#include <iomanip>      //formting Library
#include <cstdlib>      //Ramdon Number Library
#include <ctime>        //Set the ramdon seed
#include <string>       
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variable only Math/Science/Conversation constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables
    unsigned int number;
    unsigned short roman;
      
    
    //Initialize Variables 
    cout<<"This program converts numbers to Roman Numerals"<<endl;
    cout<<"Type in a number between 1-10"<<endl;
    cin>>number;
    if(number<0||number>10){
        cout<<"invalid number"<<endl;
        exit(EXIT_FAILURE);
    }
    //Process by giving the grade
    roman=number;
    //cout<<static_cast<int>(roman)<<" "<<endl;
    
    
    
    //display/output all pertinent variables
    switch(roman){
        case 10: cout<<"X";break;
        case 9: cout<<"IX";break;
        case 8: cout<<"VIII";break;
        case 7: cout<<"VII";break;
        case 6: cout<<"VI";break;
        case 5: cout<<"V";break;
        case 4: cout<<"IV";break;
        case 3: cout<<"I";
        case 2: cout<<"I";
        case 1: cout<<"I";
    }
  
    
    
    
    //Exit the program
    return 0;
}
