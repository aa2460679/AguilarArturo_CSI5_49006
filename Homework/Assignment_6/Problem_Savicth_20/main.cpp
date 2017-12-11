/* 
 * File:   main.cpp
 * Author: Art
 * Created on November 21, 2017, 10:35 AM
 * Purpose: calculating the standard deviation 
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
const unsigned int MAXRAND=pow(2,31)-1;

//Function Prototypes
float pRand();          //0-1
float stdNorm();        //normal distribution (1,0)
float fillAry (float [], int);
float mean(float [],int);
float stdDev (float[],int );

//Execution Begins Here!
int main(int argc, char** argv) {
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
            
    //Declare Variables
    const int  SIZE = 100000;
    float x[SIZE]={};
    
    //Initialize Variables
    fillAry(x,SIZE);
    
    //Input Data/Variables
    
    //Display/output all pertinent variables
    cout<<"the simulated normal distribution = "
        <<"N("<<stdDev(x,SIZE)<<","<<mean(x,SIZE)
        <<")"<<endl;
    
    //Exit the program
    return 0;
}

/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
                          Fill Array
Input:
      x -> Array
      n -> Size
Output:
      Fill the array with random standard normal values
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/

float fillAry (float x[], int n){
    for (int i=0;i<n;i++){
        x[i]=stdNorm();
    }
}

/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
                          standard deviation
Input:
      x -> Array
      n -> Size
Output:
      standard deviation on the array
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/

float stdDev (float x[],int n){
    float sum=0;
    float xmean=mean(x,n);
    for (int i=0;i<n;i++){
        float delx=x[i]-xmean;
        sum+=(delx*delx);
    }
    return sqrt(sum/(n-1));
}

/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
                               mean
Input:
      x -> Array
      n -> Size
Output:
      mean or the average of the array 
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/

float mean(float x[],int n){
    float sum=0;
    for (int i=0;i<n;i++){
        sum+=x[i];
    }
    return sum/n;
}

/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
                               standard normal probability
Input:
      none
Output:
      standard normal number between (-6, 6 )
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/

float stdNorm(){
    float sum=0;
    for (int i=1;i<=12;i++){
        sum+=pRand();
    }
    return sum-6;
}

/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
                               random probability 
Input:
 n      none
Output:
 p      pseud-random number between (0, 1) 
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/

float pRand(){
    static const float scale=1/(pow(2,31)-1);
    return rand()*scale;
}
