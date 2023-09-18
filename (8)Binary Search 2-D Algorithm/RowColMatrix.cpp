//Imp: Start searching from row=0  and col=last

#include<iostream>
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

    int* result=new int[2];
            result[0]=-1;
            result[1]=-1;
            return result;

}