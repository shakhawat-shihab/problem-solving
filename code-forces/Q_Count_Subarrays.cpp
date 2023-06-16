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

        int ans=0;
        int cnt=1;
        for(int i=0;i<n-1;i++){
            if(arr[i]<=arr[i+1]){
                cnt++;
            }
            else{
                ans+=(cnt*(cnt+1))/2;
                cnt=1;
            }
        }
        ans+=(cnt*(cnt+1))/2;
        cout<<ans<<endl;
    }
    
    return 0;
}