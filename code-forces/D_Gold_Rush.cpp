#include <bits/stdc++.h>
using namespace std;
int flag=0;

void divid(int n,int m){
    int divisor=1;
    for(int i=2;i<=sqrt(n);i++){
        // cout<<i<<endl;
        if(n%i==0){
            int res=n/i;
            if((i + i*2)==n){
                divisor=i;
                break;
            }
            else if((res + res*2)==n){
                divisor=res;
                break;
            }
        }
    }

    if((divisor + divisor*2)==n){
        // cout<<divisor<<" "<<divisor*2<<endl; 
        if(divisor==m ||divisor*2==m ){
           flag=1;
           return;
        }
        else if(divisor>m){
            divid(divisor,m);
            divid(divisor*2,m);
        }
        else if(divisor*2>m){
            divid(divisor*2,m);
        }
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(m>n){
            cout<<"NO"<<endl;
        }
        else if(m==n){
             cout<<"YES"<<endl;
        }
        else{
            flag=0;
            divid(n,m);
            if(flag==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    
    return 0;
}