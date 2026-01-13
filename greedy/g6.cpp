#include <bits/stdc++.h>
using namespace std;
int assigncookier(vector<int>greed,vector<int>s){
    int count = 0;
    int i = 0, j = 0;
    sort(greed.begin(), greed.end());
    sort(s.begin(), s.end());
    for (j; j < s.size(); j++)
    {
        if(s[j]>=greed[i]){
            count++;
            i++;
        }
    }
    return count;
}
int main(){
    vector < int >greed= {1, 5, 3, 3, 4};
    vector<int> s = {4, 2, 1, 2, 1, 3};
    cout<<assigncookier(greed, s);
    return 0;
}