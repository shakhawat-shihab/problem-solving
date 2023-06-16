#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int pref=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        pref^=x;
    }
    cout<<pref<<endl;
    return 0;
}