/* 
 * File:   main.cpp
 * Author: Sebastian Martinez Cruz
 * Created on June 22, 2022, 9:49 AM
 * Purpose: C++ Template - To be used in all future assignments 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    
    int numbooks,//Number of books
         purch,//Number of books purchased
         point;//Points earned
    
    
    //Initialize or input i.e. set variable values
    
    
     cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>numbooks;
   //Map inputs -> outputs
    
    if (numbooks>=4){
        point=60;
    }else if (numbooks>=3){
        point=30;
    }else if (numbooks>=2){
        point=15;
    }else if (numbooks>=1){
        point=5;
    }else{
          point=0;
    }     
            
  
    //Display the outputs
   cout<<"Books purchased =  "<<numbooks<<endl;
    cout<<"Points earned   = "<<point;
    //Exit stage right or left!
    return 0;
}

