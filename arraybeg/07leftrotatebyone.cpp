#include <bits/stdc++.h>
using namespace std;
void leftrotatebyone(int arr[],int num){
    int temp = arr[num-1];
    for (int i = 0; i < num; i++)
    {
        arr[i] = arr[i + 1];
    }
    
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
     for (int k = 0; k < num;k++){
        cout << arr[k];
    }
    return 0;}