/* 
 * File:   main.cpp
 * Author: Sebastian Martinez Cruz
 * Created on June 22, 2022, 9:49 AM
 * Purpose: C++ Template - To be used in all future assignments 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    string package;
           float hrs;
           float price;
 cout<<"ISP Bill"<<endl;
 cout << "Input Package and Hours"<<endl;
 cin >> package;
 
 
 // Packages
 if ((package == "A") || (package == "B") || (package == "C")) {
 
 cin >> hrs;
 
     if (hrs <= 744) { //Can't exeed 744 hours
    // Package A
    if (package == "A") {
    if (hrs > 10) {
    price = 9.95 + (hrs - 10)*2;
    } else {
    price = 9.95;
    }


    // Package B
    } else if (package == "B") {
    if (hrs > 20) {
    price = 14.95 + (hrs - 20)*1;
    } else {
    price = 14.95;
    }



    // Package C
    } else {
    price = 19.95;
    }
 
 
    //Set the random number seed
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    
 } else {
cout << "Invalid number"; 
 }
 } else {
 cout << "Invalid package number";
}
cout << "Bill = $"<<setw(6)<< price;

    return 0;
}

