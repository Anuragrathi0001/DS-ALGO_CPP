// A
// AB
// ABC
// ABCD
#include <iostream>
using namespace std;
void pattern(int num)
{
    for (int i = 1; i <= num; i++)
    {
        // for the num 
        int character = 65;
        
        for (int j = 1; j <= i; j++)
        {
            cout << char(character);
character+=1;
           
        }
        cout << endl;
}
}
int main()
{

    int num;
    cout << "enter the num";
    cin >> num;
    pattern(num);
    return 0;
}