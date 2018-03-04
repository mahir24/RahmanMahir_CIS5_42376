/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Mahir Rahman
 * Created on February 28, 2018, 8:56 PM
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
    int w,// Width in Inches
        h,// Height in Height
        a;// Total length of fence you would need to enclose a rectangular area in Inches Squared
    
    //Initial Variables
    
    //Map/Process Inputs to Outputs
     
     
    //Display Outputs
    cout<<"Press return after entering a number. \n";
    cout<<"Enter the Height:\n";
    
    cin>>h;
    
    cout<<"Enter the Width:\n";
    cin>> w;
    
    a = h+w;
    
    cout<<"If the height of the fence is ";
    cout<<h;
    cout<<" ft. tall \n";
    cout<<"and ";
    cout<<"the width of the fence is ";
    cout<<w;
    cout<<" ft. wide, then\n";
    cout<<a;
    cout<<" ft. is the total length of fence you would need to enclose a rectangular area. \n";
    
    //Exit program!
    return 0;
}

