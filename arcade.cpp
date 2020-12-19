#include <iostream>
#include "games.hpp"
using namespace std;

int main(){ 
    int gameInt;
    cout << "~*~*~  Welcome to THE ARCADE ~*~*~\n";
    cout << "What game would you like to play?\n" << "1. Tic Tac Toe\n" << "2. Tic tac toe\n" 
        << "3. Rock Paper Scissors\n" << "4. EXIT \n";
    cin >> gameInt;
    if(gameInt<3){
        tictactoe();
    }else if(gameInt==3){
        rockPaperScissors();
    }else{
        cout << "Ok, bye. :(" << endl;
    }
    
  
}