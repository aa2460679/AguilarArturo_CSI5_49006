

/* 
 * File:   main.cpp
 * Author: Art
 * Created on October 19,, 2017, 11:35 AM
 * Purpose: creating a pattern 
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
    
    //Initialize Variables
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    for (int cnt1=1, cnt2=19, cnt3=10; cnt1<=10; cnt1++, cnt2--, cnt3--){
         // display triangle 1 
        for (int t1=1; t1<=cnt1;t1++)cout<<"*";
        // display the spaces 
        for (int t1=1; t1<=cnt2;t1++)cout<<" ";
        
        for (int t1=1; t1<=cnt3;t1++)cout<<"*";
        cout<<endl;
        }
    
    
    //Exit the program
    return 0;
}
