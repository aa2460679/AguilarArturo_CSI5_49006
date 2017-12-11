

/* 
 * File:   main.cpp
 * Author: Art
 * Created on September 19, 2017, 11:35 AM
 * Purpose: monthly payment 
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
   float nmbmths, intrst, loan, 
            totpaid,intpaid, mp;      
    
    
    //share cost in $ 's commission paid in $'s
    
    
    //Initialize Variables 
    loan=1e4f;              //$10000
    intrst=1.2e1f;          //12% per year
    mnbmths=36;             // 36 months
    
    
    //Input Data/Variables
    
    //Map inputs to outputs or process data
     nmbmths=36;            // 36 months on loan
            intrst=.12;              // 12% interest per year
            loan=10000;               // $10000 loan amount
            totpaid=mp*N;
            intpaid=totpaid-loan*mt;
           
   
    
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
