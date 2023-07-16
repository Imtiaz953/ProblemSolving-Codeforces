#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;   
int arr[3],sum=0,out=0;
for(j=0;j<n;j++){
    for(i=0;i<3;i++){
        cin>>arr[i];
    }
    for(i=0;i<3;i++){
        if(arr[i]==1){
            sum+=1;
        }
    }

    if(sum>=2){
        out+=1;
    }
        
     sum=0;   
    
}
cout<<out;
}