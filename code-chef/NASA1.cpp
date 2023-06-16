/*
||-----------------------------------||
||        Rahat Khan Pathan          ||
||         Programming Hero          ||
||-----------------------------------||
*/
#include<bits/stdc++.h>
#define ll long long int
#define pub push_back
#define pob pop_back
#define PI 3.14159265359
#define vll vector<ll>
#define All(X) (X).begin(),(X).end()
#define Unique(X) (X).erase(unique(All(X)),(X).end())
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
#define pi pair<ll,ll>
#define vpair vector<pair<ll,ll> >
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define cyes cout<<"Yes"<<endl
#define cno cout<<"No"<<endl
#define minus cout<<-1<<endl
#define MAX 100000
using namespace std;
ll cs=1;
vll v;
void solve()
{
    ll n; cin>>n;
    ll a[n];
    unordered_map<ll,ll> fre;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        fre[a[i]]++;
    }
    ll ans=n;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<v.size();j++)
        {
            ans+=fre[a[i]^v[j]];
        }
    }
    cout<<ans/2<<endl;
}
string convertToString(ll val)
{
    string ans="";
    while(val)
    {
        ll x=val%10;
        ans+=(x+'0');
        val/=10;
    }
    reverse(All(ans));
    return ans;
}
bool isPalindrome(ll val)
{
    string s=convertToString(val);
    ll i=0,j=s.size()-1;
    while(i<j)
    {
        if(s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main()
{
    // fast;
    // cout<<isPalindrome(151)<<endl;
    for(ll i=0;i<(1<<15);i++)
    {
        if(isPalindrome(i))
        {
            v.pub(i);
        }
    }

    cout<<"v.size() "<<v.size()<<endl;
    for(auto x:v){
         cout<<x<<" ";
    }


    ll t;
    // cin>>t;
    // while(t--)
    //     solve();
    return 0;
}

