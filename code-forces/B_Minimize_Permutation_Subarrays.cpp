#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n+1,0);

        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            arr[x]=i;
        }

        if(arr[n] < min(arr[1], arr[2])) {
            cout << arr[n] << ' ' << min(arr[1], arr[2]) << '\n';
        }
        else if(arr[n] > max(arr[1], arr[2])) {
            cout << arr[n] << ' ' << max(arr[1], arr[2]) << '\n';
        }
        else {
            cout << arr[1] << ' ' << arr[2] << '\n';
        }
        

    }
    return 0;
}