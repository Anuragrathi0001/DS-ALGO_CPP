

#include <iostream>
 using namespace std;
void printprt(int num)
{
    for (int i = 0; i < num; i++)
    {
        //star1
        for (int j = 0; j <num-i; j++)
        {
            cout << " * ";
        }
        //spaces
        for (int j = 0; j < 2*i; j++)
        {
            cout << "   ";
        }
        //star2
        for (int j = 0; j < num-i; j++)
        {
            cout << " * ";
        } 
        cout << endl;
    }
    
    for (int i = 0; i < num; i++)
    {
        //star3
        for (int j = 0; j <=i; j++)
        {
            cout << " * ";
        }
    
        //spaces
        for (int j = 0; j < 2 * num - 2 * (i+1);j++)
        {
            cout<< "   ";
        }
        //star 4
        for (int j = 0; j <= i; j++)
        {
            cout << " * ";
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