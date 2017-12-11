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
void calmrkp(float tst1, float ttlRtl);
void calRtl( float ttlRtl );
//Execution Begins Here!
//int main(int argc, char** argv) 
    //Declare Variables
   
    //Initialize Variables
    
    //Input Data/Variables

    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    void calmrkp(float tst1, float ttlRtl, float prc)
    {
        //float mrkp;
        //float prc;
        cout<<"wholesale price $"<<prc<<endl;
        cout<<"the markup percentage is "<<tst1<<"%"<<endl;
        calRtl( ttlRtl );
    }
    
    void calRtl( float ttlRtl)
    {
        cout<<"your retail price is $"<<ttlRtl<<endl;
    }
    
    int main ()
    {
    float prc;
    float tst1;
    float mrkp;
    float prcntg;
    float amtMrkp;
    float ttlRtl;
    
    cout<<"this program will calculate the mark up of a n item"<<endl;
    cout<< "what is the price of the item?"<<endl;
    cin>>prc;
    
    cout<<"what percentage do you want to mark up?"<<endl;
    cin>>mrkp;
    prcntg = mrkp/100;
    amtMrkp = prc*prcntg;
    ttlRtl = amtMrkp + prc;
    calmrkp(mrkp, ttlRtl, prc);
    
    
    

        
    //Exit the program
    return 0;
    }
    
    
