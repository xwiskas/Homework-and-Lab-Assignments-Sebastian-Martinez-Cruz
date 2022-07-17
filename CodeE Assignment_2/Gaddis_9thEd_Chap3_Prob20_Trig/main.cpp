/* 
 * File:   main.cpp
 * Author: Sebastian Martinez Cruz
 * Created on July 5, 2022
 * Purpose:  Trig functions 
 */

//System Libraries
#include <iostream>//Input/Output Library
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
    double 
            angle1,
            sinofa,
          cosofa,
          tanofa,
          radians;
    //Initialize or input i.e. set variable values
    cin>>angle1;
    //Map inputs -> outputs
    
    radians=angle1*3.14159265358979323846/180;
    
    
    sinofa=sin(radians);
    cosofa=cos(radians);
    tanofa=tan(radians);
    
    
    //Display the outputs
    
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cout<<"sin("<<angle1<<")"" = "<<fixed<<setprecision(4)<<showpoint<<sinofa<<endl;
    cout<<fixed<<setprecision(0)<<noshowpoint<<"cos("<<angle1<<")"" = "<<fixed<<setprecision(4)<<showpoint<<cosofa<<endl;
    cout<<fixed<<setprecision(0)<<noshowpoint<<"tan("<<angle1<<")"" = " <<fixed<<setprecision(4)<<showpoint<<tanofa;
    //Exit stage right or left!
    return 0;
}