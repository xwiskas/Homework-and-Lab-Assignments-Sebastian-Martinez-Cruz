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
   char player1,
        player2;
    
    //Initialize or input i.e. set variable values
    
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    
    
    cin>>player1;
    cin>>player2;
    
    
    if(player1==player2){
        cout<<"Nobody wins"<<endl;
    }else {
    //Player 1 
        if ((player1=='P'||player1=='p') && (player2=='R'||player2=='r'))     { cout<<"Paper covers rock.";} //Player 1 wins
        else if ((player1=='P'||player1=='p') && (player2=='S'||player2=='s'))cout<<"Scissors cuts paper.";
      
        else if ((player1=='R'||player1== 'r') && (player2=='P'||player2=='p'))cout<<"Paper covers rock."; //Player 2 wins
        else if ((player1=='R'||player1== 'r') && (player2=='S'||player2=='s'))cout<<"Rock breaks scissors.";
    
    else if (player1=='S'||player1=='s'){
        if (player2=='R'||player2=='r')cout<<"Rock breaks scissors.";   //Player 2 wins
        else if(player2=='P'||player2=='p')cout<<"Scissors cuts paper."; //Player 2 wins
    }
    //Player 2 
    else if (player2== 'R'||player2=='r'){
        if (player1== 'S'||player1=='s')cout<<"Rock breaks scissors.";  //Player 1 wins
        else if (player1=='P'||player1=='p')cout<<"Paper covers rock.";
    }                                                           //else cout<<"Paper covers rock.";               //Player 2 wins
    else if (player2=='P'||player2=='p'){
        if (player1=='S'||player1=='s')cout<<"Scissors cuts paper."; //Player 2 wins 
        else if (player1=='R'||player1== 'r')cout<<"Paper covers rock.";
    }
    else if (player2=='S'||player2=='s'){
        if (player1=='P'||player1=='p')cout<<"Scissors cuts paper.";
        else if (player1=='R'||player1== 'r')cout<<"Rock breaks scissors.";
    }
    else {
        cout<<"Error"<<endl;
    }
    }
    return 0;
}

