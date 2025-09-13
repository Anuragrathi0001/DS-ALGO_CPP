#include <bits/stdc++.h>
using namespace std;
vector<string> sortsent(string sentence) {
    vector<string> ans(10, ""); 
    string temp = "";
    for (int i = 0; i < sentence.size(); i++) {
        if (isdigit(sentence[i])) {  
            int ind = sentence[i] - '1'; 
            ans[ind] = temp;             
            temp = "";
        } 
        else if (sentence[i] != ' ') {
            temp += sentence[i];
        } 
        else {
            temp += sentence[i];
        }
    }
    return ans;
}
int main() {
    string sentence = "is2 sentence4 this1 a3";
    vector<string> ans = sortsent(sentence);

    for (auto &it : ans) {
        if (!it.empty()) cout << it << " ";
    }
    return 0;
}
