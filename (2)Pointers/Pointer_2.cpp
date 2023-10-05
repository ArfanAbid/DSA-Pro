// 								concept of pointers in Array
#include<iostream>
using namespace std;
int main(){
	/*
	int arr1[10];
	cout<<"Address of first memory block is : "<<arr1<<endl;
	cout<<"Address of first memory block is : "<<&arr1<<endl;
	cout<<"---------------------------------------------"<<endl;
	
	int arr[10]={2,5,6,8,4};
	cout<<"Address of first memory block is : "<<arr<<endl;
	cout<<"Address of first memory block is : "<<&arr<<endl;
	
	cout<<"The value at 0 index is :"<<*arr<<endl;
	cout<<"The value after increment is :"<<*arr+1<<endl;
	cout<<"OR The value after increment is :"<<*(arr)+1<<endl;
	cout<<"The value after increment in address is :"<<*(arr+1)<<endl;
	cout<<endl;
	
	cout<<"The value at index 2 is :"<<arr[2]<<endl;
	cout<<"OR The value at index 2 is :"<<*(arr+2)<<endl;  
	
	// actually     arr[i]=*(arr+i)
	//OR i[arr] =*(i+arr)   ----> No Error
	
	int i=3;
	cout<<"The value at index 3 is :"<<i[arr]<<endl;
	
	cout<<"------------------------------------------------------"<<endl;
	
	*/
	int temp[10];
	cout<<"Size of temp Array is : "<< sizeof(temp)<<endl;  //Each block  of array contains 4 bytes so 4*10 will give 40 
	
   //Note:
   //Pointer: The size of a pointer can depend on the system architecture. It's usually 4 bytes (32 bits) on 32-bit systems and 8 bytes (64 bits) on 64-bit systems.
	
	int *ptr=&temp[0];
	cout<<"The size of address at first index of array is : "<<sizeof(ptr)<<endl;
	cout<<"OR The size of address at first index of array is : "<<sizeof(&ptr)<<endl;
	cout<<"The size of value at first index of array is : "<<sizeof(*ptr)<<endl;
	
	
	//ERROR:
//	temp=temp+1;
	
	int *ptr1=&temp[1];
	cout<<"Address at index 1 is : "<<ptr1<<endl;
	ptr1=ptr1+1;
	cout<<"Address  after increment is: "<<ptr1<<endl;
}
