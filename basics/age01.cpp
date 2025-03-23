#include <iostream>
using namespace std;
int main(){
    int age;
    cout << "enter your age\n";
    cin >> age;
    if(age>=18){
        cout << "you are an adult as you are "<<age;
    }
    else{
        cout << "grow more";
    }
    return 0;
}