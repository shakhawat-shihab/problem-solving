#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int ans=0;
    int cnt=2;
    while(cnt--){
        if(a>=b){
            ans+=a;
            a--;
        }
        else{
            ans+=b;
            b--;
        }
    }
    cout<<ans<<endl;
    return 0;
}