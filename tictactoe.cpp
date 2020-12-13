#include <iostream>
using namespace std;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

int checkwin();
void board();
void gamePlay();

int main(){
    board();
    gamePlay();
}

int checkwin(){ 
    // TODO create function that finds winner.
    return 0;
}

void gamePlay(){
    int choice;
    int player = 1; // TODO: add more players.
    char mark;
    cout << "Player " << player << ", choose your box" << endl;
    cin >> choice;
    cout << "You chose " << choice << endl;
    mark=(player == 1) ? 'X' : 'O';

    if (square[1] == '1')
        square[1] = mark;
    else
    {
        cout<<"Invalid move ";
    }
    board();

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