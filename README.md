# Tic-Tac-Toe in C++

## Overview
This is a simple command-line Tic-Tac-Toe game implemented in C++. The game allows two players to take turns and play on a 3x3 grid until one player wins or the game ends in a draw.

## Features
- Two-player mode
- Interactive command-line interface
- Input validation to prevent invalid moves
- Displays the game board after each move
- Detects win conditions and draws

## How to Play
1. Run the program.
2. Players take turns entering the position (1-9) where they want to place their mark (X or O).
3. The game board updates after each move.
4. The game announces the winner or a draw when the game ends.

## Installation and Compilation
To compile and run the program, use the following commands:
```sh
 g++ tic_tac_toe.cpp -o tic_tac_toe
 ./tic_tac_toe
```

## Game Rules
- The game is played on a 3x3 grid.
- Players take turns to mark a cell with 'X' or 'O'.
- The first player to get three marks in a row (horizontally, vertically, or diagonally) wins.
- If all cells are filled and no player has won, the game ends in a draw.

## Example Gameplay
```
 1 | 2 | 3
---+---+---
 4 | 5 | 6
---+---+---
 7 | 8 | 9

Player X, enter your move: 5

 X | 2 | 3
---+---+---
 4 | X | 6
---+---+---
 7 | 8 | 9

```

## Future Improvements
- Implement AI for a single-player mode.
- Add a graphical user interface (GUI).
- Allow customizable board sizes.

## License
This project is open-source and available under the MIT License.

## Author
Harmeet kaur

