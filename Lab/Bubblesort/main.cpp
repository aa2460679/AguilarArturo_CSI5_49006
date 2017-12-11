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
void filAray(int [],int);
void prntAry(int [],int,int);
void swap(int &,int &);
void smallst(int [],int,int);
void bblSrt(int [],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    
    //Initialize Variables
    filAray(array,SIZE);
    
    //Print the Array
    prntAry(array,SIZE,10);
    
    //Process or map the inputs to the outputs
    bblSrt(array,SIZE);
    
    //Display/Output all pertinent variables
    prntAry(array,SIZE,10);
    
    //Exit the program
    return 0;
}

void bblSrt(int a[],int n){
    bool swp;
    do{
        swp = false;
        for (int j=0;j<n-1; j++){
                if (a[j]>a[j+1]){
                    swap (a[j],a[j+1]);
                    swp = true;        
                }
            }
    }while (swp);
}

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}
