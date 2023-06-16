#include <bits/stdc++.h>
using namespace std;

// 2^15 == 32768
// const int N=32800;
vector<int>palList;

void markPalindrome(){
    for(int i=0;i<=32768;i++){
        string s=to_string(i);
        int ln=s.length();
        int flag=1;
        for(int i=0;i<ln/2;i++){
            if(s[i]!=s[ln-i-1]){
                flag=0;
                break;
            }
        }
        if(flag){
            palList.push_back(i);
        }
    }
}


int main()
{
   int t;
   cin>>t;

    markPalindrome();

    // cout<<"palList.size() "<<palList.size()<<endl;
    // for(auto x:palList){
    //      cout<<x<<" ";
    // }

   while(t--){
       int n;
       cin>>n;

       int arr[n];
       unordered_map<int,int>mp;

       for(int i=0;i<n;i++){
           cin>>arr[i];
           mp[arr[i]]++;
       }

       long long cnt=n;

       for(int i=0;i<n;i++){
           for(int j=0;j<palList.size();j++){
               int ans=arr[i]^palList[j];
               if(mp[ans]>0){
                   cnt=cnt+mp[ans];
               }
           }
       }
       cout<<cnt/2<<endl;
   }
    return 0;
}
