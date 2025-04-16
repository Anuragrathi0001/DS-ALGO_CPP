#include <bits/stdc++.h>
using namespace std;
int one(int arr[], int num){
 
    for (int i = 0; i < num; i++)
    {   int count = 0;
        for (int j = 0; j < num; j++)
        {if(arr[i]==arr[j]){
                count += 1;
        }
        }
        if(count!=2){
            return arr[i];
        }
       
}
 return -1;
}

 int main()
{
    int arr[5] = {1, 1, 2, 2, 3};
  cout<<  one(arr, 5);
    return 0;
}