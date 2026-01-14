#include<bits/stdc++.h>
using namespace std;
int calavg(vector<int>bt){
    sort(bt.begin(), bt.end());
    int sum = 0;
    int prev = 0;
    for (int i = 0; i < bt.size();i++){
        sum = sum + prev;
        prev = prev+bt[i];
    }
    return sum / bt.size();
}
int main(){
    vector<int> bt = {4, 3, 7, 1, 2};
    cout<<calavg(bt);

    return 0;
}