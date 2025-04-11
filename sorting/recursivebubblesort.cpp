#include <bits/stdc++.h>
using namespace std;
void recursivebubble(int arr[],int endIndex){
if(endIndex==0){
    return;
}
for (int i = 0; i < endIndex; i++)
{
    if(arr[i]>arr[i+1]){
        swap(arr[i], arr[i + 1]);
    }
}
recursivebubble(arr, endIndex - 1);
}
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
    recursivebubble(arr, num - 1);
    for (int i = 0; i < num; i++)
    {
        cout << arr[i];
    }
    

    return 0;
}