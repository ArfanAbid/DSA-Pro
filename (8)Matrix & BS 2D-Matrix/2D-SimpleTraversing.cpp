#include <iostream>
#include <vector>
using namespace std;


void traverseMatrix(int matrix[][3], int rows, int cols) {
    cout << "Traversing the 2D Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void traverseMatrix2(const vector<vector<int>>& matrix) {
    cout << "Traversing the 2D Matrix2:" << endl;
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Creating a 2D matrix (3x3)
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Traversing the 2D matrix
    cout << "2D Matrix:" << endl;
    for (int i = 0; i < 3; i++) {         
        for (int j = 0; j < 3; j++) {   
            cout << matrix[i][j] << " "; 
        }
        cout << endl;       
    }

    traverseMatrix(matrix, 3, 3);

    
    
    
    // Using Vector
    vector<vector<int>> matrix2 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Traversing the 2D matrix2
    cout << "2D Matrix2:" << endl;
    for (int i = 0; i < matrix2.size(); i++) {    // Row   
        for (int j = 0; j < matrix2[i].size(); j++) { // Column
            cout << matrix2[i][j] << " ";       
        }
        cout << endl;                        
    }

    //with function
    traverseMatrix2(matrix2);

}

// Time Complexity : O(m*n) 
