

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
const float GRAVITY=6.673e-8f;  //universal gravitational constant
const float CNVCMFT=1/30.48f;      // 30.48 cm per ft 
const float CNVMFT = 5280.0f;    //5280 ft per mile
const float CNVGKG = 1000.0f ;   //1000 grams to one kilogram
const float REARTH = 3959.0f;    //radius of th earth 
const float  MEARTH =  5.972e24f;   //mass of the earth

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float myMass, myWgt, actWgt;

    //initialize variables
    myMass = 6.0f; 

    // input  data / variables
    cout<<" this program convert you weight in lbs to "<<endl;
    cout<<" your mass in slugs"<<endl;
    cout<<"input you actual weight in lbs"<<endl;
    cin>>actWgt;

    //process or map the inputs or outputs
    float delta, tol = .01f;
    float kGain = tol;
    do{
        myWgt = GRAVITY*CNVCMFT*CNVCMFT*CNVCMFT*MEARTH*CNVGKG*myMass/(REARTH*REARTH*CNVMFT*CNVMFT);
        delta = actWgt-myWgt;
        myMass+=kGain*delta;
    } while (abs (delta)<tol);

    //display /out  all pertinent variables 
    cout<<"your weight = "<<myWgt<<" lbs."<<endl;
    cout<<"your mass = "<<myMass<<" slugs"<<endl;
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}
