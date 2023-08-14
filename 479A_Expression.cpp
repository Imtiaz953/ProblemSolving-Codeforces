#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,sum,sum1,sum2,sum3,sum4,sum5;
    cin>>a>>b>>c;
     sum=a+b+c;
    sum1=a+(b*c);
    sum2=a*(b+c);
    sum3=a*b*c;
    sum4=(a+b)*c;
   
    sum5=(a*b)+c;
    

    sum=max(sum,sum1);
    sum=max(sum,sum2);
    sum=max(sum,sum3);
    sum=max(sum,sum4);
    sum=max(sum,sum5);

   cout<< sum;

}