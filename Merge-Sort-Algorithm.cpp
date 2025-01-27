#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&arr,int start,int mid,int end){
    int i=start;
    int j=mid+1;
    vector<int>ans;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            ans.push_back(arr[i]);
            i++;
        }
        else{
            ans.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        ans.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        ans.push_back(arr[j]);
        j++;
    }
    for(int idx=0;idx<ans.size();idx++){
        arr[idx+start]=ans[idx];
    }
}
void mergeSort(vector<int>&arr,int start,int end){
    if(start>=end){
        return;
    }
    int mid=start+(end-start)/2;
    //Left Part of the Array
    mergeSort(arr,start,mid);
    //Right Part of the Array
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}
void printArray(vector<int>arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>arr={76,54,9,43,12,76};
    int size=arr.size();
    cout<<"Original Array: "<<endl;
    printArray(arr,size);
    mergeSort(arr,0,size-1);
    cout<<"Sorted Array: "<<endl;
    printArray(arr,size);
    return 0;
    
}
