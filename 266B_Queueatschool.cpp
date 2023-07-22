#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t,i,J;
    cin>>n>>t;
    string ch;
   
    cin>>ch;
    for(J=0;J<t;J++){
        
            for(i=0;i<n;i++){
                if(ch[i]=='B'&&ch[i+1]=='G'){
                ch[i]='G';
                ch[i+1]='B';
                i++;
            }
        }
        
    }
    cout<<ch;
}