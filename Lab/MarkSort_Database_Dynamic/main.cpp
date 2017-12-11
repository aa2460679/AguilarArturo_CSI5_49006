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

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
void filAray(int *,int);
void prntAry(int *,int,int);
void prntAry(int *,int *,int,int);
void mrkSort(int *,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    /*const int SIZE=100;
    int array[SIZE];
    int index[SIZE];*/
    int size = 100;
    int *array = new int[size]
    
    //Initialize Variables
    filAray(array,size);
    
    //Print the Array
    cout<<"Original Data Array"<<endl;
    prntAry(array,size,10);
    cout<<"Indexed Array before sorting"<<endl;
    prntAry(size,10);
    
    //Process or map the inputs to the outputs
    mrkSort(array,size);
    
    //Display/Output all pertinent variables
    cout<<"The Original Array after Sorting"<<endl;
    prntAry(array,size,10);
    cout<<"Indexed Array after sorting"<<endl;
    prntAry(size,10);
    cout<<"The Original Array printed with the sorted Index"<<endl;
    prntAry(array,size,10);
    
    //Exit the program
    return 0;
}

void mrkSort(int a[],int indx[],int n){
    for(int pos=0;pos<n-1;pos++){
        for(int i=pos+1;i<n;i++){
            if(a[*(indx+pos)]>a[*(indx+i)]{
                int temp=*(indx+pos);
                *(indx+pos)=*(indx+i);
                *(indx+i)=temp;
            }
        }
    }
}

void prntAry(int a[],int indx[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[indx *i]<<" ";
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

void filAray(int a[],int indx[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
        indx[i]=i;
    }
}