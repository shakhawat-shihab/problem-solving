#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s="";
    while(n>0){
        int digit=n%10;
        s+=(digit+48);
        n=n/10;
    }

    reverse(s.begin(),s.end());
    int ln=s.length();
    string ans="";
    while(ln<4){
        ans+="0";
        ln++;
    }
    ans+=s;
    cout<<ans<<endl;
    return 0;
}