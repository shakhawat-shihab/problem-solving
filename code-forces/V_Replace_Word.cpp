#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    // EGYPT
    int prvs=0;
    for(int i=0;i<s.length();i++){
        if(s.substr(i,5)=="EGYPT"){
            // cout<<i<<endl;
            cout<<s.substr(prvs,i-prvs)<<" ";
            i=i+4;
            prvs=i+1;
        }
    }
    // cout<<"prvs "<<prvs<<endl;
    if(prvs<s.length()){
        // cout<<"inside"<<endl;
        cout<<s.substr(prvs,s.length()-prvs)<<endl;
    }
    return 0;
}