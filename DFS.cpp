#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define nl endl
#define pb push_back

const ll N=2e5+5;
vector<ll>v[N];
bool vis[N];
vector<ll> ans;
ll maxDistance= INT_MIN;
vector<pair<ll,ll>>v1[N];

// node a  theke kon kon node a jaoya jacche oita ans a thakbe
void dfs(ll node,ll distance){
    if(vis[node] ==1) return;
    // ans.pb(node);
    maxDistance = max(maxDistance,distance) ;
    vis[node] = 1;
    for(auto [u,w]: v1[node]){
        dfs(u,distance+w);
    }
    return;
}

void graphInput(){
    ll n , m;
    cin>>n>>m;
    for(ll i=1;i<=n;i++) vis[i]=0;

    for(ll i=1;i<=m;i++){
        ll x, y ;
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }
}


void weightedGraphInput(){
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++) vis[i]=0;

    for(ll i=0;i<n-1;i++){
        ll x, y ,w;
        cin>>x>>y>>w;
        v1[x].pb({y,w});
        v1[y].pb({x,w});
    }
}


void solve(){
    maxDistance=0;
    weightedGraphInput();
    dfs(0,0);
    cout<<"Max distance: "<<maxDistance<<endl;
    for(auto a: ans) cout<<a<<" ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);

    int tc;
    cin>>tc;
    while(tc--) solve();

    return 0;
}