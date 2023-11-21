// Given an array ,every number appear twice except one number find that
#include <iostream>
using namespace std;

int findSingle(int arr[], int n) {
  int res = 0;
  for(int i=0; i<n; i++) {
    res ^= arr[i]; 
  }
  return res;
}

int main() {

  int arr[] = {2, 3, 5, 4, 5, 3, 4};
  int n = sizeof(arr)/sizeof(arr[0]);
  
  int single = findSingle(arr, n);
  
  cout << "The number that appears only once is: " << single << endl;
}
// - This uses the XOR bitwise operator (^) to find the number that appears only once. 
// - XOR of a number with itself is 0. 
// - XOR of a number with 0 is the number itself.
// - Doing XOR of all array elements will result in the single number left.