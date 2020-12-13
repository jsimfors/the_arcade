#include <iostream>
using namespace std;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

int result();
void board();

int main(){
    // Start by printing board
    board();

    int player = 2;
    int choice;
    char mark;

    while(result()==0){
    // change to next players turn
    player==2?player=1:player=2;

    cout << "Player " << player << ", make your move by choosing one of the available numbers." << endl;
    cin >> choice;
    cout << "You chose " << choice << endl;
    mark=(player == 1) ? 'X' : 'O';

    if (isdigit(square[choice])){
        square[choice] = mark;
    }else{
        cout << "Invalid move ";
    }

    board();
    }
}

int result(){ 
    // 0 = Game is ongoing
    // 1 = player 1 wins
    // 2 = player 2 wins
    // 3 = No winner
    int winner = 0;
    // winner=(square[9] == 'X') ? 1 : 0;
    // cout << "Winner func is: " << winner << endl;

    // Horizontal wins:
    // index: 1, 2, 3 ; 4, 5, 6 : 7, 8, 9
    for(int i=1; i<=9;  i = i + 3){
        if(square[i] == square[i+1] && square[i+1] == square[i+2]){
            if(square[i]=='X'){
                winner = 1;
            }else{
                winner = 2;
            }
        }
    }

    cout << "Congrats Player " << winner << ", you win" << endl;
    return winner;
    
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