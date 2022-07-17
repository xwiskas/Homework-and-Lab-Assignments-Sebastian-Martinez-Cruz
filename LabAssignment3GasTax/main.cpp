/* 
 * File:   main.cpp
 * Author: Sebastian Martinez Cruz
 * Created on July 8, 2022, 7:09 AM
 * Purpose: Gas Tax
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
 unsigned const PERCENT=100;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables 
    
    float   costG,//Amount it cost you per gallon
            excise,// Cents for excise tax/gallon
            saleTax,// Sales tax
            trdFee, //Cap and trade fee - on a tax/gallon
            fderalTax,// Federal excise tax/gallon
            oilProf, //Oil company profit  
            exciseT, //Total after excise 
            saleTaxT, //Total after Sale tax
            trdFeeT, //Total after trade fee
            fderalTaxT, //total after federal tax
            oilProfT,   //Total after oil company profit
            totlP, //Total profit the government makes
            totlPO, //Total profit the oil company makes
            exciseTotal, //Subtracted from cost per gallon
            trdFeeTotal, //Subtracted from cost per gallon
            fderalTaxTotal; //Subtracted from cost per gallon
    
    //Initialize Variables
    cout<<"Enter the cost per gallon of gas"<<endl;
    cin>>costG;
    
    excise=0.39; //39 cents
    saleTax=0.08;//8 percent 
    trdFee=0.10;  //10 cents
    fderalTax=0.184; //18.4 cents
    oilProf=0.065; //6.5 percent 
    
    //Map inputs to outputs -> The Process
    
    exciseT=costG-0.39; //5.54
    saleTaxT=costG*saleTax; //0.4744
    trdFeeT=costG-trdFee;  //5.83
    fderalTaxT=costG-fderalTax; //5.746
    oilProfT=costG*oilProf;  //0.38545
    
    
    exciseTotal=costG-exciseT;
    trdFeeTotal=costG-trdFeeT;
    fderalTaxTotal=costG-fderalTaxT;
    
    
    
    //Total Profits for government 
    
    totlP=exciseTotal+trdFeeTotal+fderalTaxTotal;
    totlPO=oilProfT+saleTaxT;
    
    
    
    //Display Results
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"Cost per gallon of gas : "<<costG<<endl;
    cout<<"Profit of Gas Companies   = "<<totlPO<<endl;
    cout<<"Profit for the Government = "<<totlP<<endl;
    
    
    
    
    //Exit stage right
    return 0;
}

