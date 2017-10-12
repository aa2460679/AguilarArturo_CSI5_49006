

/* 
 * File:   main.cpp
 * Author: Art
 * Created on October 8, 2017, 1:15 AM
 * Purpose: color mix
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
    //char x, y;
    //char red, blue, yellow;
    
    //display/output all pertinent variables
    cout<<"This program color combinations"<<endl;
    cout<<"enter a primary color"<<endl;
    
    string x;
    cin>> x;
    
    if(x == "red" || x == "blue" || x == "yellow"){
        cout<<"enter another primary color"<<endl;   
    }else{
        exit(EXIT_FAILURE);
    }
  
    cout<<"enter a primary color"<<endl;
    
    string y;
    cin>> y;
    
    if(y == "red" || y == "blue" || y == "yellow"){
        cout<<"enter another primary color"<<endl;   
    }else{
        exit(EXIT_FAILURE);
    }
    
    if((x=="red"&&y=="blue")||(y=="red"&&x=="blue")){
        cout<<"With "<<x<<" and "<<y<<" you get purple"<<endl;
    }
    
    else if((x=="red"&&y=="yellow")||(y=="red"&&x=="yellow")){
        cout<<"With "<<x<<" and "<<y<<" you get orange"<<endl;
        
    }else if((x=="blue"&&y=="yellow")||(y=="yellow"&&x=="blue")){
        cout<<"With "<<x<<" and "<<y<<" you get Green"<<endl;
        
    }else{
        cout<<"Unkown color results from mixing"<<endl;
    }
        
    
    
  //Exit the program
    return 0;
    
  }  
    
    

