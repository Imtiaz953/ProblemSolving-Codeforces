#include<bits/stdc++.h>
//#include<string>
using namespace std;
int main(){
char s[1000];
    int i;
  gets(s);
   int l= strlen (s);
  for(i=0;i<l;i++){
    if(s[0]>='a'&& s[0]<='z'){
        s[0]=s[0]-'a'+'A';

    }


  }
  cout<<s;

}
