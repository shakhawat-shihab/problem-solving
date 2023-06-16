#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        cin>>arr[1];
        int k=arr[1]-1;
        for(int i=2;i<=n;i++){
            cin>>arr[i];
            k=__gcd(k,abs(i-arr[i]));
        }
        cout<<k<<endl;
    }
    return 0;
}