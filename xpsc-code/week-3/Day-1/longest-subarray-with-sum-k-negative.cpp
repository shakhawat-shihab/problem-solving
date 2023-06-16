//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, int k) 
    { 
        // Complete the function
        // NOT SLIDING WINDOW
        int i=0,j=0;
        int mx=0;
        unordered_map<int,int>mp;
        int sum=0;
        
        while(j<n){
            
            sum+=a[j];
            if(sum==k){
                mx=max(mx,j+1);
            }
            
            // cout<<sum<<endl;
            if(mp.find(sum)== mp.end()){
                mp[sum]=j;
            }
            
            if(mp.find(sum-k)!=mp.end() ){
                int pos=mp[sum-k];
                mx=max(mx,j-pos);
            }
            
            j++;
            
        }
        
        return mx;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends