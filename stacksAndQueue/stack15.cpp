#include<bits/stdc++.h>
using namespace std;
vector<int> nxtgreater2(vector<int>arr){
    vector<int> ans;
    stack<int> st;
    for (int i = 2 * arr.size() - 1; i >= 0;i--){
        while(!st.empty()&&st.top()<=arr[i%arr.size()]){
            st.pop();
        }
        if(i<arr.size()){
            ans[i] = st.empty() ? -1 : st.top();
        }
        st.push(arr[i % arr.size()]);
    }
    return ans;
}
int main(){
    vector<int>arr = {2, 10, 12, 1, 11};
    vector<int>ans=  nxtgreater2(arr);
        for(auto it:ans){
            cout << it;
                        }
    return 0;
}