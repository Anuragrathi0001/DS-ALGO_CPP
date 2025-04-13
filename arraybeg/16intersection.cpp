#include <bits/stdc++.h>
using namespace std;
void intersection(int arr1[],int arr2[]){
    vector<int> vec;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; i < 7; i++)
        {
            if(arr1[i]==arr2[j]){
                vec.emplace_back(arr1[i]);
            }
        }
        
    }
    for (auto it:vec)
    {
        cout << it;
    }
    
    
}
int maain(){
 int arr1[8] = {1, 2, 2, 3, 3, 4, 5, 6};
 int arr2[7] = {2, 3, 3, 5, 6, 6, 7};
 intersection(arr1, arr2);

 return 0;
}