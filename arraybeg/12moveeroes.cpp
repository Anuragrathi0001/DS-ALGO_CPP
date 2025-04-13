#include <bits/stdc++.h>
using namespace std;
void removezeroes(int arr[],int num){
    vector<int> vec;
    for (int i = 0; i < num; i++)
    {
        if (arr[i] != 0)
        {
            vec.emplace_back(arr[i]);
        }
}
for (int i = 0; i < vec.size(); i++)
{
    arr[i] = vec[i];
}
for (int i = vec.size(); i <num ; i++)
{
    arr[i] = 0;
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