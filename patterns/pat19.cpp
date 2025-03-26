

#include <iostream>
using namespace std;
void printprt(int num)
{

    for (int  i = 0; i < num; i++)
    {
        //star
        for (int j = 0; j < i+1; j++)
        {
            cout <<"*";
        }
        //space
        for (int j = 0; j < 2*num-2*i-i; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j < i + 1; j++)
        {
            cout <<"*";
        }
        cout << endl;
    }
   
}
int main()
{
    int num;
    cout << "enter the num";
    cin >> num;
    printprt(num);

    return 0;
}