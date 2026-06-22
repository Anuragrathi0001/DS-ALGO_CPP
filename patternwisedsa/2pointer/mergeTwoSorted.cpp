#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    vector<int> arr2 = {2, 3, 4, 5, 6, 7};
    vector<int> ans;
    set<int> st;
    for(auto it :arr1){
        st.insert(it);
    }
    for(auto it :arr2){
        st.insert(it);
    }
    for(auto it:st){
        ans.push_back(it);
    }
    for(auto it:ans){
        cout << it;
    }
}