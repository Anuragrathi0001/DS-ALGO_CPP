//*******/ 
// *****
//  ***
//   *
#include <iostream>
using namespace std;
void pattern(int num)
{
    for (int i = 0; i <=num; i++)
    {//for  spaces
        for (int j=0;j<i;j++)
        {
            cout << " ";
        }
        //for stars
        for (int j = 0; j < 2 * num - (2 * i - 1);j++){
            cout << "*";
        }
        // for  spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
            cout << endl;
    }
}
int main()
{
    int num;
    cout << "enter the num \n ";
    cin >> num;
    pattern(num);
    return 0;
}