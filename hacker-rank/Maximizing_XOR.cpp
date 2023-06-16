#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,r;
    cin>>l>>r;
    int mx=0;
    for(int i=l;i<=r;i++){
        for(int j=i+1;j<=r;j++){
            int res=i^j;
            mx=max(mx,res);
        }
    }
    cout<<mx<<endl;
    return 0;
}