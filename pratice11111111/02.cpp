#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int largest = arr[0];
    int slargest = INT_MIN;
    for (int i = 0;i<arr.size();i++){
    if(arr[i]>largest){
        int temp = largest;
        largest = arr[i];
        slargest = temp;
    }
    }
    cout << slargest;
}