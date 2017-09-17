

/* 
 * File:   main.cpp
 * Author: Art Aguilar
 * Created on September 16, 2017, 2:35 AM
 * Purpose: problem 2
 */

//System Libraries

#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variable only Math/Science/Conversation constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables
    int totalS;          //total sales for the year 
    float ECSD, prcntge;
    
    //Initialize Variables 
    totalS=8600000;     //total sales made by the company in one year
    prcntge=0.58;       //percentage made by the east coast sales division
    
    
    
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    ECSD=totalS*prcntge;
    
    //display/output all pertinent variables
     cout<<"company total sales per year = "<<totalS<<endl;
     cout<<"percentage produce by east coast division = 58%"<<endl;
     cout<<"total sales by East Coast Division = "<<ECSD;
     
     
    
    //Exit the program
    return 0;
}
