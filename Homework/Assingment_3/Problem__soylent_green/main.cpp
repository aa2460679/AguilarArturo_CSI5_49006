

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

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int fi, fim1,fim2, counter;
    int wtcrud=10;  //five pounds of crud to start
    int deltdys=5;      //5days between 
    
    //Initialize Variables
    fim1=fim2=1;
    counter=3;
    
    //header
    cout<<"    sequence   crud wt   in days"<<endl;
    
    //Input Data/Variables
    
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
    
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}
