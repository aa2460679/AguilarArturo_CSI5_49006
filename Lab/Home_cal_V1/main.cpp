/* 
 * File:   main.cpp
 * Author: Art
 * Created on November 14, 2017, 11:15 AM
 * Purpose: Home Calculator Version 1 
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
const int CNVMY = 12;
const int CNVPRCT = 100;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float prchsPr, pymtDw, lnAmnt, intRt, mthyPmt;
    int Nmnths;
    //Initialize Variables
    prchsPr = 350000.00f;          //salary is $100000
    pymtDw = .20;           // 5% investment
    lnAmnt = prchsPr*(1-pymtDw);     //require savings to retire $'s
    intRt = .05f;             //10% / year
    mthyPmt = 1503.11f;              //initialize the retirement account
    Nmnths = 360;
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    cout<<"Home amortazation table"<<endl<<endl;
    cout<<"Purchase price = $"<<prchsPr<<endl;
    cout<<"Percentage down "<<pymtDw*CNVPRCT<<"%"<<endl;
    cout<<"Loan amount = $"<<lnAmnt<<endl;
    cout<<"Interest rate = "<<intRt*CNVPRCT<<"%"<<endl;
    cout<<"mMonthly payment = $"<<mthyPmt<<endl<<endl;
    cout<<"month\tLoan amount\tInt paid\tmonthly paymnet"<<pymtDw<<endl;

    cout<<fixed<<setprecision(2)<<showpoint;
    for (int month=0;month<=359;month++){
        float intAccl = intRt/12*lnAmnt;  //interest accrued per month 
        cout<<setw(5)<<month<<setw(13)<<lnAmnt<<setw(14)<<intAccl
                <<setw(23)<<mthyPmt<<setw(9)<<endl;
        lnAmnt+=(intAccl-mthyPmt);
    }
    cout<<endl;
    cout<<"last payment = $"<<mthyPmt+mthyPmt<<endl;
    cout<<"Total paid for loan = $"<<Nmnths*mthyPmt+lnAmnt<<endl;
    cout<<"Total paid for home = $"<<prchsPr*pymtDw+Nmnths*mthyPmt+lnAmnt<<endl;
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}
