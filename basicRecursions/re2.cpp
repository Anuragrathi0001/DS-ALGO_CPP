#include <bits/stdc++.h>
using namespace std;

int rec()
{ int count = 0;
   if(count==3){
       exit(0);
   }
    cout << 1;
    rec();
}
int main()
{
    rec();
    return 0;
}
