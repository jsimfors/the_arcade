#include <iostream>
#include "games.hpp"

using namespace std;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

char result();
void board();

void tictactoe(){
    board();
    char player = 'O';
    int choice;
    char mark;

    while(result()=='n'){
    player=='O'?player='X':player='O';

    cout << "Player " << player << ", make your move by choosing one of the available numbers." << endl;
    cin >> choice;

    if(isdigit(square[choice])){
        square[choice] = player;
    }

    board();
    }
    
    result()!='d'?cout << "Congrats Player " << result() << ", you win" << endl: cout << "It's a draw!" << endl;
}

char result(){ 
    // n = Null - game is ongoing
    // X = player x wins
    // O = player O wins
    // d = draw, no winner
    char winner = 'n';

    // Horizontal-wins i = 4, 7, 9
    for(int i=1; i<=9;  i = i + 3){
        if(square[i] == square[i+1] && square[i+1] == square[i+2]){
            if(square[i]=='X') return 'x'; else return 'O';
        }
    }

    // Vertical-wins i = 1, 2, 3
    for(int i=1; i<=3; i++){
        if(square[i] == square[i+3] && square[i+3] == square[i+6]){
            if(square[i]=='X') return 'x'; else return 'O';
        }
    }

    // Diagonal-wins i 1, 5, 9 or i = 3, 5, 7.
    if((square[1] == square[5] && square[5] == square[9]) || (square[3] == square[5] && square[5] == square[7])){
        if(square[5]=='X') return 'x'; else return 'O';
    }

    // Check for draw
    for(int i=1; i<=9;  i++){
        if(isdigit(square[i])){
            return 'n';
        }
    }
    return 'd';
}

void board(){

    cout << "\n" << "~*~ Tic Tac Toe ~*~" << endl;

    cout << " _________________" << endl;

    cout << "|     |     |     |" << endl;
    cout << "|  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << "  |" << endl;

    cout << "|_____|_____|_____|" << endl;
    cout << "|     |     |     |" << endl;

    cout << "|  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << "  |" << endl;

    cout << "|_____|_____|_____|" << endl;
    cout << "|     |     |     |" << endl;

    cout << "|  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << "  |" << endl;

    cout << "|_____|_____|_____|" << endl << endl;
}

void rockPaperScissors() {
    srand (time (NULL));
    int cC = rand() % 3 + 1;
    int uC;
    string rock = "\U0001F91B Rock";
    string paper = "\U0001F91A Paper";
    string scissors = "\U0001F91E Scissors";
    cout << "~*~ \U0001F91B Rock \U0001F91A Paper \U0001F91E Scissors ~*~" << endl;
    cout << "Choose your weapon:" << endl;
    cout << "1)" << rock << endl << "2) " << paper << endl << "3) " << scissors << endl;
    cin >> uC;
    
    cout << "\nYou chose ";
    if(uC==1){
        cout << rock << endl;
    }else if(uC==2){
        cout << paper << endl;
    }else if(uC==3){
        cout << scissors << endl;
    }else{
        cout << "an invalid option" << endl;
    }

    cout << "Computer chose ";
    if(cC==1){
        cout << rock << endl;
    }else if(cC==2){
        cout << paper << endl;
    }else{
        cout << scissors << endl;
    }
    
    if(uC==cC){
        cout << "It's a draw!" << endl;
    }else if(uC>cC){
        if(cC==1 && uC==3){
            cout << "Computer wins." << endl;
        }else{
            cout << "You win." << endl;
        }
    }else if(uC<cC){
        if(uC==1 && cC==3){
            cout << "You win." << endl;
        }else{
            cout << "Computer wins." << endl;
        }
    }else{
        cout << "Computer wins." << endl;
    }
    
}

void guessMyNumber() {
    srand (time (NULL));
	int guessMe = rand() % 100 + 1;
    cout << "\n" << "~*~ Guess My Number ~*~" << endl;
    bool isCorrect = false;

	int currentgGuess, totalGuesses = 0;
    while(!isCorrect){
        cout << "Enter a guess between 1 and 100 : ";
		cin >> currentgGuess;
		totalGuesses++;
        if (currentgGuess > guessMe)
			cout << "Too high" << endl;
		else if (currentgGuess < guessMe)
			cout << "Too low" << endl;
		else{
			cout << "That's right! It only took you " << totalGuesses << " guesses. Cool beans!" << endl;
            isCorrect = true;
        }
    }
}