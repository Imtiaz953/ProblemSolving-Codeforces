#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,easy=0;
    cin>>n;
   for(j=0;j<n;j++){
        cin>>i;
        if(i==0){
           easy+=1;
        }
        else{
            easy-=1;
        }
    }
    if(easy==n){
        cout<<"EASY";
    }
    else{
        cout<<"HARD";
    }

}