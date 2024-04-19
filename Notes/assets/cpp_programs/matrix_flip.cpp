#include <iostream>
#include <vector>
#include <algorithm> // For std::reverse

void printmtx(std::vector<std::vector<int>> &matrix){
    // Print the matrix to verify
    for (const auto& row : matrix) {
        for (int val : row) {
            std::cout << val << ' ';
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printmtx(matrix);   // Print the matrix to verify

    // Flip the second row
    std::reverse(matrix[1].begin(), matrix[1].end());

    printmtx(matrix);   // Print the matrix to verify

    // Flip the second column
    int columnIndex = 1; // Column to flip
    int rows = matrix.size();
    for (int i = 0; i < rows / 2; ++i) {
        std::swap(matrix[i][columnIndex], matrix[rows - 1 - i][columnIndex]);
    }

    printmtx(matrix);   // Print the matrix to verify

    return 0;
}
