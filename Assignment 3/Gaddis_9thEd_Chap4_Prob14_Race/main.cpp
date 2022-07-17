/* 
 * File:   main.cpp
 * Author: Sebastian Martinez Cruz
 * Created on June 22, 2022, 9:49 AM
 * Purpose: C++ Template - To be used in all future assignments 
 */

//System Libraries
#include <iostream>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
     //Set the random number seed
    
    //Declare Variables
    
  
    string run1,
           run2,
           run3;

    int time1,
        time2,
        time3;


    cout<<"Race Ranking Program"<<endl;
    cout << "Input 3 Runners"<<endl;
    cin >> run1; 
    cin >> time1;
    cin >> run2;
    cin >> time2;
    cin >> run3;
    cin >> time3;
    cout<<"Their names, then their times"<<endl;
        
        if (time1<0 || time2<0 || time3<0)
        {
            cout<<"Invalid number"<<endl;
        }
        
        
        else{
            if (time1 < time2 && time2 < time3)
            {
                    
                cout <<run1 <<"\t"    <<setw(3)<<time1 << endl;
                cout << run2<<"\t"    <<setw(3)<< time2 << endl;
                cout << run3 <<"\t"   <<setw(3)<< time3;
            
            }
            else if (time1<time3 && time3<time2)
            {
                cout<< run1 <<"\t"        <<setw(3)<< time1<<endl;
                cout<< run3 <<"\t"        <<setw(3)<< time3<<endl;
                cout<< run2 <<"\t"        <<setw(3)<< time2;
            }
            else if (time2 < time1 && time1 < time3)
            {
                cout << run2 <<"\t"       <<setw(3)<< time2<<endl;
                cout << run1 <<"\t"       <<setw(3)<< time1<<endl;
                cout << run3 <<"\t"       <<setw(3)<< time3;
            }
            else if (time2 < time3 && time3 < time1)
            {
    
                cout << run2 <<"\t"       <<setw(3)<< time2<<endl;
                cout << run3 <<"\t"       <<setw(3)<< time3<<endl;
                cout << run1 <<"\t"       <<setw(3)<< time1;
                   
            }
            else if (time3 < time1 && time1 < time2)
            {
                cout << run3 <<"\t"       <<setw(3)<< time3 <<endl;
                cout << run1 <<"\t"       <<setw(3)<< time1<<endl;
                cout << run2<<"\t"        <<setw(3)<< time2;
            }
            else if (time3<time2 && time2< time1)
            {
            
                cout << run3 <<"\t"       <<setw(3)<< time3 <<endl;
                cout << run2 <<"\t"       <<setw(3)<< time2<<endl;
                cout << run1<<"\t"        <<setw(3)<< time1;
                
            
            }else cout<<"Error";
    }  
  
       
    

    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

