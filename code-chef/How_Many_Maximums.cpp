#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
	    string s;
        cin>>s;
        //cout<<s<<endl;
        stack<char>st;
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(st.empty() && s[i]=='1'){
                cnt++;
                st.push(s[i]);
            }
            else if(!st.empty() && st.top()=='1' && s[i]=='0'){
                st.pop();
            }
        }
        if(s[n-2]=='0'){
            cnt++;
        }
        cout<<cnt<<endl;

	}
	return 0;
}
