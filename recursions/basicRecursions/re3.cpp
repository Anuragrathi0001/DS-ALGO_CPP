//print name 5 times by recursion
#include <bits/stdc++.h>
using namespace std;
 void printname(int num){
    if(num<1)
        return;
     cout << "anurag ";
     printname(num - 1);
}
int main(){
    printname(5);

    return 0;
}