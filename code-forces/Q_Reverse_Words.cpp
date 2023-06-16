#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    string tmp="";
    string ans="";
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            tmp+=s[i];
        }
        else{
            reverse(tmp.begin(),tmp.end());
            ans+=tmp+" ";
            tmp="";
        }
    }
    if(tmp!=""){
        reverse(tmp.begin(),tmp.end());
        ans+=tmp;
    }
    cout<<ans<<endl;

    return 0;
}