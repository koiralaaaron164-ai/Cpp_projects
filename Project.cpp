#include <iostream>
#include <iomanip>

using namespace std;

// The game board is a 3x3 array of characters.
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char currentPlayer = 'X';
bool gameOver = false;

// Function prototypes
void displayBoard();
void playerMove();
bool checkWin();
bool checkDraw();
void switchPlayer();

int main() {
    cout << "Tic Tac Toe Game in C++" << endl;
    while (!gameOver) {
        displayBoard();
        playerMove();
        if (checkWin()) {
            displayBoard();
            cout << "Player " << currentPlayer << " wins!" << endl;
            gameOver = true;
        } else if (checkDraw()) {
            displayBoard();
            cout << "Game is a draw!" << endl;
            gameOver = true;
        } else {
            switchPlayer();
        }
    }
    return 0;
}

// Function to display the current state of the board
void displayBoard() {
    // Clear the console for a cleaner look (system specific, might not work everywhere)
    // system("cls"); 
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " " << board[i][j] << " ";
            if (j < 2) cout << "|";
        }
        cout << "\n";
        if (i < 2) cout << "---|---|---\n";
    }
    cout << "\n";
}

// Function to handle player input and update the board
void playerMove() {
    int move;
    cout << "Player " << currentPlayer << ", enter your move (1-9): ";
    cin >> move;

    // Convert move (1-9) to board coordinates (0-2, 0-2)
    int row = (move - 1) / 3;
    int col = (move - 1) % 3;

    // Input validation
    if (move >= 1 && move <= 9 && board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = currentPlayer;
    } else {
        cout << "Invalid move! Try again." << endl;
        // Clear input stream and recursively call playerMove to get valid input
        cin.clear();
        cin.ignore(10000, '\n');
        playerMove();
    }
}

// Function to check if a player has won
bool checkWin() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return true; // Row win
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return true; // Column win
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return true; // Diagonal win
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return true; // Diagonal win

    return false;
}

// Function to check for a draw
bool checkDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false; // Found an empty cell, not a draw yet
            }
        }
    }
    return true; // All cells filled and no winner
}

// Function to switch players
void switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}
