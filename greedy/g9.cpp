#include<bits/stdc++.h>
using namespace std;
bool yesorno(vector<int>arr){
    int maxlen = 0;
    for (int i = 0; i < arr.size();i++){
        maxlen += arr[i];
        if(maxlen>=arr.size()){
            return true;
        }
        else if(i>maxlen){
            return false;
        }
    }
    return true;
}
int main(){
    vector<int> arr = {2, 2, 1, 0, 4};
    cout<<yesorno(arr);
    return 0;
}