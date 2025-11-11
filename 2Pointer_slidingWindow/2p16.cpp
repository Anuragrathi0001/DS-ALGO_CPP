#include<bits/stdc++.h>
using namespace std;
int findnumstrwthreechars(string str){
    int count = 0;
    int a = -1, b = -1, c = -1;
    for (int i = 0; i <str.length(); i++)
    { switch(str[i]){
        case 'a':
            a = i;
        case 'b':
            b = i;
        case 'c':
            c = i;
    }
        if(a!=-1&&b!=-1&&c!=-1){
            int fs = (a < b && a < c) ? a : (b < a && b < c) ? b:c;
            int ls = (a > b && a > c) ? a : (b > a && b > c) ? b:c;
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