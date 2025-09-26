#include <bits/stdc++.h>
using namespace std;
 void revstr(int arr[],int num){
     int start = 0;
     int end = num - 1;
     while (start<end){
         swap(arr[start], arr[end]);
         start++;
         end--;
        }
     for (int j = 0; j < num; j++)
     {
   cout << arr[j] << " ";
}
 }

int main()
{
    int arr[5] = { 1, 3, 4, 5, 6 };
    revstr(arr, 5);
    return 0;
}