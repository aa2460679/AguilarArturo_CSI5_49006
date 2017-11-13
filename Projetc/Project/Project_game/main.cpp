/* 
 * File:   main.cpp
 * Author: Art
 * Created on November 4, 2017, 1:35 PM
 * Purpose: Numbers games
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>        //for the ower function
#include <iomanip>      //formting Library
#include <cstdlib>      //Ramdon Number Library
#include <ctime>        //Set the ramdon seed
#include <string>  
#include <vector>
#include <fstream>

using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const int THSNDS =1000;
const int HNDRDS = 100;
const int TENS   =  10;
const int ONES   =   1;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    srand (time(0));                //random number generator
    const int Xnmbr=rand() % 20 + 1;     //generates # between 1 and 100
    int tries = 0, guess;
    int count = 0;
    unsigned char NThsnds, NHndrds, NTens, NOnes;
    //unsigned short nmbr;
    //Initialize Variables
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    int numTemp = Xnmbr;
    //cout << Xnmbr << endl;
    NHndrds=numTemp/HNDRDS;
    numTemp%=HNDRDS;
    //cout << (int)NHndrds << ":" << Xnmbr << endl;
    NTens=numTemp/TENS;
    numTemp%=TENS;
    // cout << (int)NTens << ":" << Xnmbr << endl;
    NOnes=Xnmbr;
    //cout << (int)NOnes << ":" << Xnmbr << endl;
    
    //nmbr=Xnmbr;
    //Display/Output all pertinent variables
    cout<<"Guess my number"<<endl;
    while (guess != Xnmbr && count < 10)
    {
        cout<<"Enter a guess of my number"<<endl;
        cin>>guess;
        int temp = guess;// convert to Roman;
        char guessH, guessT, guessO;
        guessH=temp/HNDRDS;
        temp%=HNDRDS;
        guessT=temp/TENS;
        temp%=TENS;
        guessO=temp;
        switch(guessH){
            case 9: cout<<"CM";break;
            case 8: cout<<"DCCC";break;
            case 7: cout<<"DCC";break;
            case 6: cout<<"DC";break;
            case 5: cout<<"D";break;
            case 4: cout<<"CD";break;
            case 3: cout<<"C";
            case 2: cout<<"C";
            case 1: cout<<"C";
        }
        //Display The Number of 10's
        switch(guessT){
            case 9: cout<<"XC";break;
            case 8: cout<<"LXXX";break;
            case 7: cout<<"LXX";break;
            case 6: cout<<"LX";break;
            case 5: cout<<"L";break;
            case 4: cout<<"XL";break;
            case 3: cout<<"X";
            case 2: cout<<"X";
            case 1: cout<<"X";
        }
        //Display The Number of 1's
        switch(guessO){
            case 9: cout<<"IX";break;
            case 8: cout<<"VIII";break;
            case 7: cout<<"VII";break;
            case 6: cout<<"VI";break;
            case 5: cout<<"V";break;
            case 4: cout<<"IV";break;
            case 3: cout<<"I";
            case 2: cout<<"I";
            case 1: cout<<"I";
        }
        cout<<endl;
        count++;
        ++tries;
        if (guess > Xnmbr){
            cout<<"To high!!"<<endl;
        }
        if (guess < Xnmbr){
            cout<<"To low!!"<<endl;
        }
        if (guess != Xnmbr){
            cout<<" nice try, you still got "<<10 - count<<" guesses"<<endl;
                            }
        if (guess == Xnmbr){
            cout<<"congratulations, you guess my number in "<<tries<<" tries"<<endl;
        }
        if (count == 10){
            cout<<"you are out of guesses, maybe next time"<<endl;
        }
    }   
        switch(NHndrds){
        case 9: cout<<"CM";break;
        case 8: cout<<"DCCC";break;
        case 7: cout<<"DCC";break;
        case 6: cout<<"DC";break;
        case 5: cout<<"D";break;
        case 4: cout<<"CD";break;
        case 3: cout<<"C";
        case 2: cout<<"C";
        case 1: cout<<"C";
    }
    //Display The Number of 10's
    switch(NTens){
        case 9: cout<<"XC";break;
        case 8: cout<<"LXXX";break;
        case 7: cout<<"LXX";break;
        case 6: cout<<"LX";break;
        case 5: cout<<"L";break;
        case 4: cout<<"XL";break;
        case 3: cout<<"X";
        case 2: cout<<"X";
        case 1: cout<<"X";
    }
    //Display The Number of 1's
    switch(NOnes){
        case 9: cout<<"IX";break;
        case 8: cout<<"VIII";break;
        case 7: cout<<"VII";break;
        case 6: cout<<"VI";break;
        case 5: cout<<"V";break;
        case 4: cout<<"IV";break;
        case 3: cout<<"I";
        case 2: cout<<"I";
        case 1: cout<<"I";
    }
    
    //Exit the program
    return 0;
}
