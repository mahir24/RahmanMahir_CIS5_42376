/* 
 * File:   main.cpp
 * Author: Mahir Rahman
 * Created on March 3, 2018, 3:00 PM
 * Purpose:  Creating a big C and S and !
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char x;// C
    char y;// S
    char z;// !

    //Prompt for the varialbe value
    cout<<"Type in a character to utilize to output the Big C"<<endl;
    cin>>x;
    cout<<"Type in a character to utilize to output the Big S"<<endl;
    cin>> y;
    cout<<"Type in a character to use for EXCLAMATION POINT"<<endl;
    cin>> z;
    
    //Display Outputs
    cout<<"  "<<x<<x<<x<<"          "<<y<<y<<y<<y<<"            "<<z<<z<<endl; 
    cout<<" "<<x<<"   "<<x<<"       "<<y<<"     "<<y<<"           "<<z<<z<<endl;
    cout<<x<<"           "<<y<<"                  "<<z<<z<<endl;
    cout<<x<<"            "<<y<<"                 "<<z<<z<<endl;
    cout<<x<<"              "<<y<<y<<y<<y<<"            "<<z<<z<<endl;
    cout<<x<<"                  "<<y<<"           "<<z<<z<<endl;
    cout<<x<<"                   "<<y<<"          "<<z<<z<<endl;
    cout<<" "<<x<<"   "<<x<<"       "<<y<<"     "<<y<<endl;
    cout<<"  "<<x<<x<<x<<"         "<<y<<y<<y<<y<<"             00"<<endl;
    
    cout<<"Computer Science is Cool Stuff!!!"<<endl;
    
    //Exit program!
    return 0;
}