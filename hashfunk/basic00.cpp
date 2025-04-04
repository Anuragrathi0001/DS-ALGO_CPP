#include <bits/stdc++.h>
using namespace std;
    int countocourence(int n,int arr[],int num){
        int count=0;
        for (int i = 0; i < num; i++)
        {
            if(n==arr[i]){
                count += 1;
            }
        }
        return count;
        }


int main(){
    int num,n;
    cout << "enter the nuber of element:";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cout << "enter the element " << i << ":";
        cin >> arr[i];
    }
    cout << "enter the number:";
    cin >> n;
   cout<< countocourence(n, arr,num);
    return 0;
}