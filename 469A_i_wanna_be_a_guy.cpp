#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[250];
    int n , p , q;
    cin >> n >> p;
    int count = 0;

    for(int i =  0 ; i < p ; i++){
        cin >> array[i];
    }
    cin >> q;
    for(int i = p ; i < p + q ; i++){
        cin >> array[i];
    }

    //sort(array , array+(p+q));
    for(int j=1;j<=n;j++){

    for(int i = 0 ; i < p+q ; i++){
        if(j== array[i]){
            count++;
            break;
        }
    }
    }

    if(n == (count)){
        cout << "I become the guy." <<endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
