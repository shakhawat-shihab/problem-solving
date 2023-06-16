#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // string s;
    // cin>>s;
    vector<int>vc(26,0);
    for(int i=0;i<n;i++){
        char c;
	    cin>>c;
        vc[ (int) c- 97 ]++;
    }

    for(int i=0;i<26;i++){
        while(vc[i]>0){
            cout<< (char)(i+97) ;
            vc[i]--;
        }
    }

    return 0;
}