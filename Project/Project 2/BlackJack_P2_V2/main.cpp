/* 
 * File:   main.cpp
 * Author: Sergio Nuno
 * Created on May 30, 2018, 12:00 PM
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
int binary(int words[], int numElem, int value);
void swap(int *xp, int *yp);
void bubble(int hands[], int n);
void selSort(int arr[], int n);
string getCard(const string suits[], const string faces[], int deck[13][4]);
void print(const vector<string>& hand, bool player = true);
int value(const vector<string>& hand);
void calc(const vector<string>& hand, bool player, bool& bust);
void again(bool& play, bool& over, vector<string>& player,
        vector<string>& dealer, int deck[13][4]);
bool input();

int main(int argc, char** argv){
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

        print(pHand);
        // Loop while the player hasn't busted and they choose to hit
        while (!bust && input()){
            pHand.push_back(getCard(suits, faces, deck)); // Player draws card
            print(pHand);
			calc(pHand, true, bust); // Check for > 21
            
            if (bust)
                ++losses;
        }

        // If the player hasn't already busted
        // then the dealer attempts to beat the players hand
        // NOTE: Equal value hands are considered a loss for the player
        if (!bust){
            print(dHand, false);

            // Loop while the dealer hasn't beat the player
            while (value(dHand) < value(pHand)){
                dHand.push_back(getCard(suits, faces, deck));//Dealer draws card
                print(dHand, false); 
                calc(dHand, false, bust); // Check for > 21

                if (bust)
                    ++wins;
            }
        }

        // If no one busted, the player lost because the dealer
        // was able to get a higher value hand without busting
        if (!bust){
            cout << "\nYOU LOST WITH " << value(pHand) << " TO " 
                    << value(dHand) << endl;    
            ++losses;
        }

        // Record the players hand
        hands[round++] = value(pHand);

        // Asks the player to play again and resets game variables
        again(play, bust, pHand, dHand, deck);
    }

    // Sort array of hands
    bubble(hands, round);   // Bubble sort
    selSort(hands, round);  // Selection sort

    // Print the array of hands in sorted order
    cout << "\n\nALL YOUR HANDS THIS GAME(low to high):\n";
    for (int i = 0; i < round; ++i){
        cout << hands[i] << endl;
    }

    // Check if the player had a hand totaling 21 during the game
    // and print a message if so
    if (binary(hands, round, 21) != -1){
        cout << "\nYOU HAD A HAND TOTALING 21 THIS GAME\n" << endl;
    }
    // Calculate win ratio and store in float
    wRatio = static_cast<float>(wins) / round;
    
    // Write output file showing statistics from most recent games
    ofstream file("results.txt");
    file << "Here are the results of your most recent game of blackjack:\n";
    file << "You played " << round << " rounds.\n";
    file << "You won " << wins << " of them and lost " << losses 
            << " of them.\n";
    file << "Your overall win ratio is " << setprecision(4)
            << wRatio * 100 << " percent.";
    file.close();

    // Player chose to quit, exit() the program
    exit(0);
}

// Binary search implementation
int binary(int words[], int numElem, int value){
    int first = 0, last = numElem - 1, middle;

    while (first <= last){
        middle = (first + last) / 2;
        if (words[middle] == value){
            return middle;
        }
        else if (words[middle] > value){
            last = middle - 1;
        }
        else{
            first = middle + 1;                 
        }
    }
    return -1;  
}

// Overloaded version of swap
// that uses pointers instead
// of references
void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Overloaded version of swap
// that uses references
// instead of pointers.
void swap(int& xp, int& yp){
    int temp = xp;
    xp = yp;
    yp = temp;
}

 
// Selection sort implementation that
// calls the swap overload which takes
// pointers instead of references
void selSort(int hands[], int n){
    int i, j, min_idx;
 
    for (i = 0; i < n-1; i++){
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (hands[j] < hands[min_idx])
            min_idx = j;
        swap(&hands[min_idx], &hands[i]);
    }
}
 
// Bubble sort implementation that
// calls the swap overload which takes
// references instead of pointers
void bubble(int hands[], int n){
   int i, j;
   for (i = 0; i < n-1; i++)      
       for (j = 0; j < n-i-1; j++) 
           if (hands[j] > hands[j+1])
              swap(hands[j], hands[j+1]);
}

void again(bool& play, bool& bust, 
        vector<string>& player, vector<string>& dealer, int deck[13][4]){
    // Loop through our deck setting all cards to 0
    // to indicate that they're available
    for (int i = 0; i < 13; ++i)
        for (int j = 0; j < 4; ++j)
            deck[i][j] = 0;

    // Clear both hands
    player.clear();
    dealer.clear();

    // Reset the bust flag
    bust = false;

    cout << "PLAY AGAIN(y/n): ";
    play = input();
}
void calc(const vector<string>& hand, bool player, bool& bust){
    if (value(hand) > 21){
        // Hand is over 21, someone busted
        // so we need to set bust to true 
        // in order to skip later operations
        bust = true;
        if (player)
            cout << "\nYOU BUSTED WITH " << value(hand) << ", YOU LOSE" << endl;
        else
            cout << "\nDEALER BUSTED WITH " << value(hand)
                    << ", YOU WIN" << endl;
	}
}

// Get yes or no input from the player
bool input(){
    static char input = 0;
    do {
        cin >> input;
        // Transform input to lowercase to allow
        // 'Y' and 'N' as valid choices
    } while (input != 'y' && input != 'n'); // Loop until correct input
    return (input == 'y') ? true : false;
}
// Print the cards and total value of the hand
// Uses a bool to determine if it's the players
// hand or the dealers, and select output accordingly
void print(const vector<string>& hand, bool player){
    cout << (player ? "YOUR CARDS:" : "DEALER CARDS:") << "\n\n";
    for (unsigned i = 0; i < hand.size(); ++i)
        cout << hand[i] << endl;

    // Sum the value and print it
    cout << "\nTOTAL VALUE: " << value(hand) << endl;
    // If our hand is already over 21
    // there's no need to ask for a hit
    if (player && value(hand) < 22)
        cout << "\nHIT(y/n): ";
}

// Loop through the hand and return the sum
// of the value of the cards
int value(const vector<string>& hand){
    int value {};

    // Loop over every string in hand
    for (unsigned i = 0; i < hand.size(); ++i){
        // Branch based on the value of
        // the first character of each string
        switch (hand[i][0]){
            // Ace has value 11
            case 'A':
                value += 11;
                break;
                
            // 10, Jack, Queen, King all
            // have value of 10
            case '1':
            case 'J':
            case 'Q':
            case 'K':
                value += 10;
                break;
                
            // Otherwise, add the integral representation
            // of the character
            default:
                value += hand[i][0] - '0';
        }
    }

    return value;
}

// Get a card and return it's string representation
string getCard(const string suits[], const string faces[], int deck[13][4])
{
    // Define and value initialize suit and face here
    // so that they may be used outside of the do - while loop
    int suit {};
    int face {};

    // Loop and generate an index
    // until we get one that has not been drawn
    do{
        suit = rand()%4;
        face = rand()%13;
    } while (deck[face][suit]);
    // Set this index to 1
    // to signal that it has been drawn
    deck[face][suit] = 1;
    return faces[face] + " of " + suits[suit];
}
