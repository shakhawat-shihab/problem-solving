#include <bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long ans=1;

        if(k==1){
            cout<<k<<endl;
            continue;
        }


        if(k>n){
            ans=1;
            for(int i=1;i<=n;i++){
                ans=(ans*k)%mod;
                k--;
            }
        }
        else{
            int range=k;
            for(int i=1;i<=range;i++){
                ans=(ans*k)%mod;
                k--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}