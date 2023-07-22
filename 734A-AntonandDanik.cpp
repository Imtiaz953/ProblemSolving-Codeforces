#include<bits/stdc++.h>
using namespace std;

int main(){
int n,i;
char ch;
int Anton=0,Danik=0;
cin>>n;
for(i=0;i<n;i++){
    cin>>ch;
    if(ch=='A'){
        Anton++;
    }
    else{
        Danik++;
    }
}
if(Anton>Danik){
    cout<<"Anton";
}
else if (Anton<Danik){
    cout<<"Danik";
}
else{
    cout<<"Friendship";
}

}