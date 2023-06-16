#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int prime[N];

void seive(){
    prime[1]=1;
    for(int i=2;i<sqrt(N);i++){
        if(prime[i]==0){
            for(int j=i+i;j<N;j+=i){
                prime[j]=1;
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    seive();
    if(prime[n]==0){
        cout<<"YES"<<endl;
    }
    else{
       cout<<"NO"<<endl; 
    }
    return 0;
}