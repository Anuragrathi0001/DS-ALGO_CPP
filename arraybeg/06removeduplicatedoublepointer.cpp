#include <bits/stdc++.h>
using namespace std;
int removeduplicates(int arr[],int num){
    int i = 0;
    int j = 1;
    for ( j; j <num; j++)
    {
        if(arr[i]!=arr[j]){
            arr[i + 1] = arr[j];
            i++;
        }
        
    }
    return i + 1;
}
int main(){
    int num;
    cout << "Enter the num of elements array";
    cin >> num;
    int arr[num];
    for (int k = 0; k < num;k++){
        cout << "Enter the Element " << k << " :";
        cin >> arr[k];
    }
  cout<< removeduplicates(arr, num);
    return 0;
}