/* 
 * File:   main.cpp
 * Author: Sergio Nuno
 * Created on April 14, 2018, 12:20 PM
 * Purpose:  CPP Template
 *           To be copied for each project
 */
//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
#include <cstdlib>  //Rand/Srand
#include <ctime>    //Time
#include <fstream>  //File i/o
using namespace std;//namespace I/O stream library created

//User Libraries


//Global Constants


//Math, Physics, Science, Conversions, 2-D Array Columns


//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Seed the random number function
    srand(static_cast<unsigned int>(time(0)));
    
    
    //Declare Variables
    int games,//Number of games being played
        numPlay,//Number of Players
        winner=0,//Winner of the game
        loser=0,//Who lost the game
        numLife;//Number of lives/person
    int die1,die2,sum1,sum2,sum3,sum4,sum5,sum6,sum7,sum8,sum9; 
    int p1,p2,p3,p4,p5,p6,p7,p8,p9;//players in the game
    int lives1=6,
        lives2=6,
        lives3=6,
        lives4=6,
        lives5=6,
        lives6=6,
        lives7=6,
        lives8=6,
        lives9=6;
    
    cout<<"How many players are there from 2 to 9?\n";
    cin>>numPlay;
    
    do{
        if(numPlay==2){
            int die1={rand()%6+1};  //[1,6]
             int die2={rand()%6+1};  //[1,6]
             int sum1=die1+die2;
             p1=sum1;{
             int die1={rand()%6+1};  //[1,6]
             int die2={rand()%6+1};  //[1,6]
             int sum2=die1+die2;
             p2=sum2;}
                      }
    if(p1>p2){
        lives2--;
    }else{
        lives1--;
             }
    }while(lives1<=0 || lives2<=0);
    
    
    //Initialize
    
    
    //Initial Variables
    
    
    //Map/Process Input to Outputs

    
    //Display outputs
    if(numPlay==2){
    cout<<lives2<<lives1<<endl;
    }
    
    //Exit program!
    return 0;
}