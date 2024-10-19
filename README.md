# Tic-Tac-Toe Game

A simple console-based **Tic-Tac-Toe** game implemented in C++. This two-player game allows users to input their names and take turns placing their markers (`X` or `O`) on the 3x3 game board. The game continues until one player wins by aligning their markers in a row, column, or diagonal, or the game ends in a draw.

## Features

- **Two-player mode**: Player 1 uses marker `X`, and Player 2 uses marker `O`.
- **Dynamic board**: The game updates the board after every move.
- **Win/draw detection**: The game checks for a winner after each move and declares the result when one player wins or the game ends in a draw.
- **Input validation**: Ensures that players choose a valid and unoccupied slot.

## How to Play

1. Clone the repository and compile the code using a C++ compiler.
2. Enter the names of Player 1 and Player 2.
3. Players take turns selecting a slot (1-9) to place their marker (`X` for Player 1 and `O` for Player 2).
4. The game ends when one player wins or when all slots are filled (draw).

## Compilation and Execution

To compile the game using `g++`:

```bash
g++ -o tictactoe tictactoe.cpp
```

To run the game:

```bash
./tictactoe
```

## Example Game

```
Enter Player 1 name: Alice
Enter Player 2 name: Bob

Alice (X)  -  Bob (O)

     |     |     
  1  |  2  |  3  
_____|_____|_____
     |     |     
  4  |  5  |  6  
_____|_____|_____
     |     |     
  7  |  8  |  9  
     |     |     

Alice's turn. Enter your slot (1-9): 1

Alice (X)  -  Bob (O)

     |     |     
  X  |  2  |  3  
_____|_____|_____
     |     |     
  4  |  5  |  6  
_____|_____|_____
     |     |     
  7  |  8  |  9  
     |     |     

...

Congratulations! Alice wins!
```

## Project Structure

```
|-- tictactoe.cpp   # Main source code file for the game
|-- README.md       # Project documentation
```

## License

This project is open-source and available under the MIT License.
