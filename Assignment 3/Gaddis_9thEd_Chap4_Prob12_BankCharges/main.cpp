/* 
 * File:   main.cpp
 * Author: Sebastian Martinez Cruz
 * Created on June 22, 2022, 9:49 AM
 * Purpose: C++ Template - To be used in all future assignments 
 */

//System Libraries
#include <iostream>
#include <iomanip>
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
    
    double checks,//Number of checks
          extra,//Extra charge
          balance,//Beggining balance 
          xtrafee,//Extra fee depending on number of checks
          fees,//Fees from the bank
          negV,//Negative value
          chkfee,//Check fee 
          mfee,//Monthly fee 
          lowB,//Low balance 
          totalfee,//The total fees
          newB;//New balance
          
          
    //Initialize or input i.e. set variable values
    
    
    fees=10; //$10 per month for the bank 
    

    //Map inputs -> outputs
    
     cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>balance>>checks;
    
    
      if (checks>=60){
        xtrafee=0.04;
    }else if (checks>=40 and checks<=59){
        xtrafee=0.06;
    }else if (checks>=20 and checks<=39){
        xtrafee=0.08;
    }else if (checks<=20){
        xtrafee=0.10;
    }else{
          xtrafee=0;
    }     
    
 
    
    if (balance<400){       //Determine if the account is below 400
        lowB=15;
    }else if (balance>=400)
        lowB=0;
    
   
    
   chkfee=(checks*xtrafee);//Check fee
    
    
   newB=balance-chkfee-fees-lowB; //New balance 
    
    
    
    //Display the outputs
   
    
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Balance     $"<<setw(9)<<balance<<endl;
    cout<<"Check Fee   $"<<setw(9)<<chkfee<<endl;
    cout<<"Monthly Fee $"<<setw(9)<<fees<<endl;
    cout<<"Low Balance $"<<setw(9)<<lowB<<endl;
    cout<<"New Balance $"<<setw(9)<<newB;

    //Exit stage right or left!
    return 0;
}

