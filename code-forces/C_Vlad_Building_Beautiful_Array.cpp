#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int even=0,odd=0;
        // int mx=0;
        int mn=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            // mx=max(mx,arr[i]);
            mn=min(mn,arr[i]);
            if(arr[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if( mn%2==1 || even==n|| odd==n){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    
    return 0;
}