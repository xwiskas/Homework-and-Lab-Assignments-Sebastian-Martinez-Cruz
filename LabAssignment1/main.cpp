/* 
 * File:   main.cpp
 * Author: Sebastian Martinez Cruz
 * Created on June 29, 2022, 4:05 PM
 * Purpose: Lab Assignment 1
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
    //Initialize the Random Number Seed
    
    //Declare Variables 
    
    float gasGage,//gas percent full
            sizeTank,//Size of tank in gallons
            gasMpg,//gas mileage 
            gRequired,//Gallons required to fill up
            GasPrice1,//Price of regular gas
            GasPrice2,
            distance1,//miles to gas station
            distance2,
            costToFill1,//Cost to fill up
            costToFill2,
            fulldistance1,//Total distance driven back and forth
            fulldistance2,
            costDrive1,//Cost to drive to and from the gas station
            costDrive2,
            totalCost1,//total cost to the gas station
            totalCost2,
            pricePerGallon1,//total price per gallon 
            pricePerGallon2;
    
            
    //Characteristics of the vehicle 
   
    gasGage=0.75;
    sizeTank=22;
    gasMpg=17;
     gRequired=sizeTank*(1-gasGage);
    //Gas station 1
    
    GasPrice1=4.25;//Regular gas price
    distance1=10;//miles to gas station
    costToFill1=GasPrice1*gRequired;//cost to fill it up
    fulldistance1=2*distance1;//Total distance back and forth
    costDrive1=fulldistance1/gasMpg*GasPrice1;//Cost to drive distance to and from gas station
    totalCost1=costToFill1+costDrive1;        
    pricePerGallon1=totalCost1/gRequired;
    
    
    
    //Gas station 2
    
    GasPrice2=4.09;//Regular gas price
    distance2=20;//miles to gas station
    costToFill2=GasPrice2*gRequired;//cost to fill it up
    fulldistance2=2*distance2;//Total distance back and forth
    costDrive2=fulldistance2/gasMpg*GasPrice2;//Cost to drive distance to and from gas station
    totalCost2=costToFill2+costDrive2;        
    pricePerGallon2=totalCost2/gRequired;
    
    
    
    
    
    //Map inputs to outputs -> The Process
    
    //Display Results
    cout<<"Knowns for your vehicle"<<endl;
    cout<<"Gas Gage Full: "<<gasGage<<endl;
    cout<<"Size of tank in gallons: "<<sizeTank<<endl;
    cout<<"Gas mileage in mpg: "<<gasMpg<<endl;
    cout<<"Gallons required to fill up: "<<gRequired<<endl;
    cout<<"                                            " <<endl;    
    cout<<"Gas Station 1:"<<endl;
    cout<<"Regular Price: "<<GasPrice1<<endl;
    cout<<"Miles to gas station: "<<distance1<<endl;
    cout<<"Cost to fill up: "<<costToFill1<<endl;
    cout<<"Total distance back and forth: "<<fulldistance1<<endl;
    cout<<"Cost to drive distance: "<<costDrive1<<endl;
    cout<<"Total cost with mileage to gas station: "<<totalCost1<<endl;
    cout<<"Price per gallon with drive to station: "<<pricePerGallon1<<endl;
            
    cout<<"                                            " <<endl;    
    cout<<"Gas Station 2:"<<endl;
    cout<<"Regular Price: "<<GasPrice2<<endl;
    cout<<"Miles to gas station: "<<distance2<<endl;
    cout<<"Cost to fill up: "<<costToFill2<<endl;
    cout<<"Total distance back and forth: "<<fulldistance2<<endl;
    cout<<"Cost to drive distance: "<<costDrive2<<endl;
    cout<<"Total cost with mileage to gas station: "<<totalCost2<<endl;
    cout<<"Price per gallon with drive to station: "<<pricePerGallon2<<endl;        
            
            
    //Exit stage right
    return 0;
}

