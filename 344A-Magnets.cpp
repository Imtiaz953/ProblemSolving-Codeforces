#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,i,mg=0;
    cin>>n;
   long long a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]==a[i+1]){
            mg+=1;
        }
    }
    cout<<mg;

}