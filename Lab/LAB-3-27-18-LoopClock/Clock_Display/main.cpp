/* 
 * File:   main.cpp
 * Author: Sergio Nuno
 * Created on March 27, 2018, 11:40 AM
 * Purpose:  Time
 */

//System Libraries Here
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    ofstream out;
    
    //Input or initialize values Here
    out.open("Clock.out");
    
    //Process/Calculations Here
    for(char ampm='0';ampm<='1';ampm++){
        for(int hours=0;hours<=12;hours++){
            for(char mins10='0';mins10<='5';mins10++){
                for(char mins='0';mins<='9';mins++){
                    for(char sec10='0';sec10<='5';sec10++){
                        for(char sec='0';sec<='9';sec++){
                            if(ampm=='1'&&hours==12){
                                out<<"00:00:00 AM"<<endl;
                                exit(EXIT_SUCCESS);
                            }
                            if(hours<10)out<<'0'<<hours<<':'
                                    <<mins10<<mins<<':'
                                    <<sec10<<sec
                                    <<" "<<(ampm=='0'&&hours<12?"AM":"PM")<<endl;
                            else out<<hours<<':'
                                    <<mins10<<mins<<':'
                                    <<sec10<<sec
                                    <<" "<<(ampm=='0'&&hours<12?"AM":"PM")<<endl;
                        }
                    }
                }
            }
        }
    }
    //Output Located Here
    
    //close file
    out.close();

    //Exit
    return 0;
}

