#include <bits/stdc++.h>
using namespace std;
class st{
    queue<int> q;
 public:  void push(int x){
        int s = q.size();
        q.push(x);
        for (int i = 0; i < s;i++){
            q.push(q.front());
            q.pop();
        }
    }
  public: void pop(){
          q.pop();
  }  
  public:
      int peek() { return q.front(); }
};
int main(){
    st s;
    s.push(2);
    s.push(3);
    s.push(5);
    s.pop();
    s.pop();
  cout<<  s.peek();

    return 0;
}