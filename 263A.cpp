#include<iostream>
 #include<cmath>
 using namespace std;
 int main()
 {

     int a[5][5];

     int i,j,x,y;

     for (i=0; i<5;i++){
        for( j=0; j<5; j++){
            cin>> a[i][j];
        }
     }


     for (i=0; i<5;i++)
         for( j=0; j<5; j++)
             if ( a[i][j]==1){ x=i; y=j;}



     cout<<(abs(x-2)+abs(y-2));

     return 0;
 }