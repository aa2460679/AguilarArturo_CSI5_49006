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
#include <vector> 
#include <set>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
void sltnSrt(vector<string>&);
void swap(string &, string &);
int bnrysrch(const vector<string>&, string);

//Execution Begins Here!
int main()
{
    //Declare Variables
    string srchVl;
    int pstn;
    
    //define a vector of strings
    vector<string> names={ "Collins, Bill", "Smith, Bart", "Allen, Jim",
                          "Griffin, Jim", "Stamey, Mary", "Rose, Geri",
                          "Taylor, Terri", "Johnson, Jill",
                          "Allison, Jeef", "Looney, Joe", "Wolfe, Bill",
                          "James, Jean", "Weaver, Jim", "Pore, Bob",
                          "Rutherford, Greg", "Javens, Renee",
                          "Harrison, Rose", "Setzer, Cathy",
                          "Pike, Gordon", "Holland, Beth" };
    
    //Sort Selector
    sltnSrt(names);
    
    //display the vector's elements
    cout<<"Here are the sorted names"<<endl;
    for(auto element : names)
        cout<<element<<endl;
    cout<<endl;
   
    //search foe a name
    cout<<"Enter a name to search for: "<<endl;
    getline(cin, srchVl);
    pstn=bnrysrch(names, srchVl);
    
    //display the results
    if (pstn !=-1)
        cout<<"That name is found at position "<<pstn<<endl;
    else
        cout<<"That name is not found"<<endl;
    
    //Initialize Variables
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}

void sltnSrt(vector<string> &v)
{
    int minIndx;
    string minVl;
    
    for (int start=0; start<(v.size()-1); start++)
    {
        minIndx=start;
        minVl=v[start];
        for (int index=start+1; index<v.size(); index++)
        {
            if (v[index]<minVl)
            {
                minVl=v[index];
                minIndx=index;
            }
        }
        swap(v[minIndx], v[start]);
    }
}


void  swap(string &a, string &b)
{
    string temp=a;
    a=b;
    b=temp;
}

int bnrysrch(const vector<string> &v, string str)
{
    int first=0,
            last =v.size()-1,
            middle ,
            position=-1;
    bool found=false;
    
    while (!found && first <= last)
    {
        middle = (first+last) / 2;
        if (v[middle] == str)
        {
            found = true;
            position = middle;
        }
        else if (v[middle] > str)
            last = middle + 1;
    }
    return position;
}