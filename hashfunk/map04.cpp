#include <bits/stdc++.h>
using namespace std;
int main(){
    //array input
    int num;
    cout << "Enter the number of elements: ";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cout << "enter the element " << i << " :";
        cin >> arr[i];
    }
    //hash funk
    map<int, int> mpp;
    for (int i = 0; i < num; i++)
    {
        mpp[arr[i]]++;
    }

    //output of the hash function 
    for(auto it: mpp){
        cout << it.first << "-->" << it.second <<endl;
    }

    return 0;
}