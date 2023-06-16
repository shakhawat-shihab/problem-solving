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
        char ch='$';
        string ans="";
        for(int i=0;i<n;i++){
            if( ch=='$'){
                ch=s[i];
            }
            else if(s[i]==ch){
                ans+=s[i];
                ch='$';
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}