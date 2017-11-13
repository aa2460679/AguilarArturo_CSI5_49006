/* 
 * File:   main.cpp
 * Author: Art
 * Created on November 9, 2017, 12:15 AM
 * Purpose: Retirement Calculator Version 1 
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>        //for the ower function
#include <iomanip>      //formting Library
#include <cstdlib>      //Ramdon Number Library
#include <ctime>        //Set the ramdon seed
#include <string>  
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float slry, dpst, nvstRt, svngs, rtAcct;
    
    //Initialize Variables
    slry = 100000;          //salary is $100000
    nvstRt = .05;           // 5% investment
    svngs = slry/nvstRt;     //require savings to retire $'s
    dpst = .10;             //10% / year
    rtAcct = 0;              //initialize the retirement account
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    cout<<"Our retirement table"<<endl;
    cout<<"Year\tsavings\t\tInt Earn\tDeposit"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    for (int year=2022;year<=2072;year++){
        float intErnd = nvstRt*rtAcct;  //interest earned for the year 
        float depAmt = dpst*slry;       //yearly deposit
        cout<<setw(4)<<year<<setw(11)<<rtAcct<<setw(17)<<intErnd
                <<setw(14)<<dpst<<setw(9)<<endl;
        rtAcct+=(intErnd+depAmt);
    }
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}
