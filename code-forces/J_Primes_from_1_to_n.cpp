#include <bits/stdc++.h>
using namespace std;
const int N=1e7;
int prime[N];

// prime[2]=0, means 2 is prime 
// prime[4]=1, means 4 is not prime 

void seive(){
    prime[1]=1;
    for(int i=2;i<=sqrt(N);i++){
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
    for(int i=1;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}