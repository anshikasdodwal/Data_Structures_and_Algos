#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>&arr,int size,int key){
    int start=0;
    int end=size-1;
    while(start<end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr={6,12,43,45,67,92};
    int size=arr.size();
    int key;
    cout<<"enter key ";cin>>key;
    int index=binarySearch(arr,size,key);
    if(index>=0){
        cout<<key<<" is present at index "<<index;
    }
    else{
        cout<<key <<" is not present in the array";
    }
    
    return 0;
}
