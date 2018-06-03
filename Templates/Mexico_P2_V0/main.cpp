/* 
 * File:   main.cpp
 * Author: Sergio Nuno
 * Created on DATE AND TIME HERE
 * Purpose:  ISP charges
 */

//System Libraries Here
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
#include <cstdlib>  //Rand/Srand
#include <ctime>    //Time
#include <fstream>  //File i/o
#include <string>   //Strings
#include <cmath>    //Math library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
char rolldie(int);
void mexico(int,int,int,int,int,string);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare file and game variables
    ifstream in;               //Input File
    ofstream out;              //Output File
    int size;//Number of players
    char playerN[size];//Players names
    int lives[5];//Number of lives
    int numOfR;//Number of rounds
    int dice[1];//Die that is rolled
    int winner,loser;
    
    //Initial Variables
    
    cout<<"Enter the number of  players: "<<endl;
    cin>>size;
    
    for(int i=0;i<size;i++){
        cout<<"Enter Player "<<i+1<<"'s name: "<<endl;
        cin>>playerN[i];
    }
    
    cout<<"Enter the number of rounds: "<<endl;
    cin>>numOfR;
    
    //Map/Process Input to Outputs

    
    //Display outputs
    
    
    
    //Close files
    in.close();
    out.close();
    
    //Exit program!
    return 0;
}
char rolldie(int face){
    char die1=rand()%face+1;//[1,6]
    char die2=rand()%face+1;//[1,6]
    char sum1=die1+die2;
    return sum1;
}
void mexico(int winner, int loser,int size, int numOfR, int lives[5], string playerN[]){
    for(int game=1;game<=numOfR;game++){
        //Throw dice and sum, keep track of number of throws in a game
        char sum1=rolldie(6);
        for(int i=0;i<size;i++){
            playerN[i]=sum1;
            cout<<playerN[i];
        }
        
        
            }
        }
            
        