#include<bits/stdc++.h>
using namespace std;
int findcountsubstrcontainningthreecharacters(string str){
      int count = 0;
    for (int i = 0; i < str.length(); i++) { 
        vector<int> mpp(3,0); 
         for (int j = i; j < str.length(); j++)  {
            mpp[str[j] - 'a']++;
            if (mpp[0] + mpp[1] + mpp[2] == 3)
            {
                count++;
            }
     }
    }
    return count;
}
int main(){
    string str = "bbacba";
    
     cout<<findcountsubstrcontainningthreecharacters(str);
    return 0;
}