#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,j,sum=0,coin=0,ans=0;
    while(cin>>n){
        long long a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        sum=sum/2;
        sort(a,a+n);
        for(i=n-1;i>=0;i--){
            ans+=a[i];
            coin++;
            if(ans>sum)
                break;
        }
        cout<<coin<<endl;
    }
    return 0;
}