

/* 
 * File:   main.cpp
 * Author: Art
 * Created on October 3, 2017, 10:21 PM
 * Purpose: Magic dates
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
      
    //share cost in $ 's commission paid in $'s
    
    
    //Initialize Variables 
    int x, y, z;
     
           
   
    
    //display/output all pertinent variables
    cout<<"This program will calculate if the date is considered magic"<<endl;
    cout<<"enter the month in numeric form"<<endl;
    cin>> x;
    cout<<"enter the day of the  month?"<<endl;
    cin>> y;
    cout<<"enter the last two digits of the year?"<<endl;
    cin>> z;
    if (x * y == z){
        cout<<"that date is magic!! "<<endl;
        cout<<x<<" times "<<y<<" equals " <<z<<endl;
    }
    else {
        cout<<"the date is not magic "<<endl;
        cout<<x<<" times "<<y<<" does not equal to " <<z<<endl;
    }
          
    
  //Exit the program
    return 0;
    
  }  
    
    

