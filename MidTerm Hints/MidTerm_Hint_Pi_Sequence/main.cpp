/* 
 * File:   main.cpp
 * Author: Sergio Nuno
 * Created on april 29th, 2018 5:40 PM
 * Purpose:  Infinite Series
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float x,fx,trm,factrl;
    int nterms;
    cout<<showpoint<<setprecision(6)<<fixed;
    
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    
    //Calculate Sequence sum here
    factrl=1;
    trm=1;
    fx=0;
    
    for(int cntr=1,sign=-1;trm<=nterms;cntr+=2,trm++){
        if(cntr==1){
        factrl*=cntr;
        }
        else{
            factrl*=cntr*(cntr-1);
        }
        sign*=-1;
        fx+=(static_cast<float>(sign)*(pow(x,cntr)))/factrl;
    }
    
    //Output the result here
    cout<<fx<<endl;
    
    //Exit
    return 0;
}