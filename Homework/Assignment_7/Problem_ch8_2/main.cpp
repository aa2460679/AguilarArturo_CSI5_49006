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
int lnrsrch(const int [], int, int);
int ltryNbr;

//Execution Begins Here!
int main() {
    //Declare Variables
    
    //Initialize Variables
    const int SIZE = 18;
    int tsts[SIZE] = {13579, 26791, 26792, 33445, 55555, 
                      62483, 77777, 79422, 85647, 93121};
    int rslts;
    
    cout<<"enter the Lottery Numbers for this week"<<endl;
    cin>>ltryNbr;
    
    rslts = lnrsrch(tsts, SIZE, ltryNbr);
    
    //Input Data/Variables
    if (rslts == -1)
        cout<<"the Lottery Numbers do not match your lucky numbers"<<endl;
    else
    {
        cout<<"the Lottery Numbers: "<<ltryNbr<<" match one of your lucky numbers"<<endl;
        cout<<(rslts + 1)<<endl;
    }
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}
int lnrsrch(const int array[], int size, int value)
{
    int index =0;
    int position = -1;
    bool found = false;
    
    while (index<size && !found)
    {
        if (array [index] == value)
        {
            found = true;
            position = index; 
        }
        index++;
    }
    return position;
}