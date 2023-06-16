#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,lan;
        cin>>n>>k>>lan;
        vector<int>songs;

        for(int i=0;i<n;i++){
            int m,l;
            cin>>m>>l;
            if(l==lan){
                songs.push_back(m);
            }
        }

        sort(songs.begin(),songs.end());
        int playListTime=0;
        for(int i=songs.size()-1;i>=0;i--){
            playListTime+=songs[i];
            k--;
            if(k==0)
                break;
        }
        if(playListTime==0 || k>0){
            cout<<-1<<endl;
            continue;
        }

        cout<<playListTime<<endl;
	}
	return 0;
}
