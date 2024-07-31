//
//  main.cpp
//  TicTacToe
//
//  Created by Szymon Wnuk on 31/07/2024.
//

#include <iostream>
using namespace std;

int main() {
    int liczba = 1;
    char board[3][3] = {
        {' ', ' ', ' ' },
        {' ', ' ', ' ' },
        {' ', ' ', ' ' }
    };
    const char playerX = 'X';
    const char player0 = 'O';
    char currentPlayer = playerX;
    int row = -1;
    int column = -1;
    
    for (int i = 0; i < 9; i++) {
        cout << "    |  |  " << endl;
        cout << " "<< board[0][0] << "  | " << board[0][1] << "| " << board[0][2] << endl;
        cout << " ___|__|___ " << endl;
        cout << "    |  |  " << endl;
        cout << " "<< board[1][0] << "  | " << board[1][1] << "| " << board[1][2] << endl;
        cout << " ___|__|___ " << endl;
        cout << "    |  |  " << endl;
        cout << " "<< board[2][0] << "  | " << board[2][1] << "| " << board[2][2] << endl;
        cout << "    |  |  " << endl;
        
        cout << "Current Player is" << currentPlayer << endl;
        cout << "Enter row and column from 0-2 for row and column:";
        cin >> row >> column;
        board[row][column] = currentPlayer;
        currentPlayer = (currentPlayer == playerX) ? player0 : playerX;
        
    }
    


}
