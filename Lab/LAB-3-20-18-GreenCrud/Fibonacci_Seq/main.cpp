/* 
 * File:   main.cpp
 * Author: Sergio Nuno
 * Created on March 20, 2018, 11:48 AM
 * Purpose:  Fibonacci
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
    int fn,fnm1,fnm2;
    
    //Initial Variables
    fnm2=1;
    fnm1=1;
    
    //Printout the first 2 in the sequence
    cout<<"Fibonacci Sequence"<<endl;
    cout<<"{"<<fnm2<<","<<fnm1;
    
    //Map/Process Input to Outputs



    //Calculate 3rd element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn;

    
    //Calculate 4rd element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn;
    
    //Calculate 5rd element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn;
    
    //Calculate 6rd element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn;
    
    //Calculate 7rd element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn;
    
    //Calculate 8rd element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn;
    
    //Calculate 9rd element in sequence
    fn=fnm1+fnm2;
    fnm2=fnm1;
    fnm1=fn;
    cout<<","<<fn<<"}"<<endl;
    
    //Display outputs
    
    //Exit program!
    return 0;
}