#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mn=INT_MAX;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
        mn=min(mn,x);
    }
    if(mp[mn]%2==1){
        cout<<"Lucky"<<endl;
    }
    else{
        cout<<"Unlucky"<<endl;
    }
    return 0;
}