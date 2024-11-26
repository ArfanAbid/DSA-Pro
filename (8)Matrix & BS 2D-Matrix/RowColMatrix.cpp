// Question: Matrix is sorted in row wise and column wise find the target element this approach is not Binary Search
// Leetcode  240. Search a 2D Matrix II


#include<iostream>
#include<vector>
using namespace std;

int* Search(int matrix[][4],int target,int rowsize,int colSize);
int main(){
    int matrix[4][4]={
        {10,20,30,40},
        {15,25,35,45},
        {28,29,37,49},
        {33,34,38,50}
    };

    int target=37;
    int rowSize=sizeof(matrix)/sizeof(matrix[0]);
    int colSize=sizeof(matrix[0])/sizeof(matrix[0][0]);
    int* ans=Search(matrix,target,rowSize,colSize);

    if (ans[0] != -1 && ans[1] != -1) {
        cout << "Element found at row " << ans[0] << " and column " << ans[1] << endl;
    } else {
        cout << "Element not found in the matrix." << endl;
    }

}

//Imp: Start searching from row=0  and col=last
int* Search(int matrix[][4],int target,int rowsize,int colSize){
    int r=0;
    int c=colSize-1;

    while(r<rowsize && c>=0){
        if (matrix[r][c]==target){
            int* result=new int[2];
            result[0]=r;
            result[1]=c;
            return result;
        }

        if (matrix[r][c] < target){
            r++;
        }else{
            c--;
        }

}

    int* result=new int[2]; // if no ans found return -1
            result[0]=-1;
            result[1]=-1;
            return result;

}

// Time Complexity : O(m+n) 


// Easy Code :)

/*

// Function to search for the target in the matrix
pair<int, int> searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    int row = 0, col = cols - 1; // Start from the top-right corner

    while (row < rows && col >= 0) {
        if (matrix[row][col] == target) {
            return {row, col}; // Target found
        } else if (matrix[row][col] > target) {
            col--; // Move left
        } else {
            row++; // Move down
        }
    }

    return {-1, -1}; // Target not found
}

int main() {
    // Define a row-wise and column-wise sorted matrix
    vector<vector<int>> matrix = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    int target = 29;

    // Search for the target
    pair<int, int> result = searchMatrix(matrix, target);

    if (result.first != -1) {
        cout << "Target " << target << " found at position: (" 
             << result.first << ", " << result.second << ")" << endl;
    } else {
        cout << "Target " << target << " not found in the matrix." << endl;
    }

    return 0;
}

*/