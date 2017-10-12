

/* 
 * File:   main.cpp
 * Author: Art
 * Created on october 3, 2017, 8:21 PM
 * Purpose: min/max
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

//Global Constants - Not variable only Math/Science/Conversation constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables
    int x, y, a, b;
    float z,c;
    
    //share cost in $ 's commission paid in $'s
    
    
    //Initialize Variables 
    
    
    
    //Input Data/Variables
    
    //Map inputs to outputs or process data
    
             
   
    
    //display/output all pertinent variables
    cout<<"This program calculates what rectangle is bigger"<<endl;
    cout<<"what is the width of rectangle z?"<<endl;
    cin>> x;
    cout<<"what is the length of rectangle z?"<<endl;
    cin>> y;
    z=x*y;
    cout<<"what is the width of rectangle c?"<<endl;
    cin>> a;
    cout<<"what is the length of rectangle c?"<<endl;
    cin>> b;
    c=a*b; 
    if (z > c)
        cout<<"\n rectangle z = "<<z<<", is the biggest rectangle"<<endl;
    if (c == z)
        cout<<"\n rectangle z and rectangle c are equal"<<endl;
    if (c > z) 
        cout<<"\n rectangle c = "<<c<<", is the biggest rectangle"<<endl;
    
  
    
    
    
    //Exit the program
    return 0;
}
