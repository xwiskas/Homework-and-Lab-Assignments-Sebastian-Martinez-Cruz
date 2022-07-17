/* 
 * File:   main.cpp
 * Author: Sebastian Martinez Cruz
 * Created on July 5, 2022
 * Purpose:  
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    
    float payrate,//payrate in $'s/hr
          hrsw,//Hours worked 
          payC;//Paycheck in $'s
          
   
    //Initialize or input i.e. set variable values
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>payrate>>hrsw;
    
    
    payC=payrate*hrsw;
    payC+=hrsw>40?payrate*(hrsw-40):0;
    
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
   cout<<"Paycheck = $"<<setw(7)<<payC;
    
    //Exit stage right or left!
    return 0;
}

