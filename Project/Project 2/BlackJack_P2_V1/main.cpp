/* 
 * File:   main.cpp
 * Author: Sergio Nuno
 * Created on May 27, 2018, 1:30 PM
 * Purpose: BlackJack
 */

//System Libraries
#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <iomanip>
using namespace std;
//Function Prototypes
string getCard(const string suits[], const string faces[], int deck[13][4]);
int main(int argc, char** argv) {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Game variables
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

    // Loop while the player chooses to play again
    while (play){
        // Deal players hand
        pHand.push_back(getCard(suits, faces, deck)); 
        pHand.push_back(getCard(suits, faces, deck)); 

        // Deal dealers hand
        dHand.push_back(getCard(suits, faces, deck));
        dHand.push_back(getCard(suits, faces, deck));

    }
    return 0;
}
// Get a card and return it's string representation
string getCard(const string suits[], const string faces[], int deck[13][4]){
    // Define and value initialize suit and face here
    // so that they may be used outside of the do - while loop
    int suit {};
    int face {};

    // Loop and generate an index
    // until we get one that has not been drawn
    do{
        suit = rand() % 4;
        face = rand() % 13;
    } while (deck[face][suit]);

    // Set this index to 1
    // to signal that it has been drawn
    deck[face][suit] = 1;

    return faces[face] + " of " + suits[suit];
}
