#include <iostream>
#include "games.hpp"
using namespace std;

int main(){ 
    int gameInt;
    cout << "~*~*~  Welcome to THE ARCADE ~*~*~\n";
    cout << "What game would you like to play?\n" << "1. Tic Tac Toe\n" << "2. Tic Tac Toe\n" 
        << "3. Tic Tac Toe\n" << "4. EXIT \n";
    cin >> gameInt;
    if(gameInt<4){
        tictactoe();
    }else{
        cout << "Ok, bye. :(" << endl;
    }
    
  
}