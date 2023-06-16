#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n,0);
        vector<int>brr(n,0);
        vector<pair<int,int>>vc;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            vc.push_back({arr[i], i});
        }
        sort(vc.begin(),vc.end());

        for(int i=0;i<n;i++){
            cin>>brr[i];
        }
        sort(brr.begin(),brr.end());
        
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            ans[vc[i].second]=brr[i];
        }

        for(auto val:ans){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}