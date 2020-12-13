#include <iostream>
using namespace std;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

char result();
void board();

int main(){
    // Start by printing board
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
    }else{
        cout << "Invalid move ";
    player=='O'?player='X':player='O';
            cin.ignore();
            cin.get();
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