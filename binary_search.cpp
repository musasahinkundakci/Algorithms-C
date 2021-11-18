// hello.cpp file
#include <iostream>
#include <cstring>
using namespace std;
int binarySearch(int *arr,int N,int key);
int main()
{
    int size=9;
    int arr[size]={1,2,3,4,5,6,7,8,9};
    while(true){
        int choice;
        cout<<"The array is;"<<endl;
        for(int i=0;i<size;i++)
            cout<<" "<<arr[i]<<" ";
        cout<<"Which element's index you wanna find out ?"<<endl;
        cin>>choice;
        cout<<"The index is: "<<binarySearch(arr,size,choice)<<endl;
        if(choice==0){
            return 0;
        }
    }
    return 0;
}
int binarySearch(int arr[],int N,int key){
    int left=0;
    int right=N-1;
    int middle;
    while(left<right){
        middle=(left+right)/2;
        if(arr[middle]==key){
            return middle;
        }
        else if(arr[middle]>key){
            right=middle-1;
        }
        else{
            left=middle+1;
        }
    }
    return -1;
    
}
