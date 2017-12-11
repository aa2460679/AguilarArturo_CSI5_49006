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
const int THSNDS =1000;
const int HNDRDS = 100;
const int TENS   =  10;
const int ONES   =   1;

//Function Prototypes
void outRome(int guess);
void stfnctn(int tsts);
void prntRpt(int[], int * [], int);
void swap(int &, int &);

//Execution Begins Here!
int main(int argc, char** argv)
{
    //Declare Variables
    srand (time(0));                        //random number generator
    int Xnmbr=rand() % 1000 + 1;       //generates # between 1 and 100
    int tries = 0, guess;
    int count = 0;
    unsigned char NThsnds, NHndrds, NTens, NOnes;
    int pcGuess[10];
    int usrNmbr;
    //unsigned short nmbr;
    //Initialize Variables
    
    //Input Data/Variables
      bool again = true;
      bool crctNbr = true;
      bool scrtNbr = true;
    do{ //RUN THE GAME
        //RESET IMPORTANT GAME VARIABLES
        Xnmbr=rand() % 1000 + 1;
        tries = 0;
        count = 0;
        //REFILL GUESS ARRAY
        for(int i = 0; i < 10; i++) pcGuess[i] = rand() % 100 + 1;
    //the whole game in here
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
    cout<<"Welcome to the Numbers Game"<<endl;
    cout<<endl;
    cout<<"the program will have ten attempts to guess your number between 1 and 100"<<endl;
    cout<<endl;
    cout<<"you will have nine attempts to guess the program's number between 1 and 1000"<<endl;
    cout<<endl;
    cout<<"please enter your secret Number Between one and one hundred"<<endl;
    cin>>usrNmbr;
    //while (!crctNbr)
    const int PGRMRPT = 10;
    int pgrmRpt [PGRMRPT]={};
    int * prntRpt[PGRMRPT];
    for(int c = 0; c < PGRMRPT; c++)
    {
        prntRpt[c] = & pgrmRpt[c];
    }
    int pcGuess[PGRMRPT];
    {
        if (usrNmbr <= 100 && usrNmbr > 0)
            scrtNbr = true;
        else 
        {
        cout<<"Your number is not between 1 and 100"<<endl;
            cout<<"Pick a positive number between 1 and 100"<<endl;
            cin>>usrNmbr;
            crctNbr = false;    
        }
    }
    
    while (guess != Xnmbr && count < 9)
    {
        cout<<endl;
        cout<<"Please enter your guess of the program's number"<<endl;
        cin>>guess;
        outRome( guess );
        
        
        count++;
        ++tries;
       {
        if (guess <= 1000 && guess > 0)
            crctNbr = true;
            else
            {
            cout<<"Your number is not between 1 and 1000"<<endl;
            cout<<"Pick a positive number between 1 and 1000"<<endl;
            cin>>guess;
            crctNbr = false;
            }
            
        }
        if (guess > Xnmbr){
            cout<<"Your guess is to high!!"<<endl;
        }
        if (guess < Xnmbr){
            cout<<"Your guess is to low!!"<<endl;
        }
        if (guess != Xnmbr){
            cout<<"that was a nice try, you still got "<<9 - count<<" guesses"<<endl;
                            }
        if (guess == Xnmbr){
            cout<<"congratulations, you guess the program's number "<<tries<<" tries"<<endl;
        }
        if (count == 10){
            cout<<"you are out of guesses, maybe next time"<<endl;
        }
        
        
        int pcg = pcGuess[count];
        cout<<endl;
        cout<<"your number is "<<usrNmbr<<endl;
        cout<<"Computer guess is "<< pcg;
        cout<<endl;
        
        if ( pcg == usrNmbr ) {
            cout<<"PC WINS"<<endl;
            cout<<"Do you want to go again? (Y/N): ";
        char c_again;
        cin>>c_again;
        if (c_again !='y' && c_again!='Y') again = false;
        else again = true;
        for (int cpu =0; cpu < PGRMRPT; cpu++)
    {
        cout<< *prntRpt[cpu]<<" were the number the program used"<<endl;
    }
        cout<<"thank you for playing come back soon"<<endl;
            //continue;
        }    
    }   
     
    outRome(guess);  
        
    //after the game
        cout<<"Do you want to go again? (Y/N): ";
        char c_again;
        cin>>c_again;
        if (c_again !='y' && c_again!='Y') again = false;
        else again = true;
        for (int cpu =0; cpu < PGRMRPT; cpu++)
    {
        cout<< *prntRpt[cpu]<<" were the number the program used"<<endl;
    }
        cout<<"thank you for playing come back soon"<<endl;
        
    }while(again);
    //Exit the program
    return 0;
}


void outRome(int guess){
    int temp = guess;                       // convert to Roman;
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
}

void prntRpt(int array[], int * pgrmRpt[], int size) 
{
int mxLmnt;
int index;

for (mxLmnt = size - 1; mxLmnt > 0; mxLmnt--)
{
    for (index = 0; index < mxLmnt; index++)
    {
        if (array[index] > array[index] + 1)
        {
            swap(array[index], array[index + 1]);
            swap(pgrmRpt[index], pgrmRpt[index + 1]);
                    
        }
    }
 }
}

void swap(int&a, int &b)
{
    int temp = a;
    a=b;
    b=temp;
}