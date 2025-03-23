// 1
// 01
// 101
// 0101
// 10101
#include <iostream>
using namespace std;
void printpat(int num)
{ int start = 1;
    for (int i = 0;i<num;i++){
       if(i%2==0){
           start = 1;
       }else{
           start = 0;
       }
        for (int j = 0; j<=i; j++)
        {

            cout << start;
            start = 1 - start;
        }

        cout << endl;
    }
}
int main()
{
    int num;
    cout << "Enter the num\n";
    cin >> num;
    printpat(num);
    return 0;
}