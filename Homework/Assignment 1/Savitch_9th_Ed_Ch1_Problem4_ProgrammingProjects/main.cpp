/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Mahir Rahman
 * Created on March 3, 2018, 4:43 PM
 * Purpose: Distance in free fall
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
    float t,// Time
          a,// Acceleration
          d;// Distance
            
    //Initial Variables
    a=32; // Feet per Second
    
    //Prompt to declare how long object fell
    cout<<"Enter the amount of time in Seconds the object fell in seconds"<<endl;
    cin>>t;
        
    //Map/Process Inputs to Outputs
    d=(a*(t*t))/2;
            
    //Display Outputs
    cout<<"The Distance the object fell is "<<d<<" feet"<<endl;
    //Exit program!
    return 0;
}

