#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<int>a(3,0);
        cin>>a[0]>>a[1]>>a[2];
        sort(a.begin(),a.end());
        if(a[1]==0){
            cout<<"Water filling time"<<endl;
        }
        else{
            cout<<"Not now"<<endl;
        }
    }
    return 0;
}