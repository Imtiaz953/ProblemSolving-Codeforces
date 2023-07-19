#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int div,left;
    for(int i=0;i<k;i++){
        div=n%10;
        if(div==0){
            n=n/10;
        }
        else{
            n=n-1;
        }
    }
    cout<<n;
}