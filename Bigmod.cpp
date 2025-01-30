#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define nl endl

const int m= 1e9+7;

ll bigmod(ll a,ll n){
    //complexity O(log(n)) --> works till 10^18
    if(n==0) return  1;
    if(n%2==1) return (a* bigmod(a,n-1)) %m;
    ll v = bigmod(a,n/2);
    return (v*v) %m;
}