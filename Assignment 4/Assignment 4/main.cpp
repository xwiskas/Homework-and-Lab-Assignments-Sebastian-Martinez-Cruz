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
const float LITER = 0.264179;
const int PERCENT=100;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
     //Set random number seed once here
    
    //Declare variables here
    int choose;//Choose a problem
    
    //Initialize variables here
    do{
        //List of Problems which can be run by the program
        cout<<endl;
        cout<<"Choose from the following Menu Items"<<endl;
        cout<<"Gaddis_9thEd_Chap5_Prob1_Sum"<<endl;
        cout<<"Gaddis_9thEd_Chap5_Prob7_PayInPennies"<<endl;
        cout<<"Gaddis_9thEd_Chap5_Prob13_MinMax"<<endl;
        cout<<"Gaddis_9thEd_Chap5_Prob22_Rectangle"<<endl;
        cout<<"Gaddis_9thEd_Chap5_Prob23_Pattern"<<endl;
        cout<<"Savitch_9thEd_Chap4_Prob1_MPG"<<endl;
        cout<<"Savitch_9Ed_Chap4_Prob2_FuelEff"<<endl;
        cout<<"Savitch_9Ed_Chap4_Prob4_Inflation"<<endl;
        cout<<"Savitch_9Ed_Chap4_Prob5_EstCost"<<endl;
        cout<<"Savitch_9Ed_Chap4_Prob9_2or3Max"<<endl;
        cout<<"10 or greater, all negatives to exit"<<endl;
        cin>>choose;
        
        switch(choose){
            case 0:{
             //Set the random number seed
    
    //Declare Variables
    
    int number, sum = 0;
    int i;
    
    //Initialize or input i.e. set variable values
    
    cin >> number;//Input number
    
    //Map inputs -> outputs
    
    for ( i = 1; i <= number; ++i) {
        sum += i;
    }
    //Display the outputs
    
     cout << "Sum = " << sum;  
        
                
            break;}
            case 1:{
                
            //Set the random number seed
    
    //Declare Variables
   
    int num,
        sum=0,
        i,
        penny=1;
    
    cin>>num;
    
    //Initialize or input i.e. set variable values
 
    
    for(int i=1;i<=num;++i)
    {
        sum += penny;
        penny*=2;
    }
    
    
    int dollar=sum/100;
    int change=sum%100;
   
   
   
   
   cout<<"Pay = $"<<dollar<<"."<<(change<10?"0":"")<<change;    
                
         
            break;}
            case 2:{
                
             //Set the random number seed
    
    //Declare Variables
    const int end = -99;
    int num, //Enter numbers
        min, //Minimum value
        max;  //Max value 

    //Initialize or input i.e. set variable values
    cin >> num;  //input 

    min = max = num;

    while (num != end)
    {
    if (num < min)
        min = num;

    if (num > max)
         max = num;

        
    //cin >> num;
    }
    
    //Map inputs -> outputs
    
    //Display the outputs

    cout << "Smallest number in the series is " <<min<<endl;
    cout << "Largest  number in the series is "  <<max;   
               

            break;}
            case 3:{
                
            //Declare Variables
    int number;
    char letter;
    //Initialize or input i.e. set variable values
    
    cin>>number;
    cin>>letter;
    
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            cout<<letter;
        }
        if (i !=number-1){
            cout<<endl;
        }
    }   
                
            break;}
            case 4:{
            //Declare Variables
    int rows;

 
    //Initialize or input i.e. set variable values
    
    cin >> rows;

    //Map inputs -> outputs
    
    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "+";
        }
        cout <<"\n"<<endl;
    }
    
   for(int i = rows; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "+";
        }
        if(i != 1){
        cout <<"\n"<<endl;
    }
    }
    
            break;}
            case 5:{
             //Declare Variables
     char yn;
    int liters = 0;
    float miles = 0.0;
    float mpg = 0.0;
    int increment=0;
    
    //Initialize or input i.e. set variable values
    cout<<fixed<<setprecision(2)<<showpoint;
      do
    {if(increment>0){
        cout<<endl;
    }
    cout << "Enter number of liters of gasoline:"<<endl;
    cin >> liters;
    cout<<"\n";
    cout << "Enter number of miles traveled:"<<endl;
    cin >> miles;
 cout<<"\n";
 
    mpg = miles / (liters * LITER); //Formula
 
 
 
    cout << "miles per gallon:" << endl;
    cout<<mpg<<endl;

    cout<<"Again:"<<endl;
    cin>>yn;
    increment++;
    }while (yn == 'y');
                
    
            break;}
            case 6:{
             //Declare Variables
     char yn;
    int liters = 0;
    float miles = 0.0;
    float mpg = 0.0;
    float mpg2= 0.0;
    int increment=0;
    
    //Initialize or input i.e. set variable values
    cout<<fixed<<setprecision(2)<<showpoint;
      do
    {if(increment>0){
        cout<<endl;
    }
    cout<<"Car 1"<<endl;
    cout << "Enter number of liters of gasoline:"<<endl;
    cin >> liters;
    cout << "Enter number of miles traveled:"<<endl;
    cin >> miles;
    
    mpg = miles / (liters * LITER);
    
    cout << "miles per gallon: "<<mpg<<endl;
    cout<<"\n";
    
    
    cout<<"Car 2"<<endl;
    cout << "Enter number of liters of gasoline:"<<endl;
    cin >> liters;
    cout << "Enter number of miles traveled:"<<endl;
    cin >> miles;
 
    mpg2 = miles / (liters * LITER);
 
 
 
    cout << "miles per gallon: "<<mpg2<<endl;
    cout<<"\n";
    
   
    if(mpg>mpg2){
        cout<<"Car 1 is more fuel efficient"<<endl;
        cout<<"\n";
    }else{
        cout<<"Car 2 is more fuel efficient"<<endl;
        cout<<"\n";
    }
    
    
    
    cout<<"Again:"<<endl;
    cin>>yn;
    increment++;
    }while (yn == 'y');    
                
       
            break;}
            case 7:{
                
            //Declare Variables
    
    float yrAgo,    //Price of an item a year ago 
          current, //Current price of an item 
          rate;    //inflation rate
          
    char yn;  //Determine if the process is repeated 
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    do{
        cout<<fixed<<setprecision(2);
        cout<<"Enter current price:"<<endl;     //Enter current price of the product
            cin>>current;
        cout<<"Enter year-ago price:"<<endl;    //enter previous price 
            cin>>yrAgo;
        rate=(current-yrAgo)/yrAgo;             //Inflation rate 
        rate=rate*PERCENT;                         //convert to PERCENT
        cout<<"Inflation rate: "<<rate<<"%"<<endl;   
        cout<<"\n";
        cout<<"Again:"<<endl;
        cin>>yn;
        if (yn == 'y') {
             cout << endl;
        }
        
    }while ( yn == 'y');                         //Repeat process 
       
                
                
         
            break;}
            case 8:{
                
             float yrAgo,    //Price of an item a year ago 
          current, //Current price of an item 
          rate,   //inflation rate
          oneYr,  //price in one year
          twoYr;  //price in two years
          
    char yn;  //Determine if the process is repeated 
    
    //Initialize or input i.e. set variable values
    
    
    //twoYr=(oneYr*rate/PERCENT)+oneYr;
    
    //Map inputs -> outputs
    
    do{
        cout<<fixed<<setprecision(2);
        cout<<"Enter current price:"<<endl;     //Enter current price of the product
            cin>>current;
        cout<<"Enter year-ago price:"<<endl;    //enter previous price 
            cin>>yrAgo;
        rate=(current-yrAgo)/yrAgo;             //Inflation rate 
        rate=rate*PERCENT;                         //convert to PERCENT
        oneYr=(current*rate/PERCENT)+current;    //formula for one year
        twoYr=(oneYr*rate/PERCENT)+oneYr;        // formula for two years (get the Inflation rate of one year and add it back )
        cout<<"Inflation rate: "<<rate<<"%"<<endl;   
        cout<<"\n";
        cout<<"Price in one year: $"<<oneYr<<endl;
        cout<<"Price in two year: $"<<twoYr<<endl;
        cout<<"\n";
        cout<<"Again:"<<endl;
        cin>>yn;
        if (yn == 'y') {
             cout << endl;
        }
        
    }while ( yn == 'y');                         //Repeat process   
                
    
            break;}
            case 9:{
                
             //Declare Variables
    
    float num1,  //Input for number 1
          num2,  //input for number 2
          num3,  //input number 3
          max1,  //Largest number 1 
          max2;  //Largest number 2
    
    
    //Initialize or input i.e. set variable values
    cout<<"Enter first number:"<<endl;
    cout<<endl;
    cin>>num1;
    cout<<"Enter Second number:"<<endl;
    cin>>num2;
    cout<<endl;
    cout<<"Enter third number:"<<endl;
    cin>>num3;
    cout<<endl;
    cout<<"Largest number from two parameter function:"<<endl;
    
    
    //Compare 2
    
    if(num1 > num2)
    {
        cout<<num1; 
        cout<<endl;
        cout<<"\n";
    }
    else if (num3 > num1)
    {
        cout<<num3; 
        cout<<endl;
        cout<<"\n";
    }
    else if (num2>num3)
   {
       cout<<num2; 
        cout<<endl;
        cout<<"\n";
   }
   else if (num2>num1)
   {
       cout<<num2; 
        cout<<endl;
        cout<<"\n";
   }
   else if (num1>num3)
   {
       cout<<num1;
        cout<<endl;
        cout<<"\n";
   }
   else if (num3>num2)
   {
       cout<<num3; 
        cout<<endl;
        cout<<"\n";
   }
   
  // Compare 3 numbers
    if(num1 > num2 and num2 > num3)
    {
        max2=num1; 
    }
    if(num1 > num3 and num3 > num2)
    {
        max2=num1; 
    }
    if(num2 > num1 and num1 > num3)
    {
        max2=num2;
    }
    if(num2 > num3 and num3 > num1)
    {
        max2=num2; 
    }
    if(num3 > num1 and num1 > num2)
    {
        max2=num3; 
    }
    if(num3 > num2 and num2 > num1)
    {
        max2=num3; 
    }
    
    cout<<"Largest number from three parameter function:"<<endl;
    cout<<max2<<endl;   
                
 
            break;}
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=0 && choose<=9);
    return 0;
}

