

/* 
 * File:   main.cpp
 * Author: Art
 * Created on September 7, 2017, 10:35 PM
 * Purpose: gas price 
 */

//System Libraries

#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variable only Math/Science/Conversation constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare and initialize Variables
    //knows values
    short 
            TMB=88.67,          //Total meal bill
            taxes,              //taxes for the meal
            TAT,                //tip after taxes
            tip,                // 20% tip after taxes
            total;
    //unknown values
 
         
  
    
    
    //Initialize Variables 
    
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    taxes=TMB*0.0675;
    TAT=TMB+taxes;
    tip=TAT*.2;
    total=TAT+tip;
   
    //display/output all pertinent variables
    cout<<"total meal bill = $"<<TMB<<endl;
    cout<<"taxes for meal = $"<<taxes<<endl;
    cout<<"total after taxes = $"<<TAT<<endl;
    cout<<"20% tip = $"<<tip<<endl;
    cout<<"total charge of meal = $"<<total<<endl;
   
    
            
    
    //Exit the program
    return 0;
}
