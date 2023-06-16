#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string t="";
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='0' && t==""){
            continue;
        }
        t+=s[i];
    }
    // cout<<t<<endl;
    if(s==t)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}