#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> a, pair<int,int> b){
    double r1 = (double)a.first / a.second;
    double r2 = (double)b.first / b.second;
    return r1 > r2; // descending order
}

double calmaxprofit(vector<pair<int,int>> arr, int weight){
    sort(arr.begin(), arr.end(), comp);

    double maxprofit = 0.0;
    int w = weight;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i].second <= w){
            w -= arr[i].second;
            maxprofit += arr[i].first;
        } else {
            maxprofit += ((double)arr[i].first / arr[i].second) * w;
            break;
        }
    }
    return maxprofit;
}

int main(){
    vector<pair<int,int>> arr = {{100,20},{60,10},{100,50},{200,50}};
    cout << calmaxprofit(arr, 90);
    return 0;
}
