/*
* Author: Marcos Garcia
* This is the Baseline, Back Tracking Solution.
*/

#include <iostream>
#include <vector>
#include <chrono>

// Function prototypes
void printBoard(const std::vector<int>& board);
bool isSafe(const std::vector<int>& board, int row, int col);
void solve(const std::vector<int>& board, int row, int N);

// Iterating through the array and printing it out
void printBoard(std::vector<int>& board) {
    int N = board.size();

    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            if (board[row] == col) {
                std::cout << "Q ";
            } else {
                std::cout << ". ";
            }
        }
        std::cout << std::endl;
    }
}

// checks if its safe to place queen so we must check all cases diag, col, not row
bool isSafe(const std::vector<int>& board, int row, int col) {

    // board[r] = previous board position, row = the one were trying to place in solveNQueens
    for (int r = 0; r < row; r++) {
        if (board[r] == col || abs(board[r] - col) == abs(row - r)) {
            return false; 
        }
    }
    return true;
}

// recursive backtracking
void solve(std::vector<int>& board, int row, int N) {


}

int main() {
    int N = 4; // Size of the board.
    std::vector<int> board(N, -1); // Initializing a vector of size N and all values are -1
    board[0] = 1;
    
    printBoard(board);
    std::cout << isSafe(board, 1, 3);
    
}

