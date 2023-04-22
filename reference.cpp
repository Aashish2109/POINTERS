#include <bits/stdc++.h>
using namespace std;

void update(int n)
{

    n++;
    cout << sizeof(n);
}

void update1(int &n)
{
    n++;
    cout << sizeof(n);
}

int main()
{
    int i = 0;
    int &j = i;
    cout << j << endl;
    // cout << j << endl;
    cout << "Before " << i << endl;
    update(i);
    cout << "After " << i << endl;
    cout << endl;
    cout << "Before " << i << endl;
    update1(i);
    cout << "After " << i << endl;
}