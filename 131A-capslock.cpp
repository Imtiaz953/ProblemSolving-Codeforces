// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int i;
//     string s1;
//     cin>>s1;
// // if(s1[0]>=97 &&s1[0]<=122){
// //     s1[0]= s1[0]-97+'A';
// // }
//     for(i=0;i<s1.length();i++){
//         if(s1[0]>=97 &&s1[0]<=122){
//     s1[0]= s1[0]-97+'A';
// }

//         if(s1[i]>=65 &&s1[i]<=90){
//             s1[i]=s1[i]-65+'a';

//         }

//     }
//     cout<<s1;
// }
 #include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    bool change = true;
    for (size_t i = 1; i < s.length(); ++i)
    {
        if (s[i] >= 'a')
        {
            change = false;
            break;
        }
    }

    if (change)
    {
        for (size_t i = 0; i < s.length(); ++i)
        {
            if (s[i] >= 'a')
            {
                s[i] -= ('a' - 'A');
            }
            else
            {
                s[i] += ('a' - 'A');
            }
        }
    }

    cout << s << endl;
    return 0;
}