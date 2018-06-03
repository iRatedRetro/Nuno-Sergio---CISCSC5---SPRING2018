/* 
 * File:   main.cpp
 * Author: Sergio Nuno
 * Created on May 26, 2018, 9:30 PM
 * Purpose:  Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
using namespace std;
//Function Prototypes
int main(int argc, char** argv) {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    //Declare variables
    bool play = true, bust = false;
    float wRatio = 0.0f;
    int deck[13][4] = {{0}};
    int hands[1000] = {0};
    int round = 0, wins = 0, losses = 0;
    vector<string> pHand;
    vector<string> dHand;
    const string suits[] = {"Spades", "Hearts", "Diamonds", "Clubs"};
    const string faces[] = {"2", "3", "4", "5", "6", "7", "8", "9"
            , "10", "J", "Q", "K", "A"};
    
    return 0;
}