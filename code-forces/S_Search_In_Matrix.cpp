#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int q;
    cin>>q;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==q){
                cout<<"will not take number"<<endl;
                return 0;
            }
        }
    }
    cout<<"will take number"<<endl;
    return 0;
}