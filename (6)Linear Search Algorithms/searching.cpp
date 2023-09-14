
#include <iostream>
using namespace std;

// static  int linear_search(int arr[], int target,int length);
static  bool linear_search2(int arr[], int target,int length);

int main(){
int arr[] = {23,45,1,4,8,9,12,-11,5,6};
int target =12;
int length=sizeof(arr)/sizeof(arr[0]);

bool ans=linear_search2(arr,target,length);
cout<<boolalpha<<ans; // for true or false otherwise 1 or 0
}
// search for the target and return true or false

static bool linear_search2(int arr[] , int target,int length){
if (length==0){
    return false;
}
for (int index=0;index<length;index++){
    // check for every index if it is a target
    int element =arr[index];
    if(element==target){
        return true;
        }


}
//  this line will execute if the target is not found
return false;

}





        // search in the array return the index if item found
        // otherwise,if item not found return -1

// int main(){
// int arr[] = {23,45,1,4,8,12,-11,5,6};
// int target =12;
// int length=sizeof(arr)/sizeof(arr[0]);

// int ans=linear_search(arr,target,length);
// cout<<ans;
// }
// static int linear_search(int arr[] , int target,int length){
// if (length==0){
//     return -1;
// }
// for (int index=0;index<length;index++){
//     // check for every index if it is a target
//     int element =arr[index];
//     if(element==target){
//         return index;
//         }


// }
// //  this line will execute if the target is not found
// return -1;

// }