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


void solve(){
    //storing a graph
    ll n , m;
    cin>>n>>m;
    for(ll i=1;i<=m;i++){
        ll x, y ;
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }

}

vector<pair<ll,ll>>v1[N];
void weightedGraphInput(){
    ll n,m;
    cin>>n>>m;

    for(ll i=1;i<=m;i++){
        ll x, y ,w;
        cin>>x>>y>>w;
        v1[x].pb({y,w});
        v1[y].pb({x,w});
    }
    // for a node see all edges
    int a=10;
    for(auto [u,w] : v1[a]){
        // do something
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    int tc;
    cin>>tc;
    while(tc--) solve();

    return 0;
}