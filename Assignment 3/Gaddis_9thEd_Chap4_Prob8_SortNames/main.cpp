/* 
 * File:   main.cpp
 * Author: Sebastian Martinez Cruz
 * Created on June 22, 2022, 9:49 AM
 * Purpose: C++ Template - To be used in all future assignments 
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    
    string  name1,
            name2,
            name3;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>name1;
    cin>>name2;
    cin>>name3;
    //Charly   //Leslie   //Andy
    
    
    
    
    //Determine places
    if (name1<name2 and name2<name3){
        cout<<name1<<endl;
        cout<<name2<<endl;
        cout<<name3;
    }else if (name1<name3 and name3<name2){
        cout<<name1<<endl;
        cout<<name3<<endl;
        cout<<name2;
    }else if (name2<name1 and name1<name3){
        cout<<name2<<endl;
        cout<<name1<<endl;
        cout<<name3;
    }else if (name2<name3 and name3<name1){
        cout<<name2<<endl;
        cout<<name3<<endl;
        cout<<name1;
    }else if (name3<name1 and name1<name2){
        cout<<name3<<endl;
        cout<<name1<<endl;
        cout<<name2;
    }else if (name3<name2 and name2<name1){
        cout<<name3<<endl;
        cout<<name2<<endl;
        cout<<name1;
    }
    
    
    //Display the outputs
    return 0;
}

