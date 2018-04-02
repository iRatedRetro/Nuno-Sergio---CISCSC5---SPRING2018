/* 
 * File:   main.cpp
 * Author: Sergio Nuno
 * Created on March 14, 2018, 10:41 AM
 * Purpose:  Menu with construct
 */
//System Libraries
#include <iostream>//I/O Library -> cout,endl
#include <iomanip>  //Format
#include <cstdlib>  //Rand function
#include <ctime>    //Time to set the seed
#include <fstream>
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
    cout<<"Type 1 for Gaddis Chapter 5 Problem 22"<<endl;
    cout<<"Type 2 for Gaddis Chapter 5 Problem 3"<<endl;
    cout<<"Type 3 for Gaddis Chapter 5 Problem 4"<<endl;
    cout<<"Type 4 for Gaddis Chapter 5 Problem 5"<<endl;
    cout<<"Type 5 for Gaddis Chapter 5 Problem 6"<<endl;
    cout<<"Type 6 for Savitch Chapter 4 Problem 1"<<endl;
    cout<<"Type 7 for Savitch Chapter 4 Problem 2"<<endl;
    cout<<"Type 8 for Savitch Chapter 4 Problem 3"<<endl;
    cout<<"Type 9 for Savitch Chapter 4 Problem 7"<<endl;
    cin>>choice;
    
    //Map/Process Input to Outputs
    if(choice>='1'&&choice<='9'){
           switch(choice){
                   case '1':{
                cout<<"Gaddis Chapter 4 Problem 22"<<endl;
                {
    int a, b, c;
    cout<<"enter the number\n";
    cin>>a;
    if(a<15&&(a>0))
    {
    for(b=1;(b<=a);++b)
    {
           for(c=1;(c<=a);++c)
           {
           cout<<"x";
           }
           cout<<"\n";
    }
           }
           else
           cout<<"error\n";
   }
                
                break;
            }
            case '2':{
                cout<<"Gaddis Chapter 5 Problem 3"<<endl;
                float milliPY = 1.5f;
    float nxtYR;
    
    //Initial Variables
    for ( int i = 1; i <= 25; i +=1)
    {
        nxtYR = i * milliPY;
        cout<<"Year "<<" "<<nxtYR<<"\n";
    }
                break;
            }
            case '3':{
                cout<<"Gaddis Chapter 5 Problem 4"<<endl;
                float calBurn;
    float calPM = 3.9f;
    
    //Initial Variables
    for (int i = 10; i <= 30; i+=5)
    {
        calBurn = i * calPM;
        cout << "In " << i << "minutes you burned " <<calBurn << " calories.\n";
    }
                break;
            }
            case '4':{
                cout<<"Gaddis Chapter 5 Problem 5"<<endl;
                    float memberF = 2500.f;
    float perYR;
    
    for (int i = 1; i < 7; i++)
    {
        memberF = memberF + (memberF * .04);
        cout<<"year "<<i<< " costs: " << memberF << endl;
    }
        
                break;
                   }
            case '5':{
                cout<<"Gaddis Chapter 5 Problem 6"<<endl;
                
                float dist,time,speed;
    cout<<" What is the speed of the vehicle in mph?";
            cin>>speed;
    cout<<"How many hours has it traveled?";
            cin>>time;
    for (int i = 1; i < time+1; i++)
    {
        dist=speed*i;
        cout<<i<<"        "<<dist<< endl;
    }
                break;
                   }
            case '6':{
                cout<<"Savitch Chapter 4 Problem 1"<<endl;
                
                const float MPG = 0.264179f;
float liters = 0;
float distance = 0.0;
float mpg = 0.0;
char redo; 

{
cout << "Enter the amount of gasoline in liters: ";
cin >> liters;
cout << "\n";

cout << "Enter the number of miles traveled: ";
cin >> distance;
cout << "\n";

mpg = distance / (liters * MPG);

cout << "The gas mileage of this travel is " << mpg << endl;
}
                break;
                   }
            case '7':{
                cout<<"Savitch Chapter 4 Problem 2"<<endl;
                
                const float MPG = 0.264179f;
float liters = 0;
float distance = 0.0;
float mpg = 0.0;
float liters2 = 0;
float distance2 = 0.0;
float mpg2 = 0.0; 

{
cout << "Enter the amount of gasoline in liters for car #1: ";
cin >> liters;
cout << "\n";

cout << "Enter the number of miles traveled for car #1: ";
cin >> distance;
cout << "\n";

mpg = distance / (liters * MPG);

cout << "Enter the amount of gasoline in liters for car #2: ";
cin >> liters2;
cout << "\n";

cout << "Enter the number of miles traveled for car #2: ";
cin >> distance2;
cout << "\n";

mpg2 = distance2 / (liters2 * MPG);

cout << "The gas mileage of this travel is for #1 is " << mpg2 << "\n" << endl;
cout << "The gas mileage of this travel is for #2 is " << mpg << "\n" << endl;
}
if (mpg>mpg2)
    cout<<"Car #1 is more fuel efficient\n";
if (mpg<mpg2)
    cout<<"Car #2 is more fuel efficient";
                break;
                   }
            case '8':{
                cout<<"Savitch Chapter 4 Problem 3"<<endl;
                
                srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int dolStk, numStk, denStk;//Stock price $ num/den
    int numShrs;//Number of Shares
    float valStks;//Value of the stocks in $'s
    char again;//Continue or not

    //Initial Variables
    denStk=8;
    
    //Map/Process Inputs to Outputs
    do{
        //Randomly choose the stock price
        dolStk=rand()%1000;//[0-999]
        numStk=rand()%8;//[0-7]/8
        numShrs=rand()%90+10;//[10-99]
        
        //Calculate the stock value
        valStks=numShrs*(dolStk+static_cast<float>(numStk)/denStk);

        //Display Outputs
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The Number of shares of stock = "
                <<numShrs<<endl;
        cout<<"The value of the stock/share = $"
                <<dolStk<<" "<<numStk<<"/"<<denStk
                <<endl;
        cout<<"The total value of the stock = $"
                <<valStks<<endl;
        
        //Prompt user to see if they want to continue
        cout<<endl<<"Would you like to continue Y/N"<<endl;
        cin>>again;
    }while(again=='Y'||again=='y');
                break;
                   }
            case '9':{
                cout<<"Savitch Chapter 4 Problem 7"<<endl;
                ofstream out;
                
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