#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  n,i;
int Icosahedron(20),Cube(6),Tetrahedron(4),Dodecahedron(12),Octahedron(8),faces(0);
    cin>>n;
    for(i=0;i<n;i++){
        string s;
        cin>>s;
          if (s == "Dodecahedron") {
            faces += Dodecahedron;
        } else if (s == "Icosahedron") {
            faces += Icosahedron;
        } else if (s == "Octahedron") {
            faces += Octahedron;
        } else if (s == "Cube") {
            faces += Cube;
        } else if (s == "Tetrahedron") {
            faces += Tetrahedron;
        }
    }
cout<<faces;
}