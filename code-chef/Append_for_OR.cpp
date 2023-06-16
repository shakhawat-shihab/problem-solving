#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,y;
        cin>>n>>y;
        long long sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum=sum|x;
        }
        int ans=sum^y;
        if((ans|sum)==y){
            cout<<ans<<endl;
            continue;
        }
        cout<<-1<<endl;

    }
    return 0;
}