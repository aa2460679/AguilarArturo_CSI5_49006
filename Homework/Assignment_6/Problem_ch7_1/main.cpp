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
//int max(int[],const int);
//int min(int[],const int);

//Execution Begins Here!
int main() {
    //Declare Variables
    const int NMBRS = 10;
    int numbers [NMBRS];
    int count;
    int lrgst;
    int lwst;
    int nmbrs[NMBRS];
  
    
    lrgst = numbers[0];
    for (count = 1; count < NMBRS; count++)
    {
        if (numbers[count]>lrgst)
            lrgst = numbers[count];
    }
    lwst = numbers[0];
    for (count = 1; count < NMBRS; count++)
    {
        if (numbers[count] < lwst)
            lwst = numbers[count];
    }
    for (int count = 0; count<NMBRS; count++)
    {
        cout<< (count + 1)<<" : "<<endl;
        cin>>nmbrs[count];
    }
    cout<<"the numbers you enter are: ";
    for (count = 0; count < NMBRS; count++)
        cout<<" "<<nmbrs[count];
    cout<<endl;
    
    return 0;
}

    /*
    //Initialize Variables
    for (int index = 0; index < NMBRS ; index++){
        cout <<" number of jars sold for "<<numbers[index]<<endl;
        cin >> numbers[index]; 
    }
    // start report here
    int maxNmb = max( NMBRS);
    int minNmb = min( NMBRS);
    string maxSalsa = numbers[0];
    string minSalsa = numbers[0];
    int ttljrs, sum = 0;
    
    cout<<endl;
    /*cout<<"the total jars sold for the month was "<<ttljrs<<endl;
    for (auto& num : nmbrSld)
        
        ttljrs += nmbrSld[ttljrs];
    
    cout<<endl;
 
    
    cout << "The most jars sold are " << maxNmb << " of ";
    for (int index = 1; index < NMBRS ; index++){
        if(nmbrSld[index]==maxNmb) { maxSalsa=slsnm[index]; cout << maxSalsa << ", "; }
        /*if(nmbrSld[index]==min) { minSalsa=slsnm[index]; }
    cout << endl;
    
    cout << "The Least jars sold are " << minNmb << " of ";
    for (int index = 1; index < NMBRS ; index++){
        if(nmbrSld[index]==minNmb) { minSalsa=slsnm[index]; cout << minSalsa << ", "; }
        /*if(nmbrSld[index]==min) { minSalsa=slsnm[index]; }
    cout << endl;
    
}
//cout<<ttljrs<<endl<<endl;
int max(int array[], const int size) {
    int max = array[0];
    for(int i=1; i<size; i++) {
        if(array[i]>max) max=array[i];
    } return max;
}
 int min(int array[], const int size) {
     int min = array[0];
     for (int i=1; i<size; i++){
         if (array[i]<min) min=array[i];
     }return min;
 }
/*
 array [0,1,2,3,4,5,6,7,8,9]
 number = 3
 */