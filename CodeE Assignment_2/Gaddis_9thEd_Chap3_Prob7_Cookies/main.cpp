/* 
 * File:   main.cpp
 * Author: Sebastian Martinez Cruz 
 * Created on July 5, 2022, 
 * Purpose: Cookies 
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
    
    int numcookies,
        calories;
    
    //A bag= 40 cookies 
    //10 servings in a bag 
    //4 cookies = 1 servings
    //1 serving = 300 calories 
    //4 cookies = 300 calories 
    //75 calories per cookie 
    
    //Initialize or input i.e. set variable values
    
    cin>>numcookies;
    
    //Map inputs -> outputs
    
    calories=numcookies*75;
    
    //Display the outputs
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cout<<"You consumed "<<calories<<" calories.";
    //Exit stage right or left!
    return 0;
}

