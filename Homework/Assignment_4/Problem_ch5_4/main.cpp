

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
    const int TSTRT=5, TSTP=30, NCRMNT=5;
    const float CLRS=3.6;
    
   
    //input data/variables 
    float tstrt, clrs;
    
    cout<<"this program calculates the calories burn per minutes"<<endl;
          
    //Process or map the inputs to the outputs
    cout<< fixed <<showpoint<< setprecision(2);

    //Display/Output all pertinent variables
    cout<<"time\t\tcalories\n";
    cout<<" - - - - - - - - - - - -"<<endl;
    
    for (tstrt=TSTRT; tstrt<=TSTP; tstrt+=CLRS*NCRMNT)
    {
        cout<<tstrt<<"\t\t"<<clrs<<endl;
        
    }
    
    //Exit the program
    return 0;
}
