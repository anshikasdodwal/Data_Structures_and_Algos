#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&arr,int start,int end){
    int pivot=arr[end];
    int idx=start-1;
    for(int j=start;j<end;j++){
        if(arr[j]<pivot){
            idx++;
            swap(arr[idx],arr[j]);
        }
    }
    idx++;
    swap(arr[idx],arr[end]);
    return idx;
}
void quickSort(vector<int>& arr,int start,int end){
    if(start>=end){
        return;
    }
    int pIndex=partition(arr,start,end);
    quickSort(arr,start,pIndex-1);
    quickSort(arr,pIndex+1,end);
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
    quickSort(arr,0,size-1);
    cout<<"Sorted Array: "<<endl;
    printArray(arr,size);
    return 0;
    
}
