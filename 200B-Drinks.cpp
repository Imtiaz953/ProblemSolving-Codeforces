#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p,i;
    double sum=0,percent;
    
    cin>>n;
    for(i=0;i<n;i++){
        cin>>p;
        sum+=p;
    }
   percent=sum/n;
    cout<<fixed<<setprecision(10)<<percent;


}