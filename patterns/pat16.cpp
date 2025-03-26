#include <iostream>
using namespace std;
void printprt(int num){

    for (int i = 0; i < num; i++)
    {
        //the spaces
        for (int j = 0; j<num-i-1; j++)
        {
            cout << "_";
        }
            int alpha = 65;
            int breaki = (2 * i + 1) / 2;
            // the characters
            for (int j = 0; j < 2 * i + 1; j++)
            {
                if (j <breaki)
                    cout << char(alpha++);
                else
                    cout << char(alpha--);
        }

        // the spaces
        for (int j = 0; j < num - i - 1; j++)
        {
            cout << "_";
        }
        cout << endl;
    }
    
}
int main(){
    int num;
    cout << "enter the num";
    cin >> num;
    printprt(num);

    return 0;
}