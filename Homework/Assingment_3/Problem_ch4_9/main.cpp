

/* 
 * File:   main.cpp
 * Author: Art
 * Created on October 10, 2017, 1:15 PM
 * Purpose: change for a dollar game
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
    const float PNNS = .01, NCKLS = .05, DMS = .10, QTRS = .25, DLLR = 1.00;
    float pennies, nickels, dimes, quaters;
    
    
    //Process or map the inputs to the outputs
       
    //display/output all pertinent variables
    cout<<"this program calculates the amount of coins you need to make a dollar"<<endl;
    cout<<"enter how many pennies you want to use"<<endl;
    cin>> pennies;
    pennies *= PNNS;
    cout<<"enter how many nickels you want to use"<<endl;
    cin>> nickels;
    nickels = nickels * NCKLS;
    cout<<"enter how many dimes you want to use"<<endl;
    cin>> dimes;
    dimes *= DMS;
    cout<<"enter how many quaters you want to use"<<endl;
    cin>> quaters;
    quaters *= QTRS;
    if(pennies + nickels + dimes + quaters == DLLR ){
        cout<<"you won the coin game"<<endl;
        cout<<pennies*100<<" pennies + "<<nickels/NCKLS<<" nickels + "<<dimes/DMS<<" dimes + "<<quaters/QTRS<<" quaters equal "<<DLLR<<" dollar"<<endl;
    }
    else {
        cout<<"you loose"<<endl;
        cout<<pennies*100<<" pennies + "<<nickels/NCKLS<<" nickels + "<<dimes/DMS<<" dimes + "<<quaters/QTRS<<" quaters is not a "<<DLLR<<" dollar"<<endl;
    }
       
    //Exit the program
    return 0;
    
  }  
    
    

