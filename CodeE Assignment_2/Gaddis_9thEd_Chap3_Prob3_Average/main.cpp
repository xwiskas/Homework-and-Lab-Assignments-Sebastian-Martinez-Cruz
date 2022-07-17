/* 
 * File:   main.cpp
 * Author: Sebastian Martinez Cruz 
 * Created on July 5, 2022, 
 * Purpose:  Average 
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
    float num1,
          num2,
          num3,
          num4,
          num5;
    
    float avr;
    
    
    //Initialize or input i.e. set variable values
    cin>>num1;
    cin>>num2;
    cin>>num3;
    cin>>num4;
    cin>>num5;
    //Map inputs -> outputs
    
    
    avr=(num1+num2+num3+num4+num5)/5;

    
    //Display the outputs
cout<<fixed<<setprecision(2)<<showpoint;
cout<<"Input 5 numbers to average."<<endl;
cout<<"The average = "<<fixed<<setprecision(1)<<showpoint<<avr;


    //Exit stage right or left!
    return 0;
}

