#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        if( (a%2==1 && b%2==0) || (a%2==0 && b%2==1)  ){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

        // if(a>=b){
        //     while(a>b){
        //         b++;
        //         a--;
        //     }
        //     if(b==a){
        //         cout<<"YES"<<endl;
        //     }
        //     else{
        //         cout<<"NO"<<endl;
        //     }
        // }
        // else{
        //     while(b>a){
        //         b--;
        //         a+=3;
        //     }
        //     if(b==a){
        //         cout<<"YES"<<endl;
        //     }
        //     else{
        //         cout<<"NO"<<endl;
        //     }
        // }
    }
    return 0;
}