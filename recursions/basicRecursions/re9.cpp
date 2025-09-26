// rotate an array
#include <bits/stdc++.h>
using namespace std;
int rotaete(int n ,int arr[])
{
    for (int i = 0; i < (n); i++)
    {
        int temp = arr[i];
        arr[i] = arr[n];
        arr[n]= temp;
        i++;
        n--;
    }
    
}
int main()
{
    int num;
    cout << "enter the value of num"; 
     int arr[num];
   for (int i = 0; i < num; i++)
   {
       cout << "enter the element" << i + 1;
       cin >> arr[i];
   }
   rotaete(num, arr);

   return 0;
}