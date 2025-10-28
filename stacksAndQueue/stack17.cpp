#include<bits/stdc++.h>
using namespace std;
vector<int>nearestsmallerELminleft(vector<int>arr){
    vector<int> ans(arr.size(), -1);
    stack<int> st;
    for (int i = 0;i<arr.size();i++){
        while(!st.empty()&&arr[i]<=st.top()){
            st.pop();
        }
        ans[i] = st.empty()?-1:st.top();

        st.push(arr[i]);
    }
    return ans;
}
int main(){
    vector<int> arr = {4, 5, 2, 1, 0, 8};
 vector<int>ans=   nearestsmallerELminleft(arr);
 for(auto it :ans){
     cout << it << " ";
 }
    return 0;
}