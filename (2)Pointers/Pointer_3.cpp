	// Character Array
#include<iostream>
using namespace std;

int main(){
	int arr[5]={1,2,3,4,5};
	char ch[6]="abcde";  // ends with null character so make size accordingly
	


	cout<<arr<<endl; // address of 1 index of arr
	cout<<ch<<endl; // print entire content present in ch array

	char *c=&ch[0];
	cout<<c<<endl; // prints the entire string  

	char temp='z';
	char *p=&temp;
	cout<<p<<endl; // start printing character until it gets null character




}
