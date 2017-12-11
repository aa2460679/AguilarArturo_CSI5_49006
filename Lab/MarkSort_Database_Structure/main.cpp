/* 
 * File:   main.cpp
 * Author: Art Aguilar
 * Created on Dec 5th, 2017, 11:50 AM
 * Purpose:  Sorting as with a database and converting it to dynamic
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cstdlib>      //Random Function Library
#include <ctime>        //Set random number seed with time
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries
#include "Field.h"

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
void filAray(Field &);
void prntAry(Field &,int);
void prntAry(int [], int,int);
void mrkSort(Field &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int index[SIZE];
    //fill the structure with the size and the arrays
    Field fld;          //declare the structure 
    fld.size=SIZE;           //initialize the structure size
    fld.a=array;              //initialize the structure data
    fld.indx=index;            //initialize the structure index
    //int size = 100;
    //int *array = new int[size]
    
    //Initialize Variables
    filAray(fld);
    
    //Print the Array
    cout<<"Original Data Array"<<endl;
    prntAry(fld.a,SIZE,10);
    cout<<"Indexed Array before sorting"<<endl;
    prntAry(fld.indx,SIZE,10);
    
    //Process or map the inputs to the outputs
    mrkSort(fld);
    
    //Display/Output all pertinent variables
    cout<<"The Original Array after Sorting"<<endl;
    prntAry(fld.a,SIZE,10);
    cout<<"Indexed Array after sorting"<<endl;
    prntAry(fld.indx,SIZE,10);
    cout<<"The Original Array printed with the sorted Index"<<endl;
    prntAry(fld,10);
    
    //Exit the program
    return 0;
}

void mrkSort(Field &fld){
    for(int pos=0;pos<fld.size-1;pos++){
        for(int i=pos+1;i<fld.size;i++){
            if(fld.a[fld.indx[pos]]>fld.a[fld.indx[i]]){
                int temp=fld.indx[pos];
                fld.indx[pos]=fld.indx[i];
                fld.indx[i]=temp;
            }
        }
    }
}

void prntAry(Field &fld,int perLine){
    cout<<endl;
    for(int i=0;i<fld.size;i++){
        cout<<fld.a[fld.indx [i]]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void filAray(Field &fld){
    for(int i=0;i<fld.size;i++){
        fld.a[i]=rand()%90+10;
        fld.indx[i]=i;
    }
}