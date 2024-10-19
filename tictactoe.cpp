#include <iostream>
#include <string>

using namespace std;

char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
char current_marker;
int current_player;
string player1, player2;

// Function to draw the Tic-Tac-Toe board
void drawBoard() {
    cout << player1 << " (X)  -  " << player2 << " (O)" << endl;
    cout << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << endl;
    cout << "     |     |     " << endl;
}

// Function to place a marker on the board
bool placeMarker(int slot) {
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = current_marker;
        return true;
    } else {
        return false;
    }
}

// Function to check if any player has won
int checkWinner() {
    // Rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return current_player;
    }
    // Columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return current_player;
    }
    // Diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return current_player;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return current_player;

    return 0;
}

// Function to switch players after each turn
void switchPlayer() {
    if (current_player == 1) {
        current_player = 2;
        current_marker = 'O';
    } else {
        current_player = 1;
        current_marker = 'X';
    }
}

// Function to get the current player's name
string getCurrentPlayerName() {
    if (current_player == 1) {
        return player1;
    } else {
        return player2;
    }
}

int main() {
    cout << "Enter Player 1 name: ";
    getline(cin, player1);
    cout << "Enter Player 2 name: ";
    getline(cin, player2);

    current_player = 1;
    current_marker = 'X';
    int winner = 0;
    int slot;
    int moves = 0;

    drawBoard();
    while (winner == 0 && moves < 9) {
        cout << getCurrentPlayerName() << "'s turn. Enter your slot (1-9): ";
        cin >> slot;

        if (slot < 1 || slot > 9 || !placeMarker(slot)) {
            cout << "Invalid move, try again!" << endl;
            continue;
        }

        drawBoard();
        winner = checkWinner();
        if (winner == 0) {
            switchPlayer();
        }

        moves++;
    }

    if (winner == 0) {
        cout << "It's a draw!" << endl;
    } else {
        cout << "Congratulations! " << getCurrentPlayerName() << " wins!" << endl;
    }

    return 0;
}
