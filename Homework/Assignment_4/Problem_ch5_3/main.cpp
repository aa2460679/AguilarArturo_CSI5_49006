

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
    int ocnLvl, bgngYr=2017;
    float OLRPY=1.5;

    //input data/variables 
    cout<<"this program shows the rise of ocean level in 25 year's"<<endl;
    cout<<"the following is the rise of sea level in mililiters"<<endl;
      
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
   
    while (bgngYr <= 2042)
    {        
    cout<<bgngYr++ << "\t\t" <<OLRPY+OLRPY++;
    if(bgngYr % 1 ==0) cout<<endl;
    } 
    
    //Exit the program
    return 0;
}
