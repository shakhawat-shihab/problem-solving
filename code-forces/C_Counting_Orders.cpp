#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n,0), brr(n,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            cin>>brr[i];
        }

        sort(arr.begin(),arr.end());
        sort(brr.begin(),brr.end());
        
        int sum=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[j]>brr[i]){
                    sum+=n-j;
                    cout<<n-j<<" ";
                    break;
                }
            }
        }
        cout<<sum<<endl;

    }
    return 0;
}