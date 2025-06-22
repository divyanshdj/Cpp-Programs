#include <iostream>
#include <random>
#include <string>
#include <ctime>

using namespace std;

// Enum for better type safety and readability
enum class Move { Rock = 1, Paper = 2, Scissors = 3 };

// Function prototypes
Move getPlayerMove();
Move getComputerMove();
string moveToString(Move move);
void displayResult(Move player, Move computer);
bool playAgain();

int main() {
    // Seed the random number generator once
    srand(static_cast<unsigned int>(time(nullptr)));
    
    cout << "Game - Rock, Paper, Scissors" << endl;
    cout << "==============================" << endl;
    cout << "Welcome to the game!" << endl;

    do {
        Move playerMove = getPlayerMove();
        if (playerMove == static_cast<Move>(4)) {  // Exit option
            cout << "Exiting the game. Goodbye!" << endl;
            break;
        }

        Move computerMove = getComputerMove();
        
        cout << "You chose: " << moveToString(playerMove) << endl;
        cout << "Computer chose: " << moveToString(computerMove) << endl;
        
        displayResult(playerMove, computerMove);

    } while (playAgain());

    cout << "Thank you for playing!" << endl;
    return 0;
}

Move getPlayerMove() {
    int choice;
    bool validInput = false;

    do {
        cout << "\nChoose your option:" << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissors" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";

        if (cin >> choice && choice >= 1 && choice <= 4) {
            validInput = true;
        } else {
            cout << "Invalid input. Please enter a number between 1 and 4." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (!validInput);

    return static_cast<Move>(choice);
}

Move getComputerMove() {
    return static_cast<Move>(rand() % 3 + 1);
}

string moveToString(Move move) {
    switch (move) {
        case Move::Rock: return "Rock";
        case Move::Paper: return "Paper";
        case Move::Scissors: return "Scissors";
        default: return "Unknown";
    }
}

void displayResult(Move player, Move computer) {
    if (player == computer) {
        cout << "It's a tie!" << endl;
    }
    else if ((player == Move::Rock && computer == Move::Scissors) ||
             (player == Move::Paper && computer == Move::Rock) ||
             (player == Move::Scissors && computer == Move::Paper)) {
        cout << "You win!" << endl;
    }
    else {
        cout << "You lose!" << endl;
    }
}

bool playAgain() {
    char response;
    bool validInput = false;

    do {
        cout << "Do you want to play again? (y/n): ";
        if (cin >> response) {
            response = tolower(response);
            if (response == 'y' || response == 'n') {
                validInput = true;
            } else {
                cout << "Please enter 'y' or 'n'." << endl;
            }
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while (!validInput);

    return response == 'y';
}