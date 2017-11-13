

/* 
 * File:   main.cpp
 * Author: Art
 * Created on September 16, 2017, 12:35 AM
 * Purpose: webpage
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>        //for the ower function
#include <iomanip>      //formting Library
#include <cstdlib>      //Ramdon Number Library
#include <ctime>        //Set the ramdon seed
#include <string>  
#include <fstream>
#include <cstring>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string fName, usrName, usrBio;
    ofstream out;
    
    //Initialize Variables
    fName="webpage.html";
    out.open(fName.c_str());
    
    //Input Data/Variables
    cout<<"Generate code for a bio webpage"<<endl;
    cout<<"Input Name"<<endl;
    getline(cin,usrName);
    cout<<"input bio"<<endl;
    getline(cin,usrBio);
    
    //generate web page
    cout<<"<html>"<<endl;
    cout<<"  <head>"<<endl;
    cout<<"    <tittle>Gaddis 9th ed Ch.5 Problem 26web page generator</tittle>"<<endl;
    cout<<"  </head>"<<endl;
    cout<<"  <boyd>"<<endl;
    cout<<"    <center>"<<endl;
    cout<<"        <h1>"<<usrName<<"</h1>"<<endl;
    cout<<"        <hr /"<<endl;
    cout<<"            "<<usrBio<<endl;
    cout<<"        <hr /"<<endl;
    cout<<"    </center>"<<endl;
    cout<<"  </body>"<<endl;
    cout<<"<html"<<endl;
    
    //generate web page
    cout<<"<html>"<<endl;
    cout<<"  <head>"<<endl;
    cout<<"    <tittle>Gaddis 9th ed Ch.5 Problem 26web page generator</tittle>"<<endl;
    cout<<"  </head>"<<endl;
    cout<<"  <boyd>"<<endl;
    cout<<"    <center>"<<endl;
    cout<<"        <h1>"<<usrName<<"</h1>"<<endl;
    cout<<"        <hr /"<<endl;
    cout<<"            "<<usrBio<<endl;
    cout<<"        <hr /"<<endl;
    cout<<"    </center>"<<endl;
    cout<<"  </body>"<<endl;
    cout<<"<html"<<endl;
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //close file
    out.close();
    
    //Exit the program
    return 0;
}
