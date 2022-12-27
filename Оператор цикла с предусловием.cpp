#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s = 0;
    cin >> n;
    bool b = false;
    while(n){
        s *= 10;
        s += n % 10;
        n /= 10;
    }
    cout << s;
    return 0;
}