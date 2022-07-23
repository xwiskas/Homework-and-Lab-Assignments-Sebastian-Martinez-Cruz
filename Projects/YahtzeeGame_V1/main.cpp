/* 
 * File:   main.cpp
 * Author: Sebastian Martinez Cruz
 * Created on June 22, 2022, 9:49 AM
 * Purpose: C++ Template - To be used in all future assignments 
 */

//System Libraries
#include <iostream> 
#include <iomanip> //For formatting 
#include <cmath>   //For math functions 
#include <cstdlib> //Random number library 
#include <fstream> //Create/Open/Close files
#include <string>  //String library 
#include <ctime>   //Time library 

using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0))); 
    //Declare Variables 
    int numbrP; //number of players
    char cont, //Continue
            n, //Not happy 
            N; //not happy 
    string ply1, //Player 1 name 
           ply2, //Player 2 name
           ready; //Ask both players if ready 
         
    int die1,  //The five dice used in game
        die2,
        die3,
        die4,
        die5,
        dieRslt, //Result of both of the dice
        dieRslt2,
        dieRslt5;
    int roll,   //press R to roll the dice
        roll2,  //press R to roll second dice 
        R;   //Roll
    
    string first, //Determine who goes first 
           second; //Determine who goes second 
     
    int dtrm,
        dtrm2;
    int Y;
    
    //For score card
    int aces,twos,threes,fours,fives,sixes,aces1,twos2,threes3,fours4,fives5,sixes6;
    
    aces=0;
    twos=0;
    threes=0;
    fours=0;
    fives=0;
    sixes=0;
    aces1=0;
    twos2=0;
    threes3=0;
    fours4=0;
    fives5=0;
    sixes6=0;
    
    
//Function for the dice         //cout<<die1<<endl;    //The  dice used in game
 die1=rand()%6+1;//[1,6]  
 die2=rand()%6+1;//[1,6]
 die3=rand()%6+1;//[1,6]
 die4=rand()%6+1;//[1,6]
 die5=rand()%6+1;//[1,6]
 int die1p2=rand()%6+1;//[1,6]                         //the dice for player 2 
 int die2p2=rand()%6+1;//[1,6]
 int die3p2=rand()%6+1;//[1,6]
 int die4p2=rand()%6+1;//[1,6]
 int die5p2=rand()%6+1;//[1,6]
 
 dieRslt=die1+die2;             //cout<<dieRslt<<endl; //Result of both of the dice
 dieRslt2=die3+die4;
 dieRslt5=die1+die2+die3+die4+die5;  //Add all the five dice
    
//Welcome the players 
cout<<setw(4)<<"You are about to play Yahtzee"<<setw(4)<<endl;
cout<<"Enter number of players (2 players)"<<endl;
cin>>numbrP;                                           //number of players



if (numbrP == 2)
{
    cout<<"Enter name for player one and player two:"<<endl;          //Determine Names
    cin>>ply1>>ply2;
}
//Determine who goes first 
cout<<"Lets determine who goes first!"<<endl;
cout<<"Highest number goes first"<<endl;
cout<<ply1<<" press 1 to roll "<<endl; //Player 1 press 1 to roll 
cin>>roll;
if (roll == 1)
{
    dtrm=rand()%6+1; //Determine player 1s number
    cout<<"you rolled ["<<dtrm<<"]"<<endl;
}        
else
{
    cout<<"Invalid input please press 1 to roll";        //Input validation 
}
        
cout<<ply2<<" press 2 to roll "<<endl; //Player 2 press 2 to roll 
cin>>roll2;
if (roll2 == 2)
{
    dtrm2=rand()%6+1; //Determine player 2s number
    cout<<"you rolled ["<<dtrm2<<"]"<<endl;
}        
else
{
    cout<<"Invalid input please press 2 to roll";        //Input validation 
}       

cout<<"----------------------"<<endl;
if (dtrm>dtrm2)
{
    cout<<ply1<<" goes first!"<<endl;
    first=ply1;
    second=ply2;
}
else if (dtrm2>dtrm)
{
    cout<<ply2<<" goes first!"<<endl;
    first=ply2;
    second=ply1;
}
else
{
    cout<<"It was a tie! "<<ply1<<" goes first by default"<<endl;
    first=ply1;
    second=ply2;
}
//END of determine who goes first  

    return 0;
}

