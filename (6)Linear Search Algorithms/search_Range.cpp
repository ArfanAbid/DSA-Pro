#include<iostream>
using namespace std;

static int linear_search(int arr[] , int target,int length,int start, int end);

int main(){
int arr[] = {23,45,1,4,8,12,-11,5,6};
int target =12;
int length=sizeof(arr)/sizeof(arr[0]);

int ans=linear_search(arr,target,length,2,6);
cout<<ans;
}

static int linear_search(int arr[] , int target,int length,int start, int end){
if (length==0){
    return -1;
}
for (int index=start;index<end;index++){
    // check for every index if it is a target
    int element =arr[index];
    if(element==target){
        return index;
        }


}
//  this line will execute if the target is not found
return -1;

}