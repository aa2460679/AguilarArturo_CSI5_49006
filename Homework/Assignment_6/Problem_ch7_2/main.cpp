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
    const int MNTHS = 12;
    string months [MNTHS]{"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                          "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    float rnfll[MNTHS];
    float total;
    //Declare Variables
    
    //Initialize Variables
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    for (int index = 0; index<MNTHS; index++)
    {
        cout<< (index + 1)<<" : "<<endl;
        cin>>rnfll[index];
    }
    cout<<" here is the rain for each month"<<endl;
    for (int index = 0; index<MNTHS; index++)
    {
        cout<<"for "<<months[index]<<" "<<rnfll[index]<<endl;
    }
    /*cout<<"the total rain for the year"<<endl;
    for (int index = 0; index < MNTHS; index++)
    {
        total = rnfll[index];
        cout<<total<<endl;
    }
     */
    //Exit the program
    return 0;
}
