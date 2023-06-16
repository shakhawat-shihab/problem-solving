#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        for(int i=1;i<=n;i++){
            int cnt=0;
            int mx=INT_MIN;
            for(int j=0;j<n;j++){
                mx=max(arr[j],mx);
                cnt++;
                if(cnt==i){
                    cout<<mx<<" ";
                    mx=INT_MIN;
                    cnt=0;
                    j=j-i+1;
                }
            }
        }
        cout<<endl;
    }
    
    return 0;
}