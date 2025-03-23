// 1******1
// 12****21
// 123**321
// 12344321
#include <iostream>
using namespace std;
void pattern(int num){
for (int i=1;i<=num;i++)
{
    //for the num
    for (int j=1;j<=i;j++)
    {
        cout << j;
    }
    //for the space
    for (int j = 0; j <2*num-2*i; j++)
    {
        cout << " ";
    }
    // for the num
    for (int j = i; j>=1; j--)
    {
        cout << j;
    }
    cout << endl;
}

}
int main(){

int num;
cout << "enter the num";
cin>>num;
pattern(num);
return 0;
}