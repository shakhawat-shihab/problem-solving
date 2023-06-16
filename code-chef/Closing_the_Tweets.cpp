#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
    unordered_map<int,int>mp;
	while(k--){
	    string s;
        cin>>s;
        if(s=="CLICK"){
            int x;
            cin>>x;
            if(mp[x]){
                mp.erase(x);
            }
            else{
                mp[x]=1;
            }
            cout<<mp.size()<<endl;
        }
        if(s=="CLOSEALL"){
            mp.clear();
            cout<<0<<endl;
        }
	}
	return 0;
}
