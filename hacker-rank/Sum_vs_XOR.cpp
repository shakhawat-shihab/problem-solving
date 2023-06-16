#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long cnt=0;
    while(n!=0){
        if((n & 1)==0){
            cnt++;
        }
        n=n>>1;
    }
    
    long long ans=1;
    for(int i=1;i<=cnt;i++){
        ans*=2;
    }
    // cout<<pow(2,cnt)<<endl;
    cout<<ans<<endl;
    
    return 0;
}