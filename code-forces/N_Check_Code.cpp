#include<bits/stdc++.h>
using namespace std;
int main(){
   
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        int flag=0;
        for(int i=0;i<s.length();i++){
            if(s[a]!='-'){
                flag=1;
                break;
            }
            if(!(s[i]>='0' && s[i]<='9') && i!=a){
                flag=1;
            }
        }

        if(flag)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    
    
    return 0;
}