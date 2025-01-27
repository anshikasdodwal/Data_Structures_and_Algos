#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int>&arr,int size){
    for(int i=1;i<size;i++){
        int element=arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>element){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
    arr[j+1]=element;
    }
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
    insertionSort(arr,size);
    cout<<"Sorted Array: "<<endl;
    printArray(arr,size);
    
}
