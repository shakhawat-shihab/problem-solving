#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int mx=0;
        int x;

        unordered_map<int,int>mp1,tp1;
        int prvs=-1;
        for(int i=0;i<n;i++){
            cin>>x;
            tp1[x]++;
            if(x!=prvs && i!=0 ){
                mp1[prvs]=max(mp1[prvs],tp1[prvs]);
                mx=max(mp1[prvs],mx);
                tp1[prvs]=0;
            }
            prvs=x;
        }
        mp1[x]=max(mp1[x],tp1[x]);
        mx=max(mp1[x],mx);
       

        unordered_map<int,int>mp2,tp2;
        prvs=-1;
        for(int i=0;i<n;i++){
            cin>>x;
            tp2[x]++;
            if(x!=prvs && i!=0 ){
                mp2[prvs]=max(mp2[prvs],tp2[prvs]+mp1[prvs]);
                mx=max(mp2[prvs],mx);
                tp2[prvs]=0;
            }
            prvs=x;
        }
        mp2[x]=max(mp2[x],tp2[x]+mp1[x]);
        mx=max(mp2[x],mx);

        cout<<mx<<endl;

    }
    return 0;
}