#include <bits/stdc++.h>
using namespace std;
int issorted(int arr[],int num){

    for (int i = 0; i < num;i++){
        if(arr[i]<=arr[i+1]){

        }
        else{
            return false;
        }

            // else if(arr[i+1]>=arr[i])
            //     return true;
    }
    return true;
    
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
  cout<<  issorted(arr, num);

    return 0;
}