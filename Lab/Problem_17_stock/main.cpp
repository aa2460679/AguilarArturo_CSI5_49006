

/* 
 * File:   main.cpp
 * Author: Art
 * Created on September 16, 2017, 12:35 AM
 * Purpose: problem 1
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
    short nShares; //number of shares per stock
    float ppShrs;//prices per share in $/share 
    //share cost in $ 's commission paid in $'s
    float shrCost,comPaid,totPaid,nShrs,ppShr,fee;
    
    //Initialize Variables 
    nShrs=750;
    ppShr=35;
    fee=2;
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    shrCost=nShrs*ppShr;
    comPaid=shrCost*fee/100;
    totPaid=shrCost+comPaid;
    
    //display/output all pertinent variables
    cout<<"Number of shares = "<<nShrs<<endl;
    cout<<"Shares price = "<<ppShr<<"/Shares"<<endl;
    cout<<"Commission fee = "<<fee<<"%"<<endl;
    cout<<"Cost of shares = "<<shrCost<<endl;
    cout<<"Commission paid = "<<comPaid<<endl;
    cout<<"Total amount paid = "<<totPaid;
    
    //Exit the program
    return 0;
}
