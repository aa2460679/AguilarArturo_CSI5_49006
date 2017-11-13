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
float pRand();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    
    //Loop the Menu and Problems
    do{
    
        //Input Data/Variables
        cout<<"Choose from the Menu"<<endl;
        cout<<"1. Problem 1"<<endl;
        cout<<"2. Problem 2"<<endl;
        cout<<"3. Problem 3"<<endl;
        cout<<"4. Problem 4"<<endl;
        cout<<"5. Problem 5"<<endl;
        cout<<"6. Problem 6"<<endl;
        cout<<"7. Problem 7"<<endl;
        cout<<"8. Problem 8"<<endl;
        cout<<"9. Problem 9"<<endl;
        cin>>choice;

        //Process or map the inputs to the outputs
        switch(choice){
            case 1:{
            void calmrkp(float tst1)
    {
        //float mrkp;
        cout<<"the markup percentage is "<<tst1<<"%"<<endl;
    }
    
    calRtl()
    {
        float ttlRtl;
        cout<<"your retail price is $"<<ttlRtl<<endl;
    }
    int main ()
    {
    float prc;
    float tst1;
    float mrkp;
    float prcntg;
    float amtMrkp;
    float ttlRtl;
    amtMrkp = prc*prcntg;
    ttlRtl = amtMrkp + prc;
    cout<<"this program will calculate the mark up of a n item"<<endl;
    cout<< "what is the price of the item?"<<endl;
    cin>>prc;
    cout<<"what percentage do you want to mark up?"<<endl;
    cin>>mrkp;
    prcntg = mrkp/100;
    
    cout<<"wholesale price $"<<prc<<endl;
    calmrkp(mrkp = tst1);
        
    //Exit the program
    return 0;
    }
            }
        }
            case 2:{
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
            
    //Declare Variables
    bool lvA, lvB, lvC;
    float pkllA, pkllB, pkllC;
    
    //Initialize Variables
    lvA=lvB=lvC=true;
    pkllA = 1.0/3;
    pkllB = 1.0/2;
    pkllC = 1.0f;
    
    //Input Data/Variables
    char lvSm;
    do{
        if (lvA){
            if (lvB){
                if (pRand() <= pkllA)lvB = false;
            }else if (lvC){
                if (pRand () <=pkllA)lvC = false;
            }
        }
        
        if (lvB){
            if (lvC){
                if (pRand()<= pkllB)lvC = false;
            }else if (lvC){
                if (pRand () <=pkllB)lvA = false;
            }
        }
        
        if (lvC){
            if (lvA){
                if (pRand()<= pkllC)lvA = false;
            }else if (lvB){
                if (pRand ()<=pkllC)lvB = false;
            }
        }
            
        lvSm = lvA+lvB+lvC;
    }while (lvSm>1);
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<<"Aaron   is "<<(lvA?"alive":"dead")<<endl;
    cout<<"Bob     is "<<(lvA?"alive":"dead")<<endl;
    cout<<"Charlie is "<<(lvA?"alive":"dead")<<endl;
    
    //Exit the program
    return 0;
}

            case 3:{
                cout<<"You are in Problem 3"<<endl;
                break;
            }
            case 4:{
                cout<<"You are in Problem 4"<<endl;
                break;
            }
            case 5:{
                cout<<"You are in Problem 5"<<endl;
                break;
            }
            case 6:{
                cout<<"You are in Problem 6"<<endl;
                break;
            }
            case 7:{
                cout<<"You are in Problem 7"<<endl;
                break;
            }
            case 8:{
                cout<<"You are in Problem 8"<<endl;
                break;
            }
            case 9:{
                cout<<"You are in Problem 9"<<endl;
                break;
            }
            default:{
                cout<<"Exiting, have a great day!"<<endl;
            }
        }
    }while(choice>0&&choice<10);
    
    //Exit the program
    return 0;
}