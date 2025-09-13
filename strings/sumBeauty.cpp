#include <bits/stdc++.h>
using namespace std;

int maxfreq(vector<int>freq){
    int maxi = freq[0];
    for (int i = 0; i < freq.size();i++){
        if(freq[i]>maxi){
        maxi = freq[i];}
    }
    return maxi;
}
int minfreq(vector<int>freq){
    int mini = INT_MAX;
    for (int i = 0; i < freq.size();i++){
        if(freq[i]<mini&&freq[i]>0){
            mini = freq[i];
        }
    }
    return mini;
}
int handler(string s){
    int ans = 0;
    int n = s.size();
    vector<int> freq(26, 0);
    for (int i=0;i<n;i++){
        for (int j = i; j < n;j++){
            freq[s[j] - 'a']++; 
            ans += maxfreq(freq) - minfreq(freq);
        }
           
            fill(freq.begin(), freq.end(), 0);
    }
    return ans;
}
int main(){
    string s= "aabcb";
   cout<< handler(s);
    return 0;
}