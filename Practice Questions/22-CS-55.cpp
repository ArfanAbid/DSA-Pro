// Take 6 character from user and search any character:
//  1. through binary search
// 2. linear search
// 3. count NO of Vowels and consonants 


//#include<iostream>
//using namespace std;
//void Display();
//char BinarySearch(char arr[],char target,int  start,int end);
//char LinearSearch(char arr[],char target,int  start,int end);
//int count(char arr[],int start,int end);
//
//int main(){
//
//char target;
//char arr [6];
//for (int  i = 0; i < 6; i++)
//{
//    cout<<"\nEnter "<<i+1 << " Character : ";
//    cin>>arr[i];
//    
//    
//}
//cout<<"Enter target Element u want to find : ";
//cin>>target;
//int choice=0;
//while (true){
//    Display();
//    cin>>choice;
//    switch(choice){
//        case 1:
//            int  ans=BinarySearch(arr,target,0,6);
//            cout <<"Found At index  :"<<ans;
//            break;
//        case 2:
//            int ans2= LinearSearch( arr, target,0,6);
//            cout <<"Found At index  :"<<ans2;
//            break;    
//        case 3:
//            count(arr,0,6);
//            break;
//        default:
//            cout<<"Invalid choice";    
//    }
//}
//
//
//
//
//}
//
//char BinarySearch(char arr[],char target,int  start,int end){
//
//    while(start<end){
//    int mid=start+(end-start)/2;
//
//    if(arr[mid]==target){
//        return mid;
//    }
//    if (target<arr[mid])
//    {
//        end=mid-1;
//
//    }
//    else{
//        start=mid+1;
//    }
//    
//}
//
//
//}
//
//
//char LinearSearch(char arr[],char target,int  start,int end){
//
//    for (int i = start; i < end; i++)
//    {
//        if(target==arr[i]){
//            return i;
//        }
//    }
//    
//    
//}
//
//int count(char arr[],int start,int end){
//    int count1=0;
//    int count2=0;
//    for (int i = start; i < end; i++)
//    {
//        if (arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'){
//            count1++;
//        }
//        else{
//            count2++;  
//        }
//    }
//    cout<<"The Number of Vowels are : ";
//    cout<<count1;
//    cout<<"The Number of onsonant  are : ";
//    cout<<count2;
//
//    
//
//}
//
//
//
//
//void Display(){
//    cout<<"\nMenu "<<endl;
//    cout<<"1. Search Through Binary Search"<<endl;
//    cout<<"2. Search Through Linear Search"<<endl;
//    cout<<"3. Count NO of Vowels and consonants "<<endl;
//
//}
//
//




#include <iostream>
using namespace std;

void Display();
int BinarySearch(char arr[], char target, int start, int end);
int LinearSearch(char arr[], char target, int start, int end);
void count(char arr[], int start, int end);

int main() {
    char target;
    char arr[6];
    for (int i = 0; i < 6; i++) {
        cout << "Enter " << i + 1 << " Character : ";
        cin >> arr[i];
    }

    cout << "Enter target Element you want to find : ";
    cin >> target;
    int choice = 0;
    while (true) {
        Display();
        cin >> choice;
        switch (choice) {
            case 1: {
                int ans = BinarySearch(arr, target, 0, 6);
                if (ans != -1) {
                    cout << "Found at index: " << ans << endl;
                } else {
                    cout << "Not found." << endl;
                }
                break;
            }
            case 2: {
                int ans2 = LinearSearch(arr, target, 0, 6);
                if (ans2 != -1) {
                    cout << "Found at index: " << ans2 << endl;
                } else {
                    cout << "Not found." << endl;
                }
                break;
            }
            case 3:
                count(arr, 0, 6);
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    }
}

int BinarySearch(char arr[], char target, int start, int end) {
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        if (target < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1; // Not found
}

int LinearSearch(char arr[], char target, int start, int end) {
    for (int i = start; i < end; i++) {
        if (target == arr[i]) {
            return i;
        }
    }
    return -1; // Not found
}

void count(char arr[], int start, int end) {
    int count1 = 0;
    int count2 = 0;
    for (int i = start; i < end; i++) {
        char c = tolower(arr[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count1++;
        } else if ((c >= 'a' && c <= 'z')) {
            count2++;
        }
    }
    cout << "The Number of Vowels are: " << count1 << endl;
    cout << "The Number of Consonants are: " << count2 << endl;
}

void Display() {
    cout << "\nMenu " << endl;
    cout << "1. Search Through Binary Search" << endl;
    cout << "2. Search Through Linear Search" << endl;
    cout << "3. Count NO of Vowels and Consonants " << endl;
}










