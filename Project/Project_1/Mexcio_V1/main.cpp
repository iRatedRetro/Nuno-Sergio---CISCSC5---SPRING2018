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
    int numPlay,//Number of Players
        winner,//Winner of the game
        loser;//Who lost the game
    int die1,die2,sum1,sum2,sum3,sum4,sum5,sum6,sum7,sum8,sum9; 
    int p1,p2,p3,p4,p5,p6,p7,p8,p9;//players in the game
    int lives1=6,//Number of lives/person
        lives2=6,
        lives3=6,
        lives4=6,
        lives5=6,
        lives6=6,
        lives7=6,
        lives8=6,
        lives9=6;
    
    cout<<"How many players are there from 2 to 6?\n";
    cin>>numPlay;
    
    do{
        if(numPlay==2){
             int die1={rand()%6+1};  //[1,6]
             int die2={rand()%6+1};  //[1,6]
             int sum1=die1+die2;
             p1=sum1;
             die1={rand()%6+1};  //[1,6]
             die2={rand()%6+1};  //[1,6]
             int sum2=die1+die2;
             p2=sum2;
        }
        
        if(p1>p2){
            lives2--;
        }else{
            lives1--;
        }
    }while(lives1>0 && lives2>0);
    
    
    do{
        if(numPlay==3){
             die1={rand()%6+1};  //[1,6]
             die2={rand()%6+1};  //[1,6]
             int sum1=die1+die2;
             p1=sum1;
             die1={rand()%6+1};  //[1,6]
             die2={rand()%6+1};  //[1,6]
             int sum2=die1+die2;
             p2=sum2;
             die1={rand()%6+1};  //[1,6]
             die2={rand()%6+1};  //[1,6]
             int sum3=die1+die2;
             p3=sum3;
        }
        
        if(p2>p1 && p3>p1)
            lives1--;
        if(p1>p2 && p3>p2)
            lives2--;
        if(p2>p3 && p1>p3)
            lives3--;
        
    }while(lives1>0 && lives2>0 && lives3>0);
    
    
    do{
        if(numPlay==4){
             die1={rand()%6+1};  //[1,6]
             die2={rand()%6+1};  //[1,6]
             int sum1=die1+die2;
             p1=sum1;
             die1={rand()%6+1};  //[1,6]
             die2={rand()%6+1};  //[1,6]
             int sum2=die1+die2;
             p2=sum2;
             die1={rand()%6+1};  //[1,6]
             die2={rand()%6+1};  //[1,6]
             int sum3=die1+die2;
             p3=sum3;
             die1={rand()%6+1};  //[1,6]
             die2={rand()%6+1};  //[1,6]
             int sum4=die1+die2;
             p4=sum4;
        }
        
        if(p2>p1 && p3>p1 && p4>p1)
            lives1--;
        if(p1>p2 && p3>p2 && p4>p2)
            lives2--;
        if(p2>p3 && p1>p3 && p4>p3)
            lives3--;
        if(p1>p4 && p2>p4 && p3>p4)
            lives4--;
    }while(lives1>0 && lives2>0 && lives3>0 && lives4>0);
    
    
    do{
        if(numPlay==5){
             die1={rand()%6+1};  //[1,6]
             die2={rand()%6+1};  //[1,6]
             int sum1=die1+die2;
             p1=sum1;
             die1={rand()%6+1};  //[1,6]
             die2={rand()%6+1};  //[1,6]
             int sum2=die1+die2;
             p2=sum2;
             die1={rand()%6+1};  //[1,6]
             die2={rand()%6+1};  //[1,6]
             int sum3=die1+die2;
             p3=sum3;
             die1={rand()%6+1};  //[1,6]
             die2={rand()%6+1};  //[1,6]
             int sum4=die1+die2;
             p4=sum4;
             die1={rand()%6+1};  //[1,6]
             die2={rand()%6+1};  //[1,6]
             int sum5=die1+die2;
             p5=sum5;
        }
        
        if(p2>p1 && p3>p1 && p4>p1 && p5>p1)
            lives1--;
        if(p1>p2 && p3>p2 && p4>p2 && p5>p2)
            lives2--;
        if(p2>p3 && p1>p3 && p4>p3 && p5>p3)
            lives3--;
        if(p1>p4 && p2>p4 && p3>p4 && p5>p4)
            lives4--;
        if(p1>p5 && p2>p5 && p3>p5 && p4>p5)
            lives5--;
    }while(lives1>0 && lives2>0 && lives3>0 && lives4>0 && lives5>0);
    
    
    do{
        if(numPlay==6){
             die1={rand()%6+1};  //[1,6]
             die2={rand()%6+1};  //[1,6]
             int sum1=die1+die2;
             p1=sum1;
             die1={rand()%6+1};  //[1,6]
             die2={rand()%6+1};  //[1,6]
             int sum2=die1+die2;
             p2=sum2;
             die1={rand()%6+1};  //[1,6]
             die2={rand()%6+1};  //[1,6]
             int sum3=die1+die2;
             p3=sum3;
             die1={rand()%6+1};  //[1,6]
             die2={rand()%6+1};  //[1,6]
             int sum4=die1+die2;
             p4=sum4;
             die1={rand()%6+1};  //[1,6]
             die2={rand()%6+1};  //[1,6]
             int sum5=die1+die2;
             p5=sum5;
             die1={rand()%6+1};  //[1,6]
             die2={rand()%6+1};  //[1,6]
             int sum6=die1+die2;
             p6=sum6;
        }
        
        if(p2>p1 && p3>p1 && p4>p1 && p5>p1 && p6>p1)
            lives1--;
        if(p1>p2 && p3>p2 && p4>p2 && p5>p2&& p6>p2)
            lives2--;
        if(p2>p3 && p1>p3 && p4>p3 && p5>p3 && p6>p3)
            lives3--;
        if(p1>p4 && p2>p4 && p3>p4 && p5>p4 && p6>p4)
            lives4--;
        if(p1>p5 && p2>p5 && p3>p5 && p4>p5 && p6>p5)
            lives5--;
        if(p1>p6 && p2>p6 && p3>p6 && p4>p6 && p5>p6)
            lives5--;
    }while(lives1>0 && lives2>0 && lives3>0 && lives4>0 && lives5>0 
            && lives6>0);
    
    
    
    //Initialize
    
    
    //Initial Variables
    
    
    //Map/Process Input to Outputs

    
    //Display outputs
    if(numPlay==2){
    cout<<lives2<<lives1<<endl;
    }
    if(numPlay==3){
    cout<<lives1<<lives2<<lives3<<endl;
    }
    if(numPlay==4){
    cout<<lives1<<lives2<<lives3<<lives4<<endl;
    }
    if(numPlay==5){
    cout<<lives1<<lives2<<lives3<<lives4<<lives5<<endl;
    }
    if(numPlay==6){
    cout<<lives1<<lives2<<lives3<<lives4<<lives5<<lives6<<endl;
    }
    //Exit program!
    return 0;
}