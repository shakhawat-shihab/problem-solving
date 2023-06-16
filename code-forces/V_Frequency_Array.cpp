#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>ans(m+1,0);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x<=m){
            ans[x]++;
        }
    }

    for(int i=1;i<=m;i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}