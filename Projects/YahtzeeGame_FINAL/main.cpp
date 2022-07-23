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



//First rolls for player 1
do
{
cout<<"----------------------"<<endl;
cout<<first<<" rolls "<<endl; 
cout<<first<<" press 1 to roll "<<endl; //Player 1 press 1 to roll 
cin>>roll;

if(roll == 1)
{
    cout<<"You rolled: ";
    cout<<"[" << die1 <<"]"<<endl;
    
    cout<<"You rolled: ";
    cout<<"[" << die2 <<"]"<<endl;
    
    cout<<"You rolled: ";
    cout<<"[" << die3 <<"]"<<endl;
    
    cout<<"You rolled: ";
    cout<<"[" << die4 <<"]"<<endl;
    
    cout<<"You rolled: ";
    cout<<"[" << die5 <<"]"<<endl;
}

//END of first rolls

//Determine which are equal to each other and add them to the score card

if (die1 == 1)          //Determine to where dice number one goes
{
    aces+=1;
}
else if (die1 == 2)
{
    twos+=2;
}
else if (die1 == 3)
{
    threes+=3;
}
else if (die1 == 4)
{
    fours+=4;
}
else if (die1 == 5)
{
    fives+=5;
}
else if (die1 == 6)
{
    sixes+=6;
}else                      //End of determine dice number one
    cout<<endl;




if (die2 == 1)          //Determine to where dice number two goes
{
    aces+=1;
}
else if (die2 == 2)
{
    twos+=2;
}
else if (die2 == 3)
{
    threes+=3;
}
else if (die2 == 4)
{
    fours+=4;
}
else if (die2 == 5)
{
    fives+=5;
}
else if (die2 == 6)
{
    sixes+=6;
}else                    //End of determine dice number two
    cout<<endl;





if (die3 == 1)          //Determine to where dice number three goes
{
    aces+=1;
}
else if (die3 == 2)
{
    twos+=2;
}
else if (die3 == 3)
{
    threes+=3;
}
else if (die3 == 4)
{
    fours+=4;
}
else if (die3 == 5)
{
    fives+=5;
}
else if (die3 == 6)
{
    sixes+=6;
}else                       //End of determine dice number three
    cout<<endl;



if (die4 == 1)          //Determine to where dice number four goes
{
    aces+=1;
}
else if (die4 == 2)
{
    twos+=2;
}
else if (die4 == 3)
{
    threes+=3;
}
else if (die4 == 4)
{
    fours+=4;
}
else if (die4 == 5)
{
    fives+=5;
}
else if (die4 == 6)
{
    sixes+=6;
}else                       //End of determine dice number four
    cout<<endl;


if (die5 == 1)          //Determine to where dice number five goes
{
    aces+=1;
}
else if (die5 == 2)
{
    twos+=2;
}
else if (die5 == 3)
{
    threes+=3;
}
else if (die5 == 4)
{
    fours+=4;
}
else if (die5 == 5)
{
    fives+=5;
}
else if (die5 == 6)
{
    sixes+=6;
}else                      //End of determine dice number five
cout<<endl;                  


//Determine place in score card

cout<<setw(12)<<first<<setw(9)<<endl;
cout<<setw(12)<<"SCORE CARD"<<setw(9)<<endl;
cout<<"Aces   = 1 "<<"Count and add only aces   ="<<setw(3)<<aces<<setw(3)<<endl;
cout<<"Twos   = 2 "<<"Count and add only twos   ="<<setw(3)<<twos<<setw(3)<<endl;
cout<<"Threes = 3 "<<"Count and add only threes ="<<setw(3)<<threes<<setw(3)<<endl;
cout<<"Fours  = 4 "<<"Count and add only fours  ="<<setw(3)<<fours<<setw(3)<<endl;
cout<<"Fives  = 5 "<<"Count and add only fives  ="<<setw(3)<<fives<<setw(3)<<endl;
cout<<"Sixes  = 6 "<<"Count and add only sixes  ="<<setw(3)<<sixes<<setw(3)<<endl;


//First rolls for player 2 /////////

cout<<"----------------------"<<endl;
cout<<second<<" rolls next"<<endl;
cout<<second<<" press 1 to roll "<<endl; //Player 2 press 2 to roll 
cin>>roll2;

if(roll2 == 1)
{
    cout<<"You rolled: ";
    cout<<"[" << die1p2 <<"]"<<endl;
    
    cout<<"You rolled: ";
    cout<<"[" << die2p2 <<"]"<<endl;
    
    cout<<"You rolled: ";
    cout<<"[" << die3p2 <<"]"<<endl;
    
    cout<<"You rolled: ";
    cout<<"[" << die4p2 <<"]"<<endl;
    
    cout<<"You rolled: ";
    cout<<"[" << die5p2 <<"]"<<endl;
}

//END of first rolls 

//Determine which are equal to each other and add them to the score card for player 2

if (die1p2 == 1)          //Determine to where dice number one goes
{
    aces1+=1;
}
else if (die1p2 == 2)
{
    twos2+=2;
}
else if (die1p2 == 3)
{
    threes3+=3;
}
else if (die1p2 == 4)
{
    fours4+=4;
}
else if (die1p2 == 5)
{
    fives5+=5;
}
else if (die1p2 == 6)
{
    sixes6+=6;
}else                      //End of determine dice number one
    cout<<endl;



if (die2p2 == 1)          //Determine to where dice number two goes
{
    aces1+=1;
}
else if (die2p2 == 2)
{
    twos2+=2;
}
else if (die2p2 == 3)
{
    threes3+=3;
}
else if (die2p2 == 4)
{
    fours4+=4;
}
else if (die2p2 == 5)
{
    fives5+=5;
}
else if (die2p2 == 6)
{
    sixes6+=6;
}else                    //End of determine dice number two
    cout<<endl;



if (die3p2 == 1)          //Determine to where dice number three goes
{
    aces1+=1;
}
else if (die3p2 == 2)
{
    twos2+=2;
}
else if (die3p2 == 3)
{
    threes3+=3;
}
else if (die3p2 == 4)
{
    fours4+=4;
}
else if (die3p2 == 5)
{
    fives5+=5;
}
else if (die3p2 == 6)
{
    sixes6+=6;
}else                       //End of determine dice number three
    cout<<endl;



if (die4p2 == 1)          //Determine to where dice number four goes
{
    aces1+=1;
}
else if (die4p2 == 2)
{
    twos2+=2;
}
else if (die4p2 == 3)
{
    threes3+=3;
}
else if (die4p2 == 4)
{
    fours4+=4;
}
else if (die4p2 == 5)
{
    fives5+=5;
}
else if (die4p2 == 6)
{
    sixes6+=6;
}else                       //End of determine dice number four
    cout<<endl;


if (die5p2 == 1)          //Determine to where dice number five goes
{
    aces1+=1;
}
else if (die5p2 == 2)
{
    twos2+=2;
}
else if (die5p2 == 3)
{
    threes3+=3;
}
else if (die5p2 == 4)
{
    fours4+=4;
}
else if (die5p2 == 5)
{
    fives5+=5;
}
else if (die5p2 == 6)
{
    sixes6+=6;
}else                      //End of determine dice number five


//Determine place in score card for player 2

cout<<setw(12)<<second<<setw(9)<<endl;
cout<<setw(12)<<"SCORE CARD"<<setw(9)<<endl;
cout<<"Aces   = 1 "<<"Count and add only aces   ="<<setw(3)<<aces1<<setw(3)<<endl;
cout<<"Twos   = 2 "<<"Count and add only twos   ="<<setw(3)<<twos2<<setw(3)<<endl;
cout<<"Threes = 3 "<<"Count and add only threes ="<<setw(3)<<threes3<<setw(3)<<endl;
cout<<"Fours  = 4 "<<"Count and add only fours  ="<<setw(3)<<fours4<<setw(3)<<endl;
cout<<"Fives  = 5 "<<"Count and add only fives  ="<<setw(3)<<fives5<<setw(3)<<endl;
cout<<"Sixes  = 6 "<<"Count and add only sixes  ="<<setw(3)<<sixes6<<setw(3)<<endl;
cout<<"-------------------"<<endl;
cout<<"Going into next round... "<<endl;
Y++;

}while( Y<6 );  //Only 6 rounds

int firstR, //results for first player
    scndR;  //results for second player

firstR=aces+twos+threes+fours+fives+sixes;  //Add all values of first player
scndR=aces1+twos2+threes3+fours4+fives5+sixes6; //Add all values for second player

switch (firstR>scndR)
{
    case 1: cout<<first<<" is the winner!"<<endl;
}

switch (scndR>firstR)
{
    case 1: cout<<second<<" is the winner!"<<endl;
}

cout<<"End of game!"<<endl;
    return 0;
}

