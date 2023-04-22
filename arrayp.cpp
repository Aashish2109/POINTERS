#include <bits/stdc++.h>
using namespace std;

void update(int *p)
{
    // p = p + 1;
    *p = *p + 1;
    // cout << sizeof(p);
    //  cout << *p << endl;
}

int main()
{
    int arr[10] = {1, 2};
    int *p = arr;
    // cout << p << endl;
    // cout << *p << endl;
    // cout << arr << endl;
    // cout << &arr << endl;
    // cout << &arr[0] << endl;
    // cout << arr[0] << endl;
    // p = p + 1;
    // cout << p << endl;
    // cout << *p << endl;
    cout << "Before--> " << *p << endl;
    update(p);
    cout << "After--> " << *p << endl;
}