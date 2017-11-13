/* 
 * File:   main.cpp
 * Author: Art
 * Created on September 16, 2017, 12:35 AM
 * Purpose: problem 15 3person shooter
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
    
    //Initialize Variables
    lvA=lvB=lvC=true;
    pkllA = 1.0/3;
    pkllB = 1.0/2;
    pkllC = 1.0f;
    
    //Input Data/Variables
    char lvSm;
    do{
        if (lvA){
            if (lvB){
                if (pRand() <= pkllA)lvB = false;
            }else if (lvC){
                if (pRand () <=pkllA)lvC = false;
            }
        }
        
        if (lvB){
            if (lvC){
                if (pRand()<= pkllB)lvC = false;
            }else if (lvC){
                if (pRand () <=pkllB)lvA = false;
            }
        }
        
        if (lvC){
            if (lvA){
                if (pRand()<= pkllC)lvA = false;
            }else if (lvB){
                if (pRand ()<=pkllC)lvB = false;
            }
        }
            
        lvSm = lvA+lvB+lvC;
    }while (lvSm>1);
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<<"Aaron   is "<<(lvA?"alive":"dead")<<endl;
    cout<<"Bob     is "<<(lvA?"alive":"dead")<<endl;
    cout<<"Charlie is "<<(lvA?"alive":"dead")<<endl;
    
    //Exit the program
    return 0;
}
