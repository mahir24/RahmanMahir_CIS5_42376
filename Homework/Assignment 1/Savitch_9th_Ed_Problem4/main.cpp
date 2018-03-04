/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Mahir Rahman
 * Created on February 28, 2018, 8:55 PM
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
    int number_of_pods, peas_per_pod, total_peas;
    
    //Initial Variables
    
    //Map/Process Inputs to Outputs
     
     
    //Display Outputs
    cout<<"Press return after entering a number. \n";
    cout<<"Enter the number of pods:\n";
    
    cin>>number_of_pods;
    
    cout<<"Enter the number of peas in a pod:\n";
    cin>> peas_per_pod;
    total_peas = number_of_pods+peas_per_pod;
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" pea pods \n";
    cout<<"and ";
    cout<<peas_per_pod;
    cout<<" peas in each pod, then\n";
    cout<<"you have ";
    cout<<total_peas;
    cout<<" peas in all the pods. \n";
    
    //Exit program!
    return 0;
}

