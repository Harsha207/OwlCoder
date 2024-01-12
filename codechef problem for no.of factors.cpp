#include<bits/stdc++.h>
using namespace std;
long long n=1e6+1;
vector<long long> primes(n);
void sieve(){
    for(int i=0;i<=n;i++){
        primes[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(primes[i]==i){
            for(int j=2*i;j<=n;j+=i) primes[j]=i;
        }
    }
}
int main(){
    sieve();
    int t;
    cin>>t;
    while(t--){
        map<int,int>mp;
        ll ans=1;
        int m,t;
        cin>>m;
        for(int i=0;i<m;i++){
            cin>>t;
            while(t!=1){
                mp[primes[t]]++;
                t=t/primes[t];
            }
        }
        for(auto it:mp){
            ans*=(it.second+1);
        }
        cout<<ans<<"\n";
    }
}
