#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int flag=0;
    while(1){
        // cout<<c<<endl;
        if(c==0){
            flag=1;
            break;
        }
        else if(c<0){
            break;
        }

        if(c%a==0){
            flag=1;
            break;
        }
        else if(c%b==0){
            flag=1;
            break;
        }
        else{
            c=c-b;
        }
    }
    if(flag==1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}