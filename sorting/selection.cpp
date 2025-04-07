#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout << "Enter the number of elements";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the element " << i << " : ";
        cin >> arr[i];
    }

    for (int i = 0; i < num-1; i++)
    {
        int minindex = i;
        for (int j = i+1; j < num ; j++){
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }}
         swap(arr[i],arr[minindex]);
    }
    
      for (int i = 0; i < num; i++)
    {
        cout << arr[i] <<endl;
    }

    return 0;
    
}