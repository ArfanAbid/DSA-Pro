    // Dynamic Memory in Array

#include<iostream>
using namespace std;
int getSum(int *arr,int n){
    int sum = 0;
    for (int  i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
    
}
int main(){  
    //     char ch='a';
    //     cout<<"Size of a Character : "<<sizeof(ch)<<endl;
    //     char * ptr=&ch;
    //     cout<<"Size of a pointer : "<<sizeof(ptr) <<endl;   

    int n;
    cin>>n;
    // variable size array 
    int * arr=new int[n];

    // taking input in array 
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int ans=getSum(arr,n);

    cout<<"answer is : "<<ans<<endl;


    // while(true){
    //     int i=5;     --->>> Memory is allocated and delete each time loop is iterated. simply mean in static memory is automatically release
    // }

    // while(true){
    //     int *ptr =new int;  --->>> Memory is allocated for pointer in stack and for new in heap and stack memory is released and heap remain there so it crash .use delete to avoid this crash process
    // }
    

    }
