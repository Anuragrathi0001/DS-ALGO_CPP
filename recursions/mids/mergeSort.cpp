#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int start,int mid,int end){
    vector<int>temp(end - start + 1);
    int index = 0;
    int first = start;
    int second = mid + 1;
    while(first<=mid&&second<=end){
     if(arr[first]<arr[second]){
         temp[index] = arr[first];
         first++, index++;
     }
     else{
         temp[index] = arr[second];
         second++, index++;
     }
    }
    // if  elements before mid  left
    while(first<=mid){
        temp[index] = arr[first];
        index++, first++;
    }
    // if elements after mid  left
    while(second<=end){

        temp[index]=arr[second];
        index++, second++;
    }
    index = 0;
       for (int i = 0; i < temp.size(); i++) {
        arr[start + i] = temp[i];
    }

}
void mergeSort(vector<int>&arr,int start,int end){
    if(start >= end) return;
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}
int main(){
    vector<int> arr = {3, 4, 5, 6, 1, 2, 3, 7, 8};
    for(auto x:arr){
        cout << x << " ";
    }
    cout << endl;
    mergeSort(arr, 0, arr.size() - 1);
      for(auto x:arr){
        cout << x << " ";
    }
    return 0;
}