#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void shortest_distance(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // Step 1: Replace -1 with a large value representing infinity (1e9)
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == -1) {
                    matrix[i][j] = 1e9;
                }
            }
        }

        // Step 2: Floyd-Warshall algorithm to update matrix with shortest distances
        for (int via = 0; via < n; via++) { // This loop is used to include the Vertice i.e including this will be helpful in finding shortest path like v0,v1,v3,v4...
            for (int i = 0; i < n; i++) {// This loop is used to iterate over the rows of the matrix.
                for (int j = 0; j < n; j++) { // This loop is used to iterate over the columns of the matrix.
                    matrix[i][j] = min(matrix[i][j], matrix[i][via] + matrix[via][j]);
                }
            }
        }

        // Step 3: Replace 1e9 back with -1 to indicate no path exists
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 1e9) {
                    matrix[i][j] = -1;
                }
            }
        }
    }
};

int main() {
    Solution obj;

    // Example input matrix here -1 mean no path or infinity 
    vector<vector<int>> matrix = {
        {0, 3, -1, 7},
        {8, 0, 2, -1},
        {5, -1, 0, 1},
        {2, -1, -1, 0}
    };

    obj.shortest_distance(matrix);

    // Output the resulting matrix
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

}
