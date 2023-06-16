#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    deque<int>dq;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        dq.push_back(x);
    }
    int cnt=0;
    while(dq.size()){
        if(cnt&1){
            cout<<dq.back()<<" ";
            dq.pop_back();
            cnt++;
        }
        else{
            cout<<dq.front()<<" ";
            dq.pop_front();
            cnt++;
        }
        // cout<<dq.front()<<endl;
        // dq.pop_front();

    }
    return 0;
}