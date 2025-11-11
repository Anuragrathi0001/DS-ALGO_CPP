#include<bits/stdc++.h>
using namespace std;
int findnumstrwthreechars(string str){
    int count = 0;
    int a = -1, b = -1, c = -1;
    for (int i = 0; i <str.length(); i++)
    { switch(str[i]){
        case 'a':
            a = i;
            break;
        case 'b':
            b = i;
            break;
        case 'c':
            c = i;
            break;
    }
        if(a!=-1&&b!=-1&&c!=-1){
            int fs = min(a, min(b, c));
            count = count + fs + 1;
        }
    }
    return count;
}
int main(){
    string str = "bbacba";
    cout<<findnumstrwthreechars(str);
    return 0;
}