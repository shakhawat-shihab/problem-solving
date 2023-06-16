#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int w,l;
        cin>>w>>l;
        // odd even
        if(abs(w-l)%2==1){
            cout<<"YES"<<endl;
        }
        else{
            // both even
            if(w%2==0 && l%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
	}
	return 0;
}
