// Program to find if element is present or not using linear search and Recursion
// 1. boolean check true or false 0 or 1
// 2. return index at which it is present search from start 
// 3. return index at which it is present search from last
// 4. return index at which it is present search for all same elements present
// 5. return index at which it is present search for all same elements present using : take list inside recursive call


#include<iostream>
using namespace std;
#include <vector>

bool find(int arr [],int index,int target,int length);  
int findIndex(int arr [],int index,int target,int length);
int findIndexLast(int arr [],int index,int target,int length);
vector<int> findIndexAll(int arr [],int index,int target,int length);
vector<int> findIndexAll1(int arr [],int index,int target,int length);

int main(){

    int arr[]={1,22,32,14,32,115}; 
    int length=sizeof(arr)/sizeof(arr[0]); 

    // cout<<find(arr,0,32,length);   // 1
    // cout<<findIndex(arr,0,32,length); // 2
    // cout<<findIndexLast(arr,length,32,length); // 3
//   vector<int> list1 = findIndexAll(arr, 0, 32, length); // 4
//     for (int index : list1) {
//         cout << index << " ";
//     }
    vector<int> list1 = findIndexAll1(arr, 0, 32, length); // 5
    for (int index : list1) {
        cout << index << " ";
    }
    
}

bool find(int arr [],int index,int target,int length){
    if(index==length){ // base condition -> index is out of length 
        return false; 
    }

    return arr[index]== target || find(arr,index+1,target,length);  
}

int findIndex(int arr [],int index,int target,int length){
    if(index==length){ // base condition -> index is out of length 
        return -1; 
    }
    if(arr[index]==target){
    return index;
    }else{
        return findIndex(arr,index+1,target,length);  
    }

}

int findIndexLast(int arr [],int index,int target,int length){
    if(index==-1){ // base condition -> index is out of length 
        return -1; 
    }
    if(arr[index]==target){
    return index;
    }else{
        return findIndexLast(arr,index-1,target,length);  
    }

}
vector<int> list;
vector<int> findIndexAll(int arr [],int index,int target,int length){
    if(index==length){ // base condition -> index is out of length 
        return list; 
    }
    if(arr[index]==target){
    list.push_back(index);
    }
    return findIndexAll(arr,index+1,target,length);  
    

}
// For take list inside recursive call --->>  not appropriate method ok
vector<int> findIndexAll1(int arr [],int index,int target,int length){
    vector<int> list1;
    if(index==length){ // base condition -> index is out of length 
        return list1; 
    }
    // this wil contain answer for that function call only 
    if(arr[index]==target){
    list1.push_back(index);
    }

    vector<int> ansFromBelowCalls = findIndexAll1(arr,index+1,target,length);  
    list1.insert(list1.end(), ansFromBelowCalls.begin(), ansFromBelowCalls.end());

    return list1;

}








// Also u can do by passing vector inside as argument instead of declaring it outside ok 