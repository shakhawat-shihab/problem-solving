#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cin>>x;
    int val=x;
    if( x-val >= (val+1-x)){
        cout<<val+1<<endl;
    }
    else{
        cout<<val<<endl;
    }
    return 0;
}