

/* 
 * File:   main.cpp
 * Author: Art
 * Created on September 17, 2017, 3:18 AM
 * Purpose: energy drink
 */

//System Libraries

#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variable only Math/Science/Conversation constants
const char CNVPERC=100;  // percent conversation
//Function Prototypes

//Execution Begins Here!
int main ( int argca, char ** argv)  {
    
    //Declare Variables
    unsigned short nCustSv=16500; //numbers of customers surveyed 
    unsigned char pEneDrk=15;      //percentage energy drinkers
    unsigned char pCitDrk=58;       // percentage citrus drinkers +
    //unknow values to calculate 
    unsigned short nEneDrk;         //Number energy drinkers
    unsigned short nCitDrk;         //number citrus drinkers
   
    
    //share cost in $ 's commission paid in $'s
    
            
    //Initialize Variables 
   
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    nEneDrk=nCustSv*pEneDrk/CNVPERC;
    nCitDrk=nEneDrk*pCitDrk/CNVPERC;
    
    
    //display/output all pertinent variables
    cout<<" Customers surveyed = "<<nCustSv<<endl;
    cout<<" Percentage drinkers "
            <<static_cast<int>(pEneDrk)<<"%"<<endl;
    cout<<" Percentage Citrus Drinkers of all drinkers = "
            <<static_cast<int>(pCitDrk)<<"%"<<endl;
    cout<<" percentage of drinkers in survey = "<<nEneDrk<<endl;
    cout<<"percent of drinkers that like citrus drinks = "<<nCitDrk<<endl;
    
   
    //Exit the program
    return 0;
}
