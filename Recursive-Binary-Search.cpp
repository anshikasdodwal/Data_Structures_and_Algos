#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>&arr,int start,int end,int key){
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        //Left Part
        if(arr[mid]>key){
            return binarySearch(arr,start,mid-1,key);
        }
        else{
            return binarySearch(arr,mid+1,end,key);
        }
       
    }
    return -1;
}
int main(){
    vector<int> arr={6,12,43,45,67,92};
    int key;
    cout<<"Enter key: ";cin>>key;
    int end=arr.size()-1;
    int index=binarySearch(arr,0,end,key);
    if(index>=0){
        cout<<key<<" is present at index "<<index;
    }
    else{
        cout<<key <<" is not present in the array";
    }
    return 0;
}
