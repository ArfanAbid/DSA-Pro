// Given an array of number in which a number has +ive and -ive of it self nd one number is threre that is present it self find that 

#include <iostream>
using namespace std;

int findSingle(int arr[], int n) {
  int res = 0;
  for(int i=0; i<n; i++) {
    res += arr[i]; 
  }
  return res;
}

int main() {

  int arr[] = {2, 3, 5, -4, -5, -3, 4};
  int n = sizeof(arr)/sizeof(arr[0]);
  
  int single = findSingle(arr, n);
  
  cout << "The number  is: " << single << endl;
}
