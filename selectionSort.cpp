#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int>&arr,int size){
    for(int i=0;i<size;i++){
        int minIndex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}
void printArray(vector<int>arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>arr={76, 54, 9, 43, 12, 76 };
    int size=arr.size();
    cout<<"Original Array: "<<endl;
    printArray(arr,size);
    selectionSort(arr,size);
    cout<<"Sorted Array: "<<endl;
    printArray(arr,size);
}
