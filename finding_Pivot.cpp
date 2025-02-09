#include<iostream>
#include<vector>
using namespace std;
int pivot(vector<int>&arr){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return arr[start];
}
int main(){
    vector<int>arr={7,9,17,21,2,3};
    int pIndex=pivot(arr);
    cout<<pIndex;
}
