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
float pRand();


//Execution Begins Here!
int main(int argc, char** argv) {
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
            
    //Declare Variables
    bool lvA, lvB, lvC;
    float pkllA, pkllB, pkllC;
    int nmbrGms, WnsA, wnsB, wnsC;
    
    //Initialize Variables
    lvA=lvB=lvC=true;
    pkllA = 1.0/3;
    pkllB = 1.0/2;
    pkllC = 1.0f;
    WnsA=wnsB=wnsC=0;
    nmbrGms=10000
    
    //Input Data/Variables
            for (int game=1; game<=)
    char lvSm;
    do{
        shoot (lvA, pkllA, lvB, lvC);
        
        shoot (lvB, pkllB, lvC, lvA);
        
        shoot (lvC, pkllC, lvA, lvC);
        
    }while (lvSm>1);
    
    wnsA+=lvA;
    wnsB+=lvB;
    wnsC+=lvC;
    lva,=lvB=lvC=1;
    
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<<"Number of games = "<<nmbrGms<<" = "<<wnsA+wnsB+wnsC<<
    cout<<"Aaron   won "<<wnsA<<" times"<<endl;
    cout<<"Bob     won "<<wnsB<<" times"<<endl;
    cout<<"Charlie won "<<wnsC<<" times"<<endl;
    
    //Exit the program
    return 0;
}
void shoot (bool a, float pka, bool &b,bool&c){
    if (a)