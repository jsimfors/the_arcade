#include <iostream>
using namespace std;

char square[10] = {'o','a','b','c','d','e','f','g','h','i'};

int checkwin();
void board();

int main(){
    board();
}

int checkwin(){ 
    return 0;
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