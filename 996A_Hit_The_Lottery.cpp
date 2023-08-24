#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,bill=0;
    cin>>n;
    int arr[5]={100,20,10,5,1};
    for(i=0;i<5;i++){
        bill+=n/arr[i];
        n=n%arr[i];
    }
    cout<<bill;

}