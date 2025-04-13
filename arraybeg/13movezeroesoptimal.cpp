#include <bits/stdc++.h>
using namespace std;
void removezeroes(int arr[],int num){
    int j = -1;
    for (int i = 0; i < num; i++)
    {
        if(arr[i]==0){
            j = i;
            break;
        }
    }
for (int i = j+1; i < num; i++)
{
    if(arr[i]!=0){
        swap(arr[i], arr[j]);
        j++;
    }
}
    


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
    removezeroes(arr,num);
    for (int i = 0; i < num; i++)
    {
    cout << arr[i];
    }
   

    return 0;
}