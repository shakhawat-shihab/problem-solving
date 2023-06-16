#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    long long sum=0;
    long long mx=0;
    for(int i=n-1;i>=n-k;i--){
        if(arr[i]<0){
            break;
        }
        sum+=arr[i];
        mx=max(mx,sum);
    }
    cout<<mx<<endl;
    return 0;
}