#include <bits/stdc++.h>
using namespace std;
int findnum(int arr[]){
     for (int  i = arr[0]; i < arr[4]; i++)
    {
     if(i!=arr[i]){
         return i;
     }
    }
}
int main(){
    int arr[5] = {1, 2, 4, 5};
 cout<< findnum(arr);

    return 0;
}