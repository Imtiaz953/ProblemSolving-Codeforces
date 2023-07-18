#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    char s[100];
    gets(s);
    int i;
    int l=strlen(s);

    for(i=0;i<l;i++){
        if(s[i]>='A'&& s[i]<=90){
            s[i]=s[i]-'A'+97;
        }

    }
    char ch;
    for(i=0;i<l;i++){
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='y'){
     continue;
            
        }
        else{
            cout<<"."<<s[i];
        }
    }
}