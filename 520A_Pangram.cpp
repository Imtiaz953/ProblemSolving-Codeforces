#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<char> input;
    while(n>0){
        char c;
        cin>>c;
        input.insert(tolower(c));
        n--;
    }
    if(input.size()==26)
     cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
