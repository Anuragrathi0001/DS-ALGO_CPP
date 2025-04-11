#include <bits/stdc++.h>
using namespace std;
int largest(int arr[],int num){
    int large = arr[0];
    int slarge = -1;
    for (int i = 0; i < num; i++)
    {
        if (arr[i]>large){
            slarge = large;
            large = arr[i];
        }
        else if(arr[i]>slarge&&slarge<large){
            slarge = arr[i];
        }
    }
    return slarge;
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