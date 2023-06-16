#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<string>st;
        string tmp="";
        for(int i=0;i<n;i++){
            tmp+=s[i];
            if(tmp.length()==3){
                st.insert(tmp.substr(0,2));
                st.insert(tmp.substr(1,2));
                tmp="";
                i--;
            } 
        }
        if(tmp.length()==2)
            st.insert(tmp.substr(0,2));
        cout<<st.size()<<endl;
    }
    
    return 0;
}