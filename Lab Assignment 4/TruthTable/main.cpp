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
     bool x,y;
    
    //Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^X X^Y^Y !X&&!Y "
        <<"!(X||Y) !X||!Y !(X&&Y)"<<endl;
    
    //First Row
    x=y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^x?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(!x&&!y?'T':'F')<<"        ";
    cout<<(!x||y?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"     ";
    cout<<(!x&&y?'T':'F')<<"     ";
    cout<<endl;
    
    //Second Row
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^x?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(!x&&!y?'T':'F')<<"        ";
    cout<<(!x||y?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"     ";
    cout<<(!x&&y?'T':'F')<<"     ";
    cout<<endl;
    
    
    //Third row 
    x=false, y=true;
    
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^x?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(!x&&!y?'T':'F')<<"        ";
    cout<<(!x||y?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"     ";
    cout<<(!x&&y?'T':'F')<<"     ";
    cout<<endl;
    
    //Fourth row 
    x=y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^x?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(!x&&!y?'T':'F')<<"        ";
    cout<<(!x||y?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"     ";
    cout<<(!x&&y?'T':'F')<<"     ";
    cout<<endl;
    

    
    //Exit stage right
    return 0;
}

