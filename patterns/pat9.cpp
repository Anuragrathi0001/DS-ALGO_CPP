// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
// for  spaces
#include <iostream>
using namespace std;
 void printpat(int num){
    for (int i = 0; i < num; i++)
    {
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < num-1; i++)
    {
        for (int j=num-1;j>i;j--)
        {
            cout << "*";
        }
        cout << endl;
    }
 }
int main(){
    int num;
    cout << "Enter the num\n";
    cin >> num;
    printpat(num);
    return 0;
}