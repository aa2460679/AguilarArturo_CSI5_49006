/* 
 * File:   main.cpp
 * Author: Art Aguilar
 * Created on September 17, 2:36 AM
 * Average of Values 
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int TE, TT, TS, TF, TTR;
    float total, ave;
    //Initialize these variables
    TE=28;
    TT=32;
    TS=37;
    TF=24;
    TTR=33;
    
            
    //Process or map the inputs to the outputs
    total=TE+TT+TS+TF+TTR;
    ave=total/5;
    
    
    
    //display/output all pertinent variables
    cout<<"sum of variables = "<<total<<endl;
    cout<<"the average of the sum = "<<ave<<endl;
    
    return 0;
}

