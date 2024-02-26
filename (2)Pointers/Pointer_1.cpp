//    Basic Concept of Pointers

// * => Value at
// & => Address at

#include<iostream>
using namespace std;
int main(){
	int num=5;
	
	int *p=&num;
	
	cout<<"This is Address of p:"<<p<<endl;
	cout<<"Value of p is :"<<*p<<endl;
	
	(*p)++;
	cout<<"(*p)++ This will increment the value present at address p "<<*p<<endl;
	
	int *q=p;
	cout<<"The adress of p  is :"<<p <<" and q is : "<<q<<endl;
	cout<<"The value of of p  is :"<<*p <<" and q is : "<<*q<<endl;
	
	// Important concept
	int i=3;
	int *t=&i;
	cout<<"Before increment value of t is :"<<*t<<endl;
	cout<<"Before increment address of t is :"<<t<<endl;
	*t=*t+1;
	cout<<"After increment value of t is : "<<*t<<endl;
	cout<<"After increment address of t is : "<<t<<endl;
	cout<<"-------------------------------"<<endl;
	
 	// now consider the concept of adress
 	
 	cout<<"Before address of t is :"<<t<<endl;  // like 0x79fe00
 	t=t+1; // increasing the adress by one byte 
// 	one byte = 4 bits so increased by 4 bits 
	cout<<"After increment adress of t is : "<<t<<endl;// 0x79fe04 increased 4 bits
	
	// ---->> Address is  represented in hexadecimal
	
	/* InterView Question:
	   You have an int pointer with an initial value of p = 1000; and p+=5;  what is answer with proper explanation ?  :: When you execute p += 5;, it will add 5 times the size of an int to the address stored in p.  since adress is 1000 if we add 5 integer which is 4*5=20 bytes so its adress becomes 1020 
	
	
	  int *P =1000;---->pointing to adress         >>>  int* p = reinterpret_cast<int*>(1000); // Creating a pointer with an address of 1000 (for demonstration purposes)
	  before increment cout<<p;
	  p+=5;
	  after increment cout<<p; */
	  
	  
	  
	
	// Another Example :
	
	int y=1000;
	int *k=&y;
	cout<<k<<endl;
//	k+=1;  //increment the adress by  4 bytes                it is represented in hexadecimal 
	k+=5; /// increment the adress by  4*5=20 bytes
	cout<<k<<endl;
	
	}
	
	
// using *p++;	
	/*
	
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30};
    int *ptr = arr; // Pointer points to the first element of the array

    cout << "Value before increment: " << *ptr << endl; // Outputs: Value before increment: 10
    cout << "Value after increment: " << *ptr++ << endl; // Outputs: Value after increment: 10
    cout << "Value after increment and ptr move: " << *ptr << endl; // Outputs: Value after increment and ptr move: 20

    ptr = arr; // Reset pointer to point to the first element of the array again

    cout << "Value before increment: " << *ptr << endl; // Outputs: Value before increment: 10
    cout << "Value after increment: " << (*ptr)++ << endl; // Outputs: Value after increment: 10
    cout << "Value after increment without ptr move: " << *ptr << endl; // Outputs: Value after increment without ptr move: 11

    return 0;
}

	*?
