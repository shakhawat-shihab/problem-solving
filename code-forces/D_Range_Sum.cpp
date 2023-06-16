#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long l,r;
        cin>>l>>r;
        if(r>=l){
            l=l-1;
        }
        else{
            r=r-1;
        }
        
        long long sumL=(l*l+l)/2;
        long long  sumR=(r*r+r)/2;
        if(sumR>=sumL)
            cout<<sumR-sumL<<endl;
        else
           cout<<sumL-sumR<<endl; 
        // long long ans=0;
        // for(int i=l;i<=r;i++){
        //     ans+=i;
        // }
        // cout<<ans<<endl;
    }
    return 0;
}