

/* 
 * File:   main.cpp
 * Author: Art
 * Created on September 16, 2017, 12:35 AM
 * Purpose: problem 1
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
    int xNmbr=0;
    
    //Initialize Variables
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<<"this program counts up any number between 2-50"<<endl;
    //cout<<"enter a number between one and fifty"<<endl;
   
    
    while (xNmbr <= 127)
    {        
    cout<<(char)xNmbr++;
    
    if( xNmbr % 16 ==0) cout<<endl;
    } 
    
   
   
    //Exit the program
    return 0;
}
