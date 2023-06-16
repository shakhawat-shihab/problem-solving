#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        if(log2(n)>=k){
            cout<<(int)pow(2,k)<<endl;
        }
        else{
            cout<<n+1<<endl;
        }

    }
    return 0;
}