#include <bits/stdc++.h>
using namespace std;
int removeduplicates(int arr[],int num){
    set < int>st;
   int index = 0;
    for (int i = 0; i < num; i++)
    {
        st.insert(arr[i]);
    }
    for(auto it:st){
        arr[index] = it;
        index++;
    }
    return st.size();
}
int main(){
    int num;
    cout << "Enter the num of elements array";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num;i++){
        cout << "Enter the Element " << i << " :";
        cin >> arr[i];
    }
   cout<< removeduplicates(arr, num)<<endl;
    for (int i = 0; i < num; i++)
    {
        cout << arr[i];
    }
 

    return 0;
}