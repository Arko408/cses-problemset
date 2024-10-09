#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define ff first
#define ss second
#define mem(a,b) memset(a,b,sizeof(a))
#define pb push_back
#define pp pop_back()
 
 
 
typedef vector<ll> vl;
typedef vector<string> vs;
typedef vector<char> vc;
typedef map<ll,ll> ml;
typedef map<string,ll> msl;
typedef map<string,string> mss;
typedef set<ll> sl;
typedef queue<ll>ql;
typedef queue<string> qs;
typedef pair<ll,ll> pl;
typedef vector<pair<ll,ll>> vp;
const double PI = acos(-1);
const double eps = 1e-9;
const ll inf = 2000000000;
const ll infll = 9000000000000000000;
 
 
ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }
 
 
int main()
{
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1)
    {
        if(n%2!=0) n=n*3+1;
        else n/=2;
        cout<<n<<" ";
    }
}