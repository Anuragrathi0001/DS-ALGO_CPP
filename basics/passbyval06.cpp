#include <iostream>
using namespace std;
int increment(int num){
    num += 1;
    return num;
}
int main(){
    int num;
    cout << "enter the number\n";
    cin >> num;
    cout << "value of num before operation is "<<num <<endl;
    cout <<increment(num)<<"is the value inside the funk\n";
    cout << "value of num after operation is "<< num<<endl;

    return 0;
}