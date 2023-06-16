#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int r,c;
        cin>>r>>c;
        char arr[r][c];
	    for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++){
    	        cin>>arr[i][j];
    	    }
	    }
        // for(int i=0;i<r;i++){
	    //     for(int j=0;j<c;j++){
    	//         cout<<arr[i][j]<<" ";
    	//     }
        //     cout<<endl;
	    // }
        int cnt=0;
        for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++){
                char curVal=arr[i][j];
                int curR=i+1,curC=j+1;
    	        while(curR<r && curC<c ){
                    if(arr[curR][curC]==curVal && arr[i][curC]==curVal  && arr[curR][j]==curVal){
                        cnt++;
                    }
                    curR++;
                    curC++;
                }
    	    }
	    }
        cout<<cnt<<endl;
	    
	}
	return 0;
}
