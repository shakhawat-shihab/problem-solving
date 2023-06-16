#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int div=(n/2)+1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<div){
                if(j==i){
                    cout<<"\\";
                }
                else if(j==n-i+1){
                    cout<<"/";
                }
                else{
                    cout<<"*";
                }
            }
            else if(i>div){
                if(j==n-i+1){
                    cout<<"/";
                }
                else if(j==i){
                     cout<<"\\";
                }
                else{
                    cout<<"*";
                }
            }
            else if(i==div){
                if(j==div){
                    cout<<"X";
                }
                else{
                    cout<<"*";
                }
            }
        }
        cout<<endl;
    }

    
    return 0;
}