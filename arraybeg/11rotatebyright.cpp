#include <bits/stdc++.h>
using namespace std;
void rotatebyKleft(int arr[],int num,int k){
  rotate(arr,arr,arr+num-k);
  rotate(arr, arr+num-k, arr + num);
  rotate(arr, arr, arr + num);
}
int main(){
    int num,k;
    cout<<"enter the num";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cout << "enter the element:";
        cin >> arr[i];
    }
    cout << "Enter the num of rotate";
    cin >> k;
    k = k % num;
    rotatebyKleft(arr, num, k);
    for (int i = 0; i < num; i++)
    {
    cout << arr[i];
    }
   

    return 0;
}