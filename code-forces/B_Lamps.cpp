#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,priority_queue<int>>mp;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            mp[x].push(y);
        }

        long long ans=0;
        for(auto it:mp){
            int ai=it.first;
            priority_queue<int> pq=it.second;
            while(!pq.empty() && ai){
                ans+= pq.top();
                pq.pop();
                ai--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}