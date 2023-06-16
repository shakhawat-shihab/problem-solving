#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int lNeg=INT_MIN;
        int sPos=INT_MIN;
        int z=0;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x<0 && x>lNeg ){
                lNeg=x;
            }
            if(x>=0 && x>sPos ) {
                sPos=x;
            }
            // if(x==0){
            //     // cout<<0<<endl;
            //     // continue;
            //     z=1;
            // }
        }

        // if(z==1){
        //     cout<<0<<endl;
        // }
        // else{
            // cout<<lNeg<<endl;
            if(lNeg==INT_MIN){
                cout<<sPos<<endl;
            }
            else{
                cout<<lNeg<<endl;
            }
        // }


    }
    return 0;
}