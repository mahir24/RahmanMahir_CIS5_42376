/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Mahir Rahman
 * Created on February 27, 2018,
 * Purpose: Chapter 1 Practice Problem 1
 *          
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
    float x, // X Value
          y, // Y Value
          s, // Sum
          p; // Product
    
    //Initial Variables
    
    //Map/Process Inputs to Outputs
     
     
    //Prompts for X and Y
    cout<<"Press return after entering a number. \n";
    cout<<"Enter the number for X:\n";
    cin>>x;
    cout<<"Enter the number for Y:\n";
    cin>> y;

    //Map/Process Inputs to Outputs
    p = x*y;
    s = x+y;
            
    //Display Outputs
    cout<<"The product of X & Y is "<<p<<endl;
    cout<<"The sum of X & Y is "<<s<<endl;
    
    //Exit program!
    return 0;
}

