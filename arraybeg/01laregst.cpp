#include <bits/stdc++.h>
using namespace std;
int largest(int arr[],int num){
    int large = arr[0];
    for (int i = 0; i < num; i++)
    {
        if (arr[i]>large){
            large = arr[i];
        }
    }
    return large;
}
int main(){
    int num;
    cout << "Enter the num of elements array";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num;i++){
        cout << "Enter the Element " << i << " :";
        cin >> arr[i];
    }
  cout<<  largest(arr, num);

    return 0;
}