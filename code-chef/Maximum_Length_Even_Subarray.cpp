#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        if(n%2==0){
            if((n/2)%2==0){
                cout<<n<<endl;
            }
            else{
                cout<<n-1<<endl;
            }
        }
        else{
            int lastEven=n-1;
            if((lastEven/2)%2==1){
                cout<<n<<endl;
            }
            else{
                cout<<n-1<<endl;
            }
        }
    }
    return 0;
}