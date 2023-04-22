#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch[8] = "aashish";
    char *p = ch;
    char *q = p;
    cout << p << endl;
    cout << p[0] << endl;
    cout << *p << endl;
    cout << ch << endl;
    cout << ch[0] << endl;
    cout << &ch[0] << endl;
    cout << &p[0] << endl;
    cout << &p << endl;
    cout << &ch << endl;
}