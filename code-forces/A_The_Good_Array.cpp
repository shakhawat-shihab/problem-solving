#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int div= (n-1)/k;
        if( (n-1) %k){
            div++;
        }
        cout<<1+div<<endl;
    } 
    return 0;
}