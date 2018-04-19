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
#include <cstdlib>
#include <ctime>
using namespace std;//namespace I/O stream library created

//User Libraries


//Global Constants


//Math, Physics, Science, Conversions, 2-D Array Columns


//Function Prototypes
const float PI=4*atan(1);//Definition of Pi
const float MXRND=pow(2,31)-1;//2^32-1

//Execution Begins Here!
int main(int argc, char** argv) {
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    float apprxPI;//Approximate value of Pi given # terms in sequences
    int nDarts;   //Number of Darts in our dart game
    int inCrcl;   //Number of darts in the circle
    
    //Initial Variables
    inCrcl = 0;
    nDarts=10000;
    
    //Map/Process Input to Outputs
    for(int dart=1;dart<=nDarts;dart++){
        float x=rand()/MXRND;
        float y=rand()/MXRND;
        if(x*x+y*y<=1)inCrcl++;
    }
    apprxPI=4.0f*inCrcl/nDarts;//Approximates PI
    
    //Display outputs
    cout<<"After "<<nDarts
            <<" the Approximate value of Pi = "<<apprxPI<<endl;
    cout<<"Pi = "<<PI<<endl;
    cout<<"The difference = "<<(PI-apprxPI)/PI*100<<"%"<<endl;
    
    //Exit program!
    return 0;
}