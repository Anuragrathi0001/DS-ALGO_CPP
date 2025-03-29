#include <bits/stdc++.h>
using namespace std;

void understandingpair()
{
   // First pair declaration
    pair<int, int> p1 = {1, 3};
    cout << p1.first << " and " << p1.second << " are the values respectively" << endl;

    // Second pair declaration (pair of pairs)
    pair<int, pair<int, int>> p2 = {3, {3, 4}};
    cout << "First value of pair2: " << p2.first << ", Second value of pair2: "
    << p2.second.first << ", " << p2.second.second << endl;

    // Array of pairs
    pair<int, int> arr[3] = {{1, 2}, {4, 5}, {7, 8}};
    cout << "First value of second pair in array: " << arr[1].first << endl;

}
void explaining_vectors(){
    // vector<int> vec = {1, 3, 4};
    // cout << vec[2];


    //ways to insert
    // vec.emplace_back(5);
    // vec.push_back(9);
    //print vector
    // for (int i = 0; i <vec.size() ; i++)
    // {
    //     cout << vec[i] <<" ";
    // }


    //iterators
    // vector<int>::iterator it = vec.begin();
    // for (it; it <vec.end() ; it++)
    // {
    //     cout << *(it);
    // }
//swapping two vectors
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2 = {4, 5, 6};
   for(int val1:vec1)
       cout << val1<<"is the vector 1";
       for(int val2:vec2)
           cout << val2 << "is the vector 2";

    vec1.swap(vec2);
    for (int val1 : vec1)
        cout << val1 << "is the vector 1";
    for (int val2 : vec2)
        cout << val2 << "is the vector 2";
}
void explain_list(){
    list<int> ls;
    ls.emplace_back(1);
    ls.emplace_front(2);
    list<int>::iterator it = ls.begin();
    for (  it; it!=ls.end(); it++)
    {
        cout << *(it);
    }
    
}
int main()
{
    // understandingpair();
    // explaining_vectors();
    explain_list();

    return 0;
}
