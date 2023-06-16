#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,v;
        cin>>n>>k>>v;
	    int total=(n+k)*v;
	    int sum=0;
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        sum+=x;
	    }
	    if( total-sum>0 && (total-sum)%k == 0){
	        cout<<(total-sum)/k<<endl; 
	    }
	    else{
	        cout<<-1<<endl;
	    }
	    
	}
	return 0;
}
