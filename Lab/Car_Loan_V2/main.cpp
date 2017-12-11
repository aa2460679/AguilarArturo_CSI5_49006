/* 
 * File:   main.cpp
 * Author: Art
 * Created on November 16, 2017, 11:35 AM
 * Purpose: Home Car Loan Version 1
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
    const int SIZE = 35;
    int strtmth, bymnth[SIZE];
    float lnAmnt[SIZE]={}, intAccl[SIZE]={}, mthyPmt[SIZE]={};
    float prchsPr, pymtDw, intRt;
    int Nmnths;
    
    //Initialize Variables
    prchsPr = 10000.00f;          //salary is $100000
    pymtDw = .00;           // 5% investment
         //require savings to retire $'s
    intRt = .05f;             //10% / year
    //mthyPmt = 299.71f;              //initialize the retirement account
    Nmnths = 36;
    strtmth = 1;
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Car Loan calculation table"<<endl<<endl;
    cout<<"Purchase price = $"<<prchsPr<<endl;
    cout<<"Percentage down "<<pymtDw*CNVPRCT<<"%"<<endl;
    cout<<"Loan amount = $"<<lnAmnt<<endl;
    cout<<"Interest rate = "<<intRt*CNVPRCT<<"%"<<endl;
    cout<<"mMonthly payment = $"<<mthyPmt<<endl<<endl;
    cout<<"month\tLoan amount\tInt paid\tmonthly payment"<<pymtDw<<endl;

    cout<<fixed<<setprecision(2)<<showpoint;
//    for (int month=0;month<=35;month++){
//        float f_intAccl = intRt/12*lnAmnt[month];  //interest accrued per month 
//        intAccl[month] = f_intAccl;
//        cout<<setw(5)<<month<<setw(13)<<lnAmnt[month]
//                <<setw(14)<<intAccl[month]
//                <<setw(23)<<mthyPmt[month]
//                <<setw(9)<<endl;
//       if (month!=0) lnAmnt[month] = lnAmnt[month-1];
//        lnAmnt[month] += (intAccl[month]-mthyPmt[month]);
//     
//    }
//    cout<<endl;
//    cout<<"last payment = $"<<mthyPmt+lnAmnt<<endl;
//    cout<<"Total paid for loan = $"<<Nmnths*mthyPmt+lnAmnt<<endl;
//    cout<<"Total paid for home = $"<<prchsPr*pymtDw+Nmnths*mthyPmt+lnAmnt<<endl;
    
    for(int indx = 0; indx<SIZE; indx++){
        bymnth[indx]=indx+strtmth;
        mthyPmt[indx] = 299.71f;
        lnAmnt[indx] = prchsPr*(1-pymtDw) - indx*mthyPmt[indx];
        intAccl[indx]=intRt/12*lnAmnt[indx];        //
        cout<<setw(5)<<bymnth[indx]<<setw(13)<<lnAmnt[indx]<<setw(14)<<intAccl[indx]
                <<setw(23)<<mthyPmt[indx]<<setw(9)<<endl;
    }
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}
