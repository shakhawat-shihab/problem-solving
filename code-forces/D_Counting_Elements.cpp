#include <bits/stdc++.h>
using namespace std;
const int N=1e3+5;
int main()
{
    int n;
    cin>>n;
    vector<int>vc(N+1,0);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vc[x]++;
    }

    int cnt=0;
    int mx=INT_MIN;
    for(int i=0;i<N;i++){
        if(vc[i]>0 && vc[i+1]>0){
            cnt=cnt+vc[i];
        }
    }
    cout<<cnt<<endl;
    return 0;
}