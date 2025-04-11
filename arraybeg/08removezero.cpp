#include <bits/stdc++.h>
using namespace std;

void removezeroes(int arr[],int num){
    int zeroes = 0;
    vector<int> vec;
    for (int i = 0; i < num; i++)
    {
        if (arr[i] == 0)
        {
            zeroes++;
        }
        else{
            vec.emplace_back(arr[i]);
        }
       int index = 0;
        for(auto it:vec){
            arr[index] = it;
            index++;
        }
        for (int i = num - zeroes+1; i < num;i++){
            arr[i] = 0;
        }
}

}
int main(){
    int num = 7;
    int arr[7] = {1, 2, 0, 3, 0, 2, 0};
    removezeroes(arr, num);
for (int i = 0; i < 7; i++)
{
    cout << arr[i];
}

    return 0;}