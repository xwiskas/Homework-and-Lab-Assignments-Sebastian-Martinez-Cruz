/* 
 * File:   main.cpp
 * Author: Sebastian Martinez Cruz
 * Created on July 5, 2022
 * Purpose:  Pay increase 
 */

//System Libraries
#include <iostream>
#include <cmath>//Input/Output Library
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
    
    const float payInc=0.076;
    
    
    float oldS,//Old salary 
          newS,//new salary
          retroP,//retroactive pay 
          inc,//How much the salary increased
          newM; //new monthly salary 
    //Initialize or input i.e. set variable values
    
   cout<<"Input previous annual salary."<<endl;
   cin>>oldS;
    
    //Map inputs -> outputs
    
    newS=(oldS*payInc)+oldS; //New annual salary
    inc=newS-oldS;//Pay increase
    retroP=inc/2;//retroactive pay
    newM=newS/12;//new monthly payment
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Retroactive pay    = $"<<setw(7)<<retroP<<endl;
    cout<<"New annual salary  = $"<<setw(6)<<newS<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<newM;
    //Exit stage right or left!
    return 0;
}