

/* 
 * File:   main.cpp
 * Author: Art
 * Created on September 17, 2017, 11:35 AM
 * Purpose: total purchase
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
    float
        PO,       //price of item 1
        PTW,      //price of item 2
        PTR,       //price of item 3
        PFR,      //price of item 4
        PFV;       //price of item 5
    
    float total, taxes, sum, prcnt;
    //unknown values
 
      
    //Initialize Variables 
    
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
        PO=15.95;       //price of item 1
        PTW=24.95;      //price of item 2
        PTR=6.95;       //price of item 3
        PFR=12.95;      //price of item 4
        PFV=3.95;       //price of item 5
        prcnt=.07;       //tax percent charge    
    sum=PO+PTW+PTR+PFR+PFV;
    taxes=sum*prcnt;
    total=sum+taxes;
   
    //display/output all pertinent variables
    cout<<"price of item 1 = $"<<PO<<endl;
    cout<<"price of item 2 = $"<<PTW<<endl;
    cout<<"price of item 3 = $"<<PTR<<endl;
    cout<<"price of item 4 = $"<<PFR<<endl;
    cout<<"price of item 5 = $"<<PFV<<endl;
    cout<<"total amount = $"<<sum<<endl;
    cout<<"taxes = $"<<taxes<<endl;
    cout<<"total amount with taxes = $"<<total<<endl;
    
   
    
            
    
    //Exit the program
    return 0;
}
