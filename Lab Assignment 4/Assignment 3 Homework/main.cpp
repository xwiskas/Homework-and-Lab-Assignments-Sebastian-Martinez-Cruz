/* 
 * File:   main.cpp
 * Author: Sebastian Martinez Cruz
 * Created on June 22, 2022, 9:49 AM
 * Purpose: C++ Template - To be used in all future assignments 
 */

//System Libraries
#include <iostream>//Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time library
#include <iomanip>   //Formatting Lbrary
#include <cmath>     //Math Library - Log Function
#include <string>    //String
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    int choose;//Choose a problem
    
    //Initialize variables here
    do{
        //List of Problems which can be run by the program
        cout<<"                       "<<endl;
        cout<<"Choose from the following Menu Items"<<endl;
        cout<<"Problem 1 Gaddis_9thEd_Chap4_Prob8_SortNames "<<endl;
        cout<<"Problem 2 Gaddis_9thEd_Chap4_Prob11_Books"<<endl;
        cout<<"Problem 3 Gaddis_9thEd_Chap4_Prob12_BankCharges"<<endl;
        cout<<"Problem 4 Gaddis_9thEd_Chap4_Prob14_Race"<<endl;
        cout<<"Problem 5 Gaddis_9thEd_Chap4_Prob23_ISP"<<endl;
        cout<<"Problem 6 Savitch_9thEd_Chap3_PracProb1_RockPaperScissors"<<endl;
        cout<<"Problem 7 Savitch_9thEd_Chap3_Prob3_Roman_Conversion"<<endl;
        cout<<"Problem 8 Savitch_9thEd_Chap3_PracProb4_CompatibleSigns"<<endl;
        cout<<"10 or greater, all negatives to exit"<<endl;
        cin>>choose;
        
        switch(choose){
            case 1:{
            //Declare Variables
    
            string  name1,
            name2,
            name3;
    
            //Initialize or input i.e. set variable values
    
            //Map inputs -> outputs
    
            cout<<"Sorting Names"<<endl;
            cout<<"Input 3 names"<<endl;
            cin>>name1;
            cin>>name2;
            cin>>name3;
            //Charly   //Leslie   //Andy
    
            //Determine places
            if (name1<name2 and name2<name3){
                cout<<name1<<endl;
                cout<<name2<<endl;
                cout<<name3;
            }else if (name1<name3 and name3<name2){
                cout<<name1<<endl;
                cout<<name3<<endl;
                cout<<name2;
            }else if (name2<name1 and name1<name3){
                cout<<name2<<endl;
                cout<<name1<<endl;
                cout<<name3;
            }else if (name2<name3 and name3<name1){
                cout<<name2<<endl;
                cout<<name3<<endl;
                cout<<name1;
            }else if (name3<name1 and name1<name2){
                cout<<name3<<endl;
                cout<<name1<<endl;
                cout<<name2;
            }else if (name3<name2 and name2<name1){
                cout<<name3<<endl;
                cout<<name2<<endl;
                cout<<name1;
            }   
             
            break;}
            
            case 2:{
            //Declare Variables
    
            int numbooks,//Number of books
                purch,//Number of books purchased
                point;//Points earned
    
    
            //Initialize or input i.e. set variable values
    
    
            cout<<"Book Worm Points"<<endl;
            cout<<"Input the number of books purchased this month."<<endl;
            cin>>numbooks;
        //Map inputs -> outputs
    
            if (numbooks>=4){
                point=60;
            }else if (numbooks>=3){
                point=30;
            }else if (numbooks>=2){
                point=15;
            }else if (numbooks>=1){
                point=5;
            }else{
                point=0;
            }     
            
            //Display the outputs
            cout<<"Books purchased =  "<<numbooks<<endl;
            cout<<"Points earned   = "<<point;
            //Exit stage right or left!
            
            break;}
            case 3:{
            //Declare Variables
    
            double checks,//Number of checks
            extra,//Extra charge
            balance,//Beginning balance 
            xtrafee,//Extra fee depending on number of checks
            fees,//Fees from the bank
            negV,//Negative value
            chkfee,//Check fee 
            mfee,//Monthly fee 
            lowB,//Low balance 
            totalfee,//The total fees
            newB;//New balance
          
    fees=10; //$10 per month for the bank 
  
    //Map inputs -> outputs
    
     cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>balance;
    cin>>checks;
    
    
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

           
            break;}
            
            case 4:{
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
                
               
            break;}
            case 5:{
             
            string package;
           float hrs;
           float price;
        cout<<"ISP Bill"<<endl;
        cout << "Input Package and Hours"<<endl;
        cin >> package;
 
 // Packages
 if ((package == "A") || (package == "B") || (package == "C")) {
 
        cin >> hrs;
 
     if (hrs <= 744) { //Can't exceed 744 hours
    // Package A
    if (package == "A") {
    if (hrs > 10) {
    price = 9.95 + (hrs - 10)*2;
    } else {
    price = 9.95;
    }

    // Package B
    } else if (package == "B") {
    if (hrs > 20) {
    price = 14.95 + (hrs - 20)*1;
    } else {
    price = 14.95;
    }

    // Package C
    } else {
    price = 19.95;
    }

    
    //Display the outputs
    
        } else {
        cout << "Invalid number"; 
        }
        } else {
        cout << "Invalid package number";
        }
        cout << "Bill = $"<<setw(6)<< price;

   
    
            break;}
            case 6:{
                
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
    }                                                                          //Player 2 wins
    else if (player2=='P'||player2=='p'){
        if (player1=='S'||player1=='s')cout<<"Scissors cuts paper."; //Player 2 wins 
        else if (player1=='R'||player1== 'r')cout<<"Paper covers rock.";
    }
    else if (player2=='S'||player2=='s'){
        if (player1=='P'||player1=='p')cout<<"Scissors cuts paper.";
        else if (player1=='R'||player1== 'r')cout<<"Rock breaks scissors.";
    }
    else {
        cout<<"Nobody Wins"<<endl;
    } 
    }
               
            break;}
            case 7:{
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
    
            break;}
            case 8:{
            
    //Declare Variables
    
    string sign1,
           sign2;
    
    //Initialize or input i.e. set variable values
    
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cin>>sign1;
    cin>>sign2;

    //Map inputs -> outputs
    
    if (sign1 == "Taurus" || sign1 == "Virgo" || sign1 == "Capricorn")
    {
        if(sign2 == "Taurus" || sign2 == "Virgo" || sign2 == "Capricorn")
        cout<<sign1<<" and "<<sign2<<" are compatible Earth signs.";
        else
        cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
    }else if (sign1 == "Aries" || sign1 == "Leo" || sign1 == "Sagittarius")
    {
        if(sign2 == "Aries" || sign2 == "Leo" || sign2 == "Sagittarius")
        cout<<sign1<<" and "<<sign2<<" are compatible fire signs.";
        else
        cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
    }else if (sign1 == "Aries" || sign1 == "Libra" || sign1 == "Aquarius")
    {
        if(sign2 == "Aries" || sign2 == "Libra" || sign2 == "Aquarius")
        cout<<sign1<<" and "<<sign2<<" are compatible Air signs.";
        else
        cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
    }else if (sign1 == "Cancer" || sign1 == "Scorpio" || sign1== "Pisces")
    {
        if (sign2 == "Cancer" || sign2 == "Scorpio" || sign2== "Pisces")
        cout<<sign1<<" and "<<sign2<<" are compatible Water signs.";
        else
        cout<<sign1<<" and "<<sign2<<" are compatible Air signs.";
    }
       
                
   
            break;}
            case 9:cout<<"Place Problem here"<<endl;break;
            case 10:cout<<"Place Problem here"<<endl;break;
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=0 && choose<=9);

    return 0;
}
