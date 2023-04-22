#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 5;
    int *p = &a;
    cout << sizeof(p) << endl;
    cout << a << endl;
    cout << *p << endl;
    cout << p << endl;
    int(*p1) = p;

    cout << *p1 << endl;
    // a++;
    // cout << a << endl;
    // (*p)++;
    // cout << *p << endl;
    // p++;
    // cout << p << endl;
}