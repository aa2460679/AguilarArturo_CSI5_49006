

/* 
 * File:   main.cpp
 * Author: Art
 * Created on October 8, 2017, 1:01 AM
 * Purpose: time calculator
 */

//System Libraries

#include <iostream>     //Input/Output Stream Library
#include <cmath>        //for the ower function
#include <stdlib.h>     //Exit function
#include <iomanip>      //formting Library
#include <cstdlib>      //Ramdon Number Library
#include <ctime>        //Set the ramdon seed
#include <string>       
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variable only Math/Science/Conversation constants


//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    
    //Initialize Variables 
    
    float x, y, z;
    
    //display/output all pertinent variables
    cout<<"This program calculates time"<<endl;
    cout<<"enter the amount in seconds"<<endl;
    cin>> x;
    if (x <= 59)
        cout<<x<<" seconds"<<endl;
    if (x >= 60)
        cout<<x/60<<" minutes"<<endl;
    if (x >= 3600)
        cout<<x/3600<<" hours"<<endl;
    if (x >= 86400);
        cout<<x/86400<<" days"<<endl;
    
    //Exit the program
    return 0;
    
  }  
    
    

