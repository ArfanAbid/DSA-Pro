            // Concept of Double Pointers 

#include<iostream>
using namespace std;
                

void update(int **ptr2){

    // ptr2=ptr2+1; // ===> No change

    // *ptr2=*ptr2+1;  // ===> Changes Exists

    **ptr2=**ptr2+1;
}
int main(){  

    int i=5;
    int *ptr=&i;
    int **ptr2=&ptr;

    cout<<"printing ptr (actually Address of i) : "<<ptr<<endl;
    cout<<"printing ptr2 (actually Address ptr) : "<<ptr2<<endl;
    cout<<"Printing Value of i : "<<i<<endl;
    cout<<"Printing Value of i : "<<*ptr<<endl;
    cout<<"Printing Value of i : "<<**ptr2<<endl;

    cout<<endl;
    cout<<"Address of i : "<<&i<<endl;
    cout<<"Address of i : "<<ptr<<endl;
    cout<<"Address of i : "<<*ptr2<<endl;

    cout<<"--------------------------------------------------"<<endl<<endl;

    cout<<"Before updating : "<<i<<endl;
    cout<<"Before updating : "<<ptr<<endl;
    cout<<"Before updating : "<<ptr2<<endl;
    update(ptr2);
    cout<<"After updating : "<<i<<endl;
    cout<<"After updating : "<<ptr<<endl;
    cout<<"After updating : "<<ptr2<<endl;
    // cout<<"After updating : "<<**ptr2<<endl;



    }