/* 
 * File:   main.cpp
 * Author: Sebastian Martinez Cruz
 * Created on July 5, 2022
 * Purpose:  Diet coke problem
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...


const float PERCENT=.001f;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    
    float weight,//weight of the dieter (use 45359.2 grams for a 100 pound person)
          conv,//Conversion from lbs to 45359.2 grams
          cweight,//weight of dieter in grams
          kmouse,//amount to kill a mouse 
          kdieter,//amount to kill dieter 
          mmouse,//mass of the mouse 
          kdose,// dose ratio to kill
          msoda,//mass of the soda can 
          sodas,//the number of cans
          asoda;//number of artificial sweetner in each can of soda
          
    
    
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cin>>weight;
    
    
    //Initialize or input i.e. set variable values
    
    conv=0.453592e3f;//conversion from lbs to grams
    kmouse=5; //amount to kill mouse
    mmouse=35; //weight of mouse
    msoda=350; //grams of soda
    
    
    
    cweight=weight*conv;//Converted from lbs to grams
    kdose=kmouse/mmouse;//lethal dose ratio
    kdieter=cweight*kdose;//lethal dose ratio for dieter 
    asoda=msoda*PERCENT;//amount of sweetner in each soda can
    sodas=(kdieter/asoda)-1;//number of sodas the dieter can drink
    
    
    
    
    
  
    cout<<fixed<<setprecision(0);
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<<sodas<<" cans";
    
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
