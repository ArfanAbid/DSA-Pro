
 #include<iostream>
 using namespace std;
 void BubbleSort(int arr[],int r,int c);
 int main(){  
     int arr[]={4,2,3,1};
     int length=sizeof(arr)/sizeof(arr[0]);
     BubbleSort(arr,length-1,0);
     for (int i = 0; i < length; i++)
     {
         cout<<arr[i]<<" ";
     }
        
     }

 void BubbleSort(int arr[],int r,int c){
     if(r==0){
         return;
    
     }
     if(c<r){
         if (arr[c]>arr[c+1]){
         swap(arr[c],arr[c+1]);
         }
         BubbleSort(arr,r,c+1);                                     
     }else{
     BubbleSort(arr,r-1,0);
     }
 }   




//#include<iostream>
//using namespace std;
//void Bubblesort(int arr[],int last,int first);
//int main(){  
//    int arr[]={4,3,2,1};
//    int length=sizeof(arr)/sizeof(arr[0]);
//    Bubblesort(arr,length-1,0);
//    for (int i = 0; i < length; i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//        
//    }
//
//void Bubblesort(int arr[],int last,int first){
//    if(last==0){                                                   
//        return;
//    
//    }
//    if(first<last){
//        if (arr[first]>arr[first+1]){      // last element comes at the end  this is  one complete loop iterations
//        swap(arr[first],arr[first+1]);
//        }
//        Bubblesort(arr,last,first+1);
//    }else{
//    Bubblesort(arr,last-1,0);
//    }
//}   







































