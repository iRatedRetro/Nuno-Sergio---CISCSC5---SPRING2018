/* 
 * File:   main.cpp
 * Author: Sergio Nuno
 * Created on March 22, 2018, 11:00 AM
 * Purpose:  CPP Template
 *           To be copied for each project
 */
//System Libraries
#include <iostream>//I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries


//Global Constants


//Math, Physics, Science, Conversions, 2-D Array Columns


//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float x,y;
    string relate;
    //Initial Variables
    x=4;
    y=3;
    
    //Map/Process Input to Outputs
    relate=x<y?" < ":
            x>y?" > ":
                 " = ";
    
    cout<<x<<relate<<y<<endl;
   //         (x<y?" < ":
  //          (x>y?" > ":
   //              " = "))<<y<<endl;
    
    //Display outputs
    
    
    //Exit program!
    return 0;
}