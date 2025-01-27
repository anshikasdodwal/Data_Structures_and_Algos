#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int>&arr,int size){
    for(int i=0;i<size-1;i++){
        int swapped=false;
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
}
void printArray(vector<int>arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr={76 ,54, 9 ,43 ,12 ,76 };
    int size=arr.size();
    cout<<"Original Array: "<<endl;
    printArray(arr,size);
    bubbleSort(arr,size);
    cout<<"Sorted Array: "<<endl;
    printArray(arr,size);
    
}
