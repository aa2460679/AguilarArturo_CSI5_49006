

/* 
 * File:   main.cpp
 * Author: Art
 * Created on September 23, 2017, 5:21 PM
 * Purpose: Male and Female Percentages
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
    int x, sum=0, sumPos=0, sumNeg=0;
    float males, females, total, prctgM, prctgF;
    
    //share cost in $ 's commission paid in $'s
    
    
    //Initialize Variables 
    
    
    
    //Input Data/Variables
    
    //Map inputs to outputs or process data
     
           
   
    
    //display/output all pertinent variables
    cout<<"This program calculates percentage of males and females in a class"<<endl;
    cout<<"how many males in the class?"<<endl;
    cin>> males;
    cout<<"how many females in the class?"<<endl;
    cin>> females;
    total = males + females;
    cout<<"total amount of students in class"<<endl;
    cout<<total<<endl;
    prctgM = (males / total)*100;
    cout<<"percentage of male sin class "<<endl;
    cout<<prctgM<<"%"<<endl;
    cout<<"percentage of females in class "<<endl;
    prctgF = females / total*100;
    cout<<prctgF<<"%"<<endl;
   
    
    
    
    //Exit the program
    return 0;
}
