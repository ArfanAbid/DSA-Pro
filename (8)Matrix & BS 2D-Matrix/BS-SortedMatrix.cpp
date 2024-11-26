// Question: Search in a sorted Matrix such that each row is sorted in non-decreasing order.and T=the first integer of each row is greater than the last integer of the previous row.
// Leetcode  74. Search a 2D Matrix (Binary Search)

// Microsoft, Amazon,Adobe ***
// To find r and c or matrix with mid in binary search formula r=mid/c  and c=mid%c
// Approach: applies binary search on a flattened version of the matrix, treating it as a 1D array
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) { // T.c =>  O(log(m*n))
        int rows=matrix.size();
        int cols=matrix[0].size();
        // Creating BS range for 1D matrix
        int start=0; 
        int end=rows*cols-1;

        int mid=0;
        int midValue=0;

        while(start<=end){
            mid=start+(end-start)/2;
            midValue=matrix[mid/cols][mid%cols];// Map the 1D mid to 2D matrix

            if(midValue>target){
                end=mid-1;
            } else if(midValue<target){
                start=mid+1;
            }else{
                return true;
            }

        }
        return false;
    }
};


