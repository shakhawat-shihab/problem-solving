#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int c=0,e=0,sl=0;
        int flag=1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='C'){
                c=1;
            }
            else if(s[i]=='E'){
                e=1;
            }
            else{
                sl=1;
            }

            if(e==1 && s[i]=='C'){
                flag=0;
                break;
            }
            else if(sl==1 && (s[i]=='C' || s[i]=='E')){
                flag=0;
                break;
            }
        }
        if(flag)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}