#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p,i;
    cin >> n;
  int f[n];
    for ( i = 1; i <= n; i++)
    {
        cin >> p;
        f[p] = i;
    }
    //cout << f[1];
    for ( i = 1; i <= n; i++)
    {
        cout << f[i]<<" ";
    }
    cout << endl;
    return 0;
}