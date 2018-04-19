/* 
 * File:   main.cpp
 * Author: Sergio Nuno
 * Created on March 15, 2018, 11:00 AM
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
    int n,fctr1;
    
    //Initial Variables
    fctr1=1;
    n=6;
    //Map/Process Input to Outputs
    for(int i=1;i<=n;i++){
        fctr1*=i;
    }
    
    //Display outputs
    cout<<n<<"! = "<<fctr1<<endl;
    
    //Exit program!
    return 0;
}