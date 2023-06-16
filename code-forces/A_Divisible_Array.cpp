#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum= ( n*n +n )/2;
        if(sum%n==0){
            cout<<1<<" ";
        }
        else{
            int div=sum/n;
            div++;
            cout<<n*div-sum+1<<" ";
        }

        for(int i=2;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}