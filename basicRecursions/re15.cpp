#include <bits/stdc++.h>
using namespace std;
void revarr(int i,int num, int arr[])
{
    if (i>= num/2)
        return;
        swap(arr[i], arr[num-1-i]);
        revarr(i+1,num,arr);
}

int main()
{
    int num = 5;
    int arr[5] = {1, 3, 4, 5, 6};
    revarr(0,num,arr);
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}