#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int c=__builtin_popcount(a^b);
    if(c%2==0) 
        cout<<c/2;
    else
        cout<<-1;
}
