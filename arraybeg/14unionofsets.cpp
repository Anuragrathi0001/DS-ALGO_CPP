#include <bits/stdc++.h>
using namespace std;
void unionarr(int arr[],int arr2[]){
    set<int> st;
    for (int i = 0; i < 4;i++){
        st.insert(arr[i]);
    }
    for (int i = 0; i < 7;i++){
        st.insert(arr2[i]);
    }
    int unionarr[11];
    int index = 0;
    for(auto it:st){
unionarr[index]=it;
index++;
    }
    for (int i = 0; i < 11; i++)
    {
       cout<< unionarr[i];
    }
    

}
int main(){
    int arr[4] = {1, 2, 3, 4};
    int arr2[7] = {2, 4, 6, 7, 8, 9, 1};


    return 0;
}