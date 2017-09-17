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
    int payamnt, payprds;
    float annlpay;
    //Initialize these variables
    payamnt=2200.0;
    payprds=26;
    
    
    
            
    //Process or map the inputs to the outputs
    annlpay=payamnt*payprds;
    
    
    
    //display/output all pertinent variables
    cout<<"Amount per pay period = $"<<payamnt<<endl;
    cout<<"times paid in one year = "<<payprds<<endl;
    cout<<"total annual pay = $"<<annlpay<<endl;
    
    
    return 0;
}

