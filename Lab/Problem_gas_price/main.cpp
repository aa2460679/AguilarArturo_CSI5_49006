

/* 
 * File:   main.cpp
 * Author: Art
 * Created on September 7, 2017, 12:35 PM
 * Purpose: gas price 
 */

//System Libraries

#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variable only Math/Science/Conversation constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare and initialize Variables
    //knows values
    short 
            pp=2.93,        //Price at the pump
            ft=0.184f,      //Federal Tax per $/Gallon
            st=0.36f,       //State Sales Tax per Gallon
            pt=0.775f,      //State percentage sales tax
            oc=0.07f;       //oil company profit
            
    //unknown values
    float bp,               //base price $/gallon
          tt,               //total tax $/gallon
          ptt,              //percentage total tax
          ptp,              //percentage oil company profit 
          sst;              //state sales tax  
    
  
    
    
    //Initialize Variables 
    
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    bp=(pp-ft-st)/(1+pt);
    sst=bp*pt;
    tt=pp-bp;
    ptt=tt/bp*100;
    ptp=oc/bp*100;
    
   
    //display/output all pertinent variables
    cout<<"Price at the pump for gallon of gas = $"<<pp<<endl;
    cout<<"Base price for the gallon of gas = $"<<ft<<endl;
    cout<<"State Tax per gallon of gas = $"<<st<<endl;
    cout<<"State percentage sales tax = "<<pt*100<<"%"<<endl;
    cout<<"Oil Company Profits per gallon = $"<<oc<<endl;
    cout<<"Computed Values"<<endl;
    cout<<"Base Sales Tax per gallon of gas = $"<<sst<<endl;
    cout<<"Total tax per gallon of gas = $"<<tt<<endl;
    cout<<"Percentage total taxes = "<<ptt<<"%"<<endl;
    cout<<"percentage total oil company profit = "<<ptp<<"%"<<endl;
    
            
    
    //Exit the program
    return 0;
}
