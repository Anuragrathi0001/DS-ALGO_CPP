#include <bits/stdc++.h>
using namespace std;
void revLeftOne(int arr[],int num){
    int temp = arr[0];
    for (int i = 0; i < num; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[num - 1] = temp;
}
int main(){
    int num;
    cout<<"enter the num";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cout << "enter the element:";
        cin >> arr[i];
    }
    revLeftOne(arr, num);
for (int i = 0; i < num; i++)
{
    cout << arr[i];
}

    return 0;
}