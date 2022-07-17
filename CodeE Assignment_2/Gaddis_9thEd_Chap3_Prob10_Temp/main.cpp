/* 
 * File:   main.cpp
 * Author: Sebastian Martinez Cruz
 * Created on July  5, 2022
 * Purpose:  Temperature conversion 
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
    float temperature,
          calculation;
    //Initialize or input i.e. set variable values
    cin>>temperature;
    //Map inputs -> outputs
    calculation= 5.0/9.0*(temperature-32);
    //Display the outputs

cout<<fixed<<setprecision(1)<<showpoint;
cout<<"Temperature Converter"<<endl;
cout<<"Input Degrees Fahrenheit"<<endl;
cout<<temperature<<" Degrees Fahrenheit = "<<calculation<<" Degrees Centigrade";



    //Exit stage right or left!
    return 0;
}

