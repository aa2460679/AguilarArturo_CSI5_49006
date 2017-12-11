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
void bblSrt(int[], int);
void swap(int &, int &);

//Execution Begins Here!
int main() {
    //Declare Variables
    int accntN;
    
    //Initialize Variables
    
/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
    //binary search
    const int SIZE = 18;
    int tsts[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                      8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                      1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    int rslts;
    
    cout<<"enter the account you are searching in the the database"<<endl;
    cin>>accntN;
/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
    
/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
    //bubble sort algorithm
    cout<<"the element values"<<endl;
    for (int i=0; i<SIZE; i++){
        //cout<<element<<" ";
        cout<< tsts[i]<<" ";
    }
    cout<<endl;
    
    bblSrt(tsts, SIZE);
    
    cout<<"the sorted values"<<endl;
    for (int i=0; i<SIZE; i++){
        //cout<<element<<" ";
        cout<< tsts[i]<<" ";
        
    }
    cout<<endl;
/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/    
 
/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
//binary search    
    rslts = lnrsrch(tsts, SIZE, accntN);
    
    //Input Data/Variables
    if (rslts == -1)
        cout<<"that account number is not in the database"<<endl;
    else
    {
        cout<<"the account "<<accntN<<" is in the database"<<endl;
        cout<<(rslts + 1)<<endl;
    }
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}
/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/

/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
//bubble sort algorithm 
void bblSrt(int array[], int size)
{
    int mxlmnt;
    int index;
    
    for (mxlmnt = size - 1; mxlmnt > 0; mxlmnt--)
    {
        for (index = 0; index < mxlmnt; index++)
        {
            if (array[index] > array[index + 1])
            {
                swap (array[index], array[index + 1]);
            }
        }
    }
}

void swap(int  &a, int &b)
{
    int temp = a;
    a=b;
    b=temp;
}
/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/


/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
//binary search
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
/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/