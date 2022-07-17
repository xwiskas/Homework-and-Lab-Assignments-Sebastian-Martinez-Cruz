/* 
 * File:   main.cpp
 * Author: Sebastian Martinez Cruz
 * Created on June 22, 2022, 9:49 AM
 * Purpose: C++ Template - To be used in all future assignments 
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
     //Set the random number seed
    
    //Declare Variables
    int number,
        n1000s,
        n100s,
        n10s,
        n1s;
    

    //Initialize or input i.e. set variable values
    
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>number;
    
    if(number<1000 || number>=3000){
        if(number>=3000)cout<<number<<" is Out of Range!";
        else cout<<number<<" is Out of Range!";
        exit(1);
    }
    
    
    string romanNumber;
    
    cout<<number<<" is equal to ";
    //Map inputs -> outputs
    
    n1000s=number/1000;
    number-=n1000s*1000;
    n100s=number/100;
    number-=n100s*100;
    n10s=number/10;
    number-=n10s*10;
    n1s=number;
    
   
    
    switch(n1000s){
        case 3:romanNumber+="M";
        case 2:romanNumber+="M";
        case 1:romanNumber+="M";
    }
    
    //100s place
    
    if(n100s==9)romanNumber+="CM";
    if(n100s==8)romanNumber+="DCCC";
    if(n100s==7)romanNumber+="DCC";
    if(n100s==6)romanNumber+="DC";
    if(n100s==5)romanNumber+="D";
    if(n100s==4)romanNumber+="CD";
    if(n100s==3)romanNumber+="CCC";
    if(n100s==2)romanNumber+="CC";
    if(n100s==1)romanNumber+="C";
    
    //10s place
    
    if(n10s==9)romanNumber+="XC";
    if(n10s==8)romanNumber+="LXXX";
    if(n10s==7)romanNumber+="LXX";
    if(n10s==6)romanNumber+="LX";
    if(n10s==5)romanNumber+="L";
    if(n10s==4)romanNumber+="XL";
    if(n10s==3)romanNumber+="XXX";
    if(n10s==2)romanNumber+="XX";
    if(n10s==1)romanNumber+="X";
    
    
    //1s place
    
    if(n1s==9)romanNumber+="IX";
    if(n1s==8)romanNumber+="VIII";
    if(n1s==7)romanNumber+="VII";
    if(n1s==6)romanNumber+="VI";
    if(n1s==5)romanNumber+="V";
    if(n1s==4)romanNumber+="IV";
    if(n1s==3)romanNumber+="III";
    if(n1s==2)romanNumber+="II";
    if(n1s==1)romanNumber+="I";
   
    //Display the outputs
    
    cout<<romanNumber;
    return 0;
}

