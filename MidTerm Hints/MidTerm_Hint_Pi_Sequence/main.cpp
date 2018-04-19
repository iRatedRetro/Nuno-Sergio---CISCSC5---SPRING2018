/* 
 * File:   main.cpp
 * Author: Sergio Nuno
 * Created on April 19th, 2018, 11:00 AM
 * Purpose:  CPP Template
 *           To be copied for each project
 */
//System Libraries
#include <iostream>//I/O Library -> cout,endl
#include <cmath>
using namespace std;//namespace I/O stream library created

//User Libraries


//Global Constants


//Math, Physics, Science, Conversions, 2-D Array Columns


//Function Prototypes
const float PI=4*atan(1);//Definition of Pi

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float apprxPI;//Approximate value of Pi given # terms in sequences
    int nTerms;   //Number of terms used in sequence
    
    //Initial Variables
    apprxPI=0;
    nTerms=10000;
    
    //Map/Process Input to Outputs
    for(int sign=-1,term=1,cntr=1;term<=nTerms;term++,cntr+=2){
        sign*=-1;//Flip the sign
        apprxPI+=(static_cast<float>(sign)/cntr);//atan(1)
    }
    apprxPI*=4;//Approximates PI
    
    //Display outputs
    cout<<"After "<<nTerms<<" the Approximate value of Pi = "<<apprxPI<<endl;
    cout<<"Pi = "<<PI<<endl;
    cout<<"The difference = "<<(PI-apprxPI)/PI*100<<"%"<<endl;
    
    //Exit program!
    return 0;
}