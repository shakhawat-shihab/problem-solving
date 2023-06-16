#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int mn=INT_MAX;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        mn=min(mn,x);
        if(i%k==0){
            cout<<mn<<" ";
            mn=INT_MAX;
        }
    }
    if(mn!=INT_MAX){
        cout<<mn<<" ";
    }
    cout<<endl;
    return 0;
}