

/* 
 * File:   main.cpp
 * Author: Art
 * Created on September 23, 2017, 5:21 PM
 * Purpose: Male and Female Percentages
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

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    
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
    //Declare Variables
    int x, y, z;
    
    
    //display/output all pertinent variables
    cout<<"This program calculates what number is greater"<<endl;
    cout<<"what is the first integer?"<<endl;
    cin>> x;
    cout<<"what is the second integer?"<<endl;
    cin>> y;
    if (x > y)
        cout<<x<<" is greater than "<<y<<endl;
    else 
        cout<<y<<" is greater than "<<x<<endl;
    
    //Exit the program
    return 0;

        }
        case 2:{
            //Declare Variables
    unsigned int number;
    unsigned short roman;
      
    
    //Initialize Variables 
    cout<<"This program converts numbers to Roman Numerals"<<endl;
    cout<<"Type in a number between 1-10"<<endl;
    cin>>number;
    if(number<0||number>10){
        cout<<"invalid number"<<endl;
        exit(EXIT_FAILURE);
    }
    //Process by giving the grade
    roman=number;
    
    //display/output all pertinent variables
    switch(roman){
        case 10: cout<<"X";break;
        case 9: cout<<"IX";break;
        case 8: cout<<"VIII";break;
        case 7: cout<<"VII";break;
        case 6: cout<<"VI";break;
        case 5: cout<<"V";break;
        case 4: cout<<"IV";break;
        case 3: cout<<"I";
        case 2: cout<<"I";
        case 1: cout<<"I";
    }//Exit the program
    return 0;
        }
        case 3:{
            //Initialize Variables 
    int x, y, z;
     
    //display/output all pertinent variables
    cout<<"This program will calculate if the date is considered magic"<<endl;
    cout<<"enter the month in numeric form"<<endl;
    cin>> x;
    cout<<"enter the day of the  month?"<<endl;
    cin>> y;
    cout<<"enter the last two digits of the year?"<<endl;
    cin>> z;
    if (x * y == z){
        cout<<"that date is magic!! "<<endl;
        cout<<x<<" times "<<y<<" equals " <<z<<endl;
    }
    else {
        cout<<"the date is not magic "<<endl;
        cout<<x<<" times "<<y<<" does not equal to " <<z<<endl;
    }
    //Exit the program
    return 0;
        }
        case 4:{
    //Declare Variables
    int x, y, a, b;
    float z,c;
    
    //display/output all pertinent variables
    cout<<"This program calculates what rectangle is bigger"<<endl;
    cout<<"what is the width of rectangle z?"<<endl;
    cin>> x;
    cout<<"what is the length of rectangle z?"<<endl;
    cin>> y;
    z=x*y;
    cout<<"what is the width of rectangle c?"<<endl;
    cin>> a;
    cout<<"what is the length of rectangle c?"<<endl;
    cin>> b;
    c=a*b; 
    if (z > c)
        cout<<"\n rectangle z = "<<z<<", is the biggest rectangle"<<endl;
    if (c == z)
        cout<<"\n rectangle z and rectangle c are equal"<<endl;
    if (c > z) 
        cout<<"\n rectangle c = "<<c<<", is the biggest rectangle"<<endl;
    
    //Exit the program
    return 0;
        }
        case 5:{
    //Initialize Variables 
    int x, y, z;
    
    //display/output all pertinent variables
    cout<<"This program calculates the weight of a mass"<<endl;
    cout<<"enter the object's mass"<<endl;
    cin>> x;
    if (x > 1000)
        cout<<" object is to big"<<endl;
    if (x < 10)
        cout<<" object is too small"<<endl;
    else
        cout<<x*9.8<<" is the weight of object"<<endl;
    
    //Exit the program
    return 0;
        }
        case 6:{
    //Declare Variables
    int fi, fim1,fim2, counter;
    int wtcrud=10;  //five pounds of crud to start
    int deltdys=5;      //5days between 
    
    //Initialize Variables
    fim1=fim2=1;
    counter=3;
    
    //header
    cout<<"    sequence   crud wt   in days"<<endl;
       
    //Process or map the inputs to the outputs
    //first row
    cout<<setw(10)<<fim2<<setw(10)<<wtcrud*fim2
            <<setw(10)<<(counter-1)*deltdys<<endl;
    
    //second row
    cout<<setw(10)<<fim1<<setw(10)<<wtcrud*fim1
            <<setw(10)<<(counter-1)*deltdys<<endl;
    counter+=1;
    
    //third row
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtcrud*fi
            <<setw(10)<<(counter-1)*deltdys<<endl;
    counter+=1;
    
    //fourth row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtcrud*fi
            <<setw(10)<<(counter-1)*deltdys<<endl;
    counter+=1;
    
    //nth row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtcrud*fi
            <<setw(10)<<(counter-1)*deltdys<<endl;
    counter+=1;
    
    //nth row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtcrud*fi
            <<setw(10)<<(counter-1)*deltdys<<endl;
    counter+=1;
    
    //nth row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtcrud*fi
            <<setw(10)<<(counter-1)*deltdys<<endl;
    counter+=1;
    
    //nth row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtcrud*fi
            <<setw(10)<<(counter-1)*deltdys<<endl;
    counter+=1;
    
    //nth row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtcrud*fi
            <<setw(10)<<(counter-1)*deltdys<<endl;
    counter+=1;
    
    //nth row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtcrud*fi
            <<setw(10)<<(counter-1)*deltdys<<endl;
    counter+=1;
    
    //nth row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtcrud*fi
            <<setw(10)<<(counter-1)*deltdys<<endl;
    counter+=1;
    
    //nth row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtcrud*fi
            <<setw(10)<<(counter-1)*deltdys<<endl;
    counter+=1;
    
    //nth row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtcrud*fi
            <<setw(10)<<(counter-1)*deltdys<<endl;
    counter+=1;
    
    //nth row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtcrud*fi
            <<setw(10)<<(counter-1)*deltdys<<endl;
    counter+=1;
    
    //nth row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtcrud*fi
            <<setw(10)<<(counter-1)*deltdys<<endl;
    counter+=1;
    //nth row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtcrud*fi
            <<setw(10)<<(counter-1)*deltdys<<endl;
    counter+=1;
    
    //nth row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtcrud*fi
            <<setw(10)<<(counter-1)*deltdys<<endl;
    counter+=1;
    
    //nth row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtcrud*fi
            <<setw(10)<<(counter-1)*deltdys<<endl;
    counter+=1;
    
    //nth row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtcrud*fi
            <<setw(10)<<(counter-1)*deltdys<<endl;
    counter+=1;
    
    //nth row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtcrud*fi
            <<setw(10)<<(counter-1)*deltdys<<endl;
    counter+=1;
    
    //nth row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtcrud*fi
            <<setw(10)<<(counter-1)*deltdys<<endl;
    counter+=1;
    
    //nth row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtcrud*fi
            <<setw(10)<<(counter-1)*deltdys<<endl;
    counter+=1;
    
    //nth row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtcrud*fi
            <<setw(10)<<(counter-1)*deltdys<<endl;
    counter+=1;
    
    //nth row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtcrud*fi
            <<setw(10)<<(counter-1)*deltdys<<endl;
    counter+=1;
   
    //Exit the program
    return 0;
        }
        case 7:{
    //Initialize Variables 
    float x, y, z;
    
    //display/output all pertinent variables
    cout<<"This program calculates time"<<endl;
    cout<<"enter the amount in seconds"<<endl;
    cin>> x;
    if (x <= 59)
        cout<<x<<" seconds"<<endl;
    if (x >= 60)
        cout<<x/60<<" minutes"<<endl;
    if (x >= 3600)
        cout<<x/3600<<" hours"<<endl;
    if (x >= 86400);
        cout<<x/86400<<" days"<<endl;
    
    //Exit the program
    return 0;
        }
        case 8:{
            //display/output all pertinent variables
    cout<<"This program color combinations"<<endl;
    cout<<"enter a primary color"<<endl;
    
    string x;
    cin>> x;
    
    if(x == "red" || x == "blue" || x == "yellow"){
        cout<<"enter another primary color"<<endl;   
    }else{
        exit(EXIT_FAILURE);
    }
  
    cout<<"enter a primary color"<<endl;
    
    string y;
    cin>> y;
    
    if(y == "red" || y == "blue" || y == "yellow"){
        cout<<"enter another primary color"<<endl;   
    }else{
        exit(EXIT_FAILURE);
    }
    
    if((x=="red"&&y=="blue")||(y=="red"&&x=="blue")){
        cout<<"With "<<x<<" and "<<y<<" you get purple"<<endl;
    }
    
    else if((x=="red"&&y=="yellow")||(y=="red"&&x=="yellow")){
        cout<<"With "<<x<<" and "<<y<<" you get orange"<<endl;
        
    }else if((x=="blue"&&y=="yellow")||(y=="yellow"&&x=="blue")){
        cout<<"With "<<x<<" and "<<y<<" you get Green"<<endl;
        
    }else{
        cout<<"Unkown color results from mixing"<<endl;
    }
    //Exit the program
    return 0;
        }
        case 9:{
            //Declare Variables
    const float PNNS = .01, NCKLS = .05, DMS = .10, QTRS = .25, DLLR = 1.00;
    float pennies, nickels, dimes, quaters;
     
    //display/output all pertinent variables
    cout<<"this program calculates the amount of coins you need to make a dollar"<<endl;
    cout<<"enter how many pennies you want to use"<<endl;
    cin>> pennies;
    pennies *= PNNS;
    cout<<"enter how many nickels you want to use"<<endl;
    cin>> nickels;
    nickels = nickels * NCKLS;
    cout<<"enter how many dimes you want to use"<<endl;
    cin>> dimes;
    dimes *= DMS;
    cout<<"enter how many quaters you want to use"<<endl;
    cin>> quaters;
    quaters *= QTRS;
    if(pennies + nickels + dimes + quaters == DLLR ){
        cout<<"you won the coin game"<<endl;
        cout<<pennies*100<<" pennies + "<<nickels/NCKLS<<" nickels + "<<dimes/DMS<<" dimes + "<<quaters/QTRS<<" quaters equal "<<DLLR<<" dollar"<<endl;
    }
    else {
        cout<<"you loose"<<endl;
        cout<<pennies*100<<" pennies + "<<nickels/NCKLS<<" nickels + "<<dimes/DMS<<" dimes + "<<quaters/QTRS<<" quaters is not a "<<DLLR<<" dollar"<<endl;
    }
       
    //Exit the program
    return 0;
        }
        default:{
            cout<<"You seem to have problems with instructions"<<endl;
            cout<<"You are unworthy of running this code"<<endl;
        }
    }
    //Exit the program
    return 0;
}