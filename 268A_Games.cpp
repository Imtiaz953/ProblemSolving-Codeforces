#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin >> n;

    int number=0;
    int a[n],h[n];
    for ( i = 0; i < n; ++i)
    {
        cin >> h[i] >> a[i];
        
    }
    for(i=0;i<n;i++){ 
    for ( j = 0; j < n; j++)
        {
            if (h[i] == a[j])
            {
                number += 1;
            }
           
        }
    }

    cout << number << endl;
    return 0;
}