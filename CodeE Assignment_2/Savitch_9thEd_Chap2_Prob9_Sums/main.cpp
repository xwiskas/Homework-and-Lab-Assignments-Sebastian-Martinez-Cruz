/* 
 * File:   main.cpp
 * Author: Sebastian Martinez Cruz
 * Created on July 5, 2022
 * Purpose:  Sum of numbers 
 */

//System Libraries
#include <iostream>
#include <iomanip>//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    
    {
    //Define variables
    int numbers;//Input the numbers
    int posnum=0; //Numbers are positive 
    int negnum=0; //numbers are negative
    int total=0;//total sum of all numbers
    

    for(int i=0;i<10;i++)
    {	
	cin>>numbers;
	    
	total += numbers ;
	if(numbers<=0)//validate negative
          negnum += numbers;
       else 
	  posnum += numbers;
    }

    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
  
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
 
    cout<<fixed<<setprecision(1)<<showpoint;
    //Print sum of all negative numbers
    cout << "Negative sum = " << setw(3) << negnum << endl;
    cout << "Positive sum = " << setw(3) << posnum << endl;
    cout << "Total sum    = " << setw(3) << total;
    //Exit stage right or left!
    }
    return 0;
}
