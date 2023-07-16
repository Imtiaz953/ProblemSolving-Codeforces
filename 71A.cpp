#include <iostream>
#include<cstring>
using namespace std;
int main(){
   int i;
   cin>>i;
   for (int j = 0; j <= i; j++)
   {
     string str;
   getline(cin,str);
   int n=str.size();
   if (n>10){
    cout<< str[0]<<n-2<<str[n-1]<<endl;
   }
   else{
    cout<<str<<endl;
   }  
   }
   return 0;
}
