#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int odd=0;
        int even=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2==0){
                even++;
            }
            else{
                odd++;
            }
            
        }
        cout<<cnt<<endl;
    }
    return 0;
}