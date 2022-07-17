/* 
 * File:   main.cpp
 * Author: Sebastian Martinez Cruz
 * Created on July 5, 2022
 * Purpose:  Meeting room capacity
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
    
    int maxRoom,//Maximum room capacity 
          numP,//Number of people in the meeting 
          more,//How much more people can attend
          less;//How much people need to leave
          
          
          
    
                      
          
    
    //the maximum room capacity and the number of people attending the meeting.
    
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>maxRoom>>numP;
    
    more=maxRoom-numP;//How much more people can attend 
    less=numP-maxRoom;//How much people need to leave 
   
    if (numP>=maxRoom)//Number of people is greated than the maximum allowed
    {
     cout<<"Meeting cannot be held."<<endl;
     cout<<"Reduce number of people by "<<less<<" to avoid fire violation.";//How much people need to leave
    }
    else 
    {
     cout<<"Meeting can be held."<<endl;
     cout<<"Increase number of people by "<<more<<" will be allowed without violation.";//How much more people can attend
    }
    
    
    
    
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
   
    //Exit stage right or left!
    return 0;
}

