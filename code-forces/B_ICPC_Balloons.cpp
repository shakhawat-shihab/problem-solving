#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        unordered_map<char,int>mp;
        for(auto ch:s){
            if(mp[ch]){
                cnt++;
            }
            else{
               cnt+=2;
               mp[ch]=1; 
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}