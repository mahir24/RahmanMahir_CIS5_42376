/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Mahir Rahman
 * Created on March 3, 2018, 3:00 PM
 * Purpose: Program to output coin value
 */
//System Libraries
#include <iostream> //I/O Library -> cout, endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float p,// Penny
          n,// Nickel
          d,// Dime
          q,// Quarter
          total,// Total
          w, //Amount of Pennies
          x, // Amount of Nickels
          y, // Amount of Dimes
          z; // Amount of Quarters
         
         
    //Initialize Variables
    p=.01f;
    n=.05f;
    d=.10f;
    q=.25f;
    
    //Prompt to declare how much of each coin 
    cout<<"Enter how many pennies you have"<<endl;
    cin>>w;
    cout<<"Enter how many nickels you have"<<endl;
    cin>>x;
    cout<<"Enter how many dimes you have"<<endl;
    cin>>y;
    cout<<"Enter how many quarters you have"<<endl;
    cin>>z;
            
    
    //Map/Process Inputs to Outputs
    total= (p*w)+(n*x)+(d*y)+(q*z);
    //Display Outputs
    cout<<"The total amount of change you have is worth: "<<"$"<<total<<endl;
    
    //Exit program!
    return 0;
}

