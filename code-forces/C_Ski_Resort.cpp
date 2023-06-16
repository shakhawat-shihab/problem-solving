#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        // vector<int>vc;
        int cnt=0;
        long long ways=0;;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            // vc.push_back(x);
            if(x<=q){
                cnt++;
            }
            else{
                if(cnt>=k){
                    for(int i=k;i<=cnt;i++){
                        ways+=(cnt-i)+1;
                    }
                }
                cnt=0;
            }
        }

        if(cnt>=k){
            for(int i=k;i<=cnt;i++){
                ways+=(cnt-i)+1;
            }
        }

        cout<<ways<<endl;
    }
    return 0;
}