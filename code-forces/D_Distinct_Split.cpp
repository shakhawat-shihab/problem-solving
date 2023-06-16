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
        int ln=s.length();
        map<char,int>rlmp,lrmp;
        vector<int>vc(ln+2,0);
        vector<int>tc(ln+2,0);
        int mx=0;
        for(int i=0;i<ln;i++){
            if(lrmp[s[i]]){
                vc[i+1]=vc[i];
            }
            else{
                vc[i+1]=vc[i]+1;
            }
            if(rlmp[s[ln-i-1]]){
                tc[ln-i]=tc[ln-i+1];
            }
            else{
                tc[ln-i]=tc[ln-i+1]+1;
            }
            lrmp[s[i]]++;
            rlmp[s[ln-i-1]]++;
        }

        // for(int i=1;i<=ln;i++){
        //     cout<<vc[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=1;i<=ln;i++){
        //     cout<<tc[i]<<" ";
        // }
        // cout<<endl;

        for(int i=1;i<=ln;i++){
            mx=max(vc[i]+tc[i+1],mx);
        }

         cout<<mx<<endl;
        
    
    }
    return 0;
}