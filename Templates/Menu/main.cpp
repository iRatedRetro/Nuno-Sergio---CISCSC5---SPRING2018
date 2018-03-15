/* 
 * File:   main.cpp
 * Author: Sergio Nuno
 * Created on March 14, 2018, 10:41 AM
 * Purpose:  Menu with construct
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
    char choice;
    //Initial Variables
    cout<<"Choose from the following menu"<<endl;
    cout<<"Type 1 for Independent-If example"<<endl;
    cout<<"Type 2 for Dependent-If example"<<endl;
    cout<<"Type 3 for Ternary Op example"<<endl;
    cout<<"Type 4 for Switch-Case example"<<endl;
    cin>>choice;
    
    //Map/Process Input to Outputs
    if(choice>='1'&&choice<='4'){
           switch(choice){
                   case '1':{
                cout<<"Independent-If Example"<<endl;
                break;
            }
            case '2':{
                cout<<"Dependent-If Example"<<endl;
                break;
            }
            case '3':{
                cout<<"Ternary Op Example"<<endl;
                break;
            }
            case '4':{
                cout<<"Switch-Case Example"<<endl;
                break;
                   }
                }
    }else{
        cout<<"Exiting Menu"<<endl;
}

    //Display outputs
    
            
    //Exit program!
    return 0;
}