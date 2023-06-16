#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
        cin>>n>>x;
    
        if( n*3 < x){
            cout<<"NO"<<endl;
        }
        else if(n*3>=x){
            int div=x/3;
            if(x%3==0){
                cout<<"YES"<<endl;
                cout<<div<<" "<<0<<" "<<n-div<<endl;
            }
            else{
                int res=(div+1)*3;
                int ques=n-(div+1);
                // cout<<n<<endl;
                //cout<<res-x<<" "<<div+1<<" "<<ques<<endl;
                if(res-x<=ques){
                    cout<<"YES"<<endl;
                    cout<<div+1<<" "<<res-x<<" "<<n-(div+1+res-x)<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }

        }
	}
	return 0;
}
