#include <iostream>
#include <string>
#include <cstdlib>  
#include <ctime>  

using namespace std;


int main() {

    srand(static_cast<unsigned int>(time(0)));

    // player 1's choice
    string player1Choice;
    cout << "player 1- enter your choice (rock, paper, or scissors): ";
    cin >> player1Choice;



    // randomly generate player 2's choice
    string choices[3] = { "rock", "paper", "scissors" };
    string player2Choice = choices[rand() % 3];


    cout << "player 2 has made their choice." << endl;


    // output choices
    cout << "Player 1 chose: " << player1Choice << endl;
    cout << "Player 2 chose: " << player2Choice << endl;



    // determining winner
    if (player1Choice == player2Choice) {
        cout << "It's a TIE!" << endl;
    }
    else if ((player1Choice == "rock" && player2Choice == "scissors") ||
        (player1Choice == "paper" && player2Choice == "rock") ||
        (player1Choice == "scissors" && player2Choice == "paper")) {
        cout << "Player 1 wins!" << endl;
    }
    else {
        cout << "Player 2 wins!" << endl;
    }

    return 0;

}
