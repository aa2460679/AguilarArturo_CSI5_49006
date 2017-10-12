

/* 
 * File:   main.cpp
 * Author: Art
 * Created on October 7, 2017, 11:21 PM
 * Purpose: Mass and weight
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
    int x, y, z;
    
    //display/output all pertinent variables
    cout<<"This program calculates the weight of a mass"<<endl;
    cout<<"enter the object's mass"<<endl;
    cin>> x;
    if (x > 1000)
        cout<<" object is to big"<<endl;
    if (x < 10)
        cout<<" object is too small"<<endl;
    else
        cout<<x*9.8<<" is the weight of object"<<endl;
    
  //Exit the program
    return 0;
    
  }  
    
    

