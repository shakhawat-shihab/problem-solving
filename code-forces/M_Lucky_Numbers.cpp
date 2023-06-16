#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    vector<int>ans;

    for(int i=a;i<=b;i++){
        string s=to_string(i);
        int f=1;
        for (auto val:s){
            // cout<<val<<endl;
            if( !(val=='4' || val=='7') ){
                f=0;
                break; 
            }
        }
        if(f)
           ans.push_back(i);
    }

    
    // cout<<ans.size()<<endl;

    if(ans.size()==0){
        cout<<-1<<endl;
    }
    else{
        for(auto num:ans)
            cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}