/* 
 * File:   main.cpp
 * Author: Sergio Nuno
 * Created on April 14, 2018, 12:20 PM
 * Purpose:  Project 1 Mexico dice game
 */
//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
#include <cstdlib>  //Rand/Srand
#include <ctime>    //Time
#include <fstream>  //File i/o
#include <string>   //Strings
#include <cmath>    //Math library
using namespace std;//namespace I/O stream library created
//User Libraries
//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) {
    //Seed the random number function
    srand(static_cast<unsigned int>(time(0)));
    ifstream in;               //Input File
    ofstream out;              //Output File
    
    //Declare Variables
    char players;
    //Display Player count
    string prompt("How many players are there from 2 to 6?  ");
    cout<<prompt;
        
        cin>>players;

        //Process/Map inputs to outputs
if(players>='2'&&players<='6'){
    switch(players){
    case '2':{
            int numPlay=2;//Number of Players
            int die1,die2,sum1,sum2;
            int p1,p2;
            float lives1=6,//Number of lives/person
                  lives2=6;
            //Dice roll per player
            while(lives1>0 && lives2>0){
                int die1={rand()%6+1};  //[1,6]
                int die2={rand()%6+1};  //[1,6]
                int sum1=die1+die2;
                p1=sum1;
                die1={rand()%6+1};  //[1,6]
                die2={rand()%6+1};  //[1,6]
                int sum2=die1+die2;
                p2=sum2;
            //Determines who loses a life.
            bool p1Wins = p1>p2;
                if(p1Wins){
                    lives2--;
                }else{
                    lives1--;
                }
            }
            //Outputs who loses and is eliminated
            int loser = (lives1>lives2)? lives1:lives2;
            if(loser){
            cout<<"Player 2 Loses"<<endl;
            }else{
            cout<<"Player 1 Loses"<<endl;
            }
            //Output of how many lives each player has left    
            cout<<"Player One has "<<lives1<<" lives left.\n"<<"Player Two "
                    "has "<<lives2<<" lives left.\n"<<endl;
            break;
    }
    //01234567890123456789012345678901234567890123456789012345678901234567890123
    //1                            Three Players                               4
    //2                                                                        5
    //34567890123456789012345678901234567890123456789012345678901234567890123456
    case '3':{
            int numPlay=3;//Number of Players
            int die1,die2,sum1,sum2,sum3; 
            int p1,p2,p3;//players in the game
            float lives1=6,//Number of lives/person
                  lives2=6,
                  lives3=6;
            //Dice roll per player
            for(;lives1>0 && lives2>0 && lives3>0;){
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
            //Determines who loses a life.
            if(p2>p1 && p3>p1)
                lives1--;
            if(p1>p2 && p3>p2)
                lives2--;
            if(p2>p3 && p1>p3)
                lives3--;
        
        }
            //Outputs who loses and is eliminated
            if(lives1>lives2 && lives3>lives2){
                cout<<"Player 2 Loses"<<endl;
            }
            if(lives2>lives1 && lives3>lives1){
                cout<<"Player 1 Loses"<<endl;
            }
            if(lives1>lives3 && lives2>lives3){
                cout<<"Player 3 Loses"<<endl;
            }
            //Output of how many lives each player has left
                cout<<"Player One has "<<lives1<<" lives left.\n"<<"Player Two "
                    "has "<<lives2<<" lives left.\n"<<"Player Three has "
                          <<lives3<<" lives left.\n"<<endl;
    break;
    }
    //01234567890123456789012345678901234567890123456789012345678901234567890123
    //1                            Four Players                                4
    //2                                                                        5
    //34567890123456789012345678901234567890123456789012345678901234567890123456
    case '4':{
            int numPlay=4;//Number of Players
            int die1,die2,sum1,sum2,sum3,sum4; 
            int p1,p2,p3,p4;//players in the game
            float lives1=6,//Number of lives/person
                  lives2=6,
                  lives3=6,
                  lives4=6;
            //Dice roll per player
            do{
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
            //Determines who loses a life.
            if(p2>p1 && p3>p1 && p4>p1)
                lives1--;
            if(p1>p2 && p3>p2 && p4>p2)
                lives2--;
            if(p2>p3 && p1>p3 && p4>p3)
                lives3--;
            if(p1>p4 && p2>p4 && p3>p4)
                lives4--;
        }while(lives1>0 && lives2>0 && lives3>0 && lives4>0);
            //Outputs who loses and is eliminated
            if(lives2>lives1 && lives3>lives1 && lives4>lives1){
                cout<<"Player 1 Loses"<<endl;
            }
            if(lives1>lives2 && lives3>lives2 && lives4>lives2){
                cout<<"Player 2 Loses"<<endl;
            }
            if(lives1>lives3 && lives2>lives3 && lives4>lives3){
                cout<<"Player 3 Loses"<<endl;
            }
            if(lives1>lives4 && lives2>lives4 && lives3>lives4){
                cout<<"Player 4 Loses"<<endl;
            }
            //Output of how many lives each player has left
                cout<<"Player One has "<<lives1<<" lives left.\n"<<"Player Two "
                    "has "<<lives2<<" lives left.\n"<<"Player Three has "
                          <<lives3<<" lives left.\n"<<"Player Four has "
                          <<lives4<<" lives left.\n"<<endl;
    break;
    }
    //01234567890123456789012345678901234567890123456789012345678901234567890123
    //1                            Five Players                                4
    //2                                                                        5
    //34567890123456789012345678901234567890123456789012345678901234567890123456
    case '5':{
            int numPlay=5;//Number of Players
            int die1,die2,sum1,sum2,sum3,sum4,sum5; 
            int p1,p2,p3,p4,p5;//players in the game
            float lives1=6,//Number of lives/person
                  lives2=6,
                  lives3=6,
                  lives4=6,
                  lives5=6;
            //Dice roll per player
            do{
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
            //Determines who loses a life.
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
            //Outputs who loses and is eliminated
            if(lives2>lives1 && lives3>lives1 && lives4>lives1
                    && lives5>lives1){
                cout<<"Player 1 Loses"<<endl;
            }
            if(lives1>lives2 && lives3>lives2 && lives4>lives2
                    && lives5>lives2){
                cout<<"Player 2 Loses"<<endl;
            }
            if(lives1>lives3 && lives2>lives3 && lives4>lives3
                    && lives5>lives3){
                cout<<"Player 3 Loses"<<endl;
            }
            if(lives1>lives4 && lives2>lives4 && lives3>lives4
                    && lives5>lives4){
                cout<<"Player 4 Loses"<<endl;
            }
            if(lives1>lives5 && lives2>lives5 && lives3>lives5
                    && lives4>lives5){
                cout<<"Player 5 Loses"<<endl;
            }
            //Output of how many lives each player has left
            cout<<"Player One has "<<lives1<<" lives left.\n"<<"Player Two "
                  "has "<<lives2<<" lives left.\n"<<"Player Three has "
                        <<lives3<<" lives left.\n"<<"Player Four has "
                        <<lives4<<" lives left.\n"<<"Player Five has "
                        <<lives5<<" lives left.\n"<<endl;  
    break;
    }
    //01234567890123456789012345678901234567890123456789012345678901234567890123
    //1                             Six Players                                4
    //2                                                                        5
    //34567890123456789012345678901234567890123456789012345678901234567890123456
            case '6':{
            int numPlay=6;//Number of Players
            int die1,die2,sum1,sum2,sum3,sum4,sum5,sum6; 
            int p1,p2,p3,p4,p5,p6;//players in the game
            float lives1=6,//Number of lives/person
                  lives2=6,
                  lives3=6,
                  lives4=6,
                  lives5=6,
                  lives6=6;
            //Dice roll per player
            do{
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
            //Determines who loses a life.
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
                lives6--;
        }while(lives1>0 && lives2>0 && lives3>0 && lives4>0 && lives5>0 
            && lives6>0);
            //Outputs who loses and is eliminated
            if(lives2>lives1 && lives3>lives1 && lives4>lives1 
                    && lives5>lives1 && lives6>lives1){
                cout<<"Player 1 Loses"<<endl;
            }
            if(lives1>lives2 && lives3>lives2 && lives4>lives2
                    && lives5>lives2 && lives6>lives2){
                cout<<"Player 2 Loses"<<endl;
            }
            if(lives1>lives3 && lives2>lives3 && lives4>lives3
                    && lives5>lives3 && lives6>lives3){
                cout<<"Player 3 Loses"<<endl;
            }
            if(lives1>lives4 && lives2>lives4 && lives3>lives4
                    && lives5>lives4 && lives6>lives4){
                cout<<"Player 4 Loses"<<endl;
            }
            if(lives1>lives5 && lives2>lives5 && lives3>lives5
                    && lives4>lives5 && lives6>lives5){
                cout<<"Player 5 Loses"<<endl;
            }
            if(lives1>lives6 && lives2>lives6 && lives3>lives6
                    && lives4>lives6 && lives5>lives6){
                cout<<"Player 6 Loses"<<endl;
            }
            //Output of how many lives each player has left
                cout<<"Player One has "<<lives1<<" lives left.\n"<<"Player Two "
                    "has "<<lives2<<" lives left.\n"<<"Player Three has "
                        <<lives3<<" lives left.\n"<<"Player Four has "
                        <<lives4<<" lives left.\n"<<"Player Five has "
                        <<lives5<<" lives left.\n"<<"Player Six has "
                        <<lives6<<" lives left.\n"<<endl;
            
    break;
    }
}
        }else{
        cout<<"Exiting Menu"<<endl;
    }
    //Close Files 
    in.close();
    out.close();
    return 0;
}
    //Math library,nesting,decrement.