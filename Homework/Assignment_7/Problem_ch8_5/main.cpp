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
void bblSrt(float[], string * [], int);
void swap(int &, int &);

//Execution Begins Here!
int main() {
    const int MNTHS = 12;
    string months [MNTHS]={"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                          "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    string * mthptr[MNTHS];
    for(int i = 0; i < MNTHS ; i++){
        mthptr[i] = & months[i];
    }
    float rnfll[MNTHS];
    //float total;
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
    
    bblSrt(rnfll, mthptr, MNTHS);
    
    cout<<"here is the rain for each month sorted"<<endl;
//    for (auto months : values)
//        cout<<months<<" ";
    for(int i = 0; i < MNTHS ; i++){
        cout<< *mthptr[i]<<": "<<rnfll[i]<<endl;
    }
    cout<<endl;
    
    //Exit the program
    return 0;
}
void bblSrt(float array[], string * months[], int size)
{
    int mxLmnt;
    int index;
    
    
    for (mxLmnt = size - 1; mxLmnt > 0; mxLmnt--)
    {
        for (index = 0; index < mxLmnt; index++)
        {
            if (array[index] > array[index+1])
            {
                swap(array[index], array[index+1]);
                swap(months[index], months[index+1]);
            }
        }
    }
}


void swap(int&a, int &b)
{
    int temp = a;
    a=b;
    b=temp;
}