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

//Execution Begins Here!
int main() {
    //Declare Variables
    int Y=10;
    int array [Y];
    int X=3;
    //Initialize Variables
    for (int count = 0; count < Y ; count++){
        array[count] = count+1;
        if (array[count]>X)
        {
            cout<<"Number "<<array[count]<<" is greater than "<<X<<endl;
        }
    }
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    /*for (int count = 0; count < Y ; count++){
        cout << array[count] << endl;
        for (X=3; X < Y; X++)
            cout << array[count] << endl;
    }
     * */
    //Exit the program
    return 0;
}




/*
 array [0,1,2,3,4,5,6,7,8,9]
 number = 3
 */