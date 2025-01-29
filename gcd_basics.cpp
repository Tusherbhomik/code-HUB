#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

// all divisors of  n
vector<int> divisors(int n)
{
    vector<int> all_divisors;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            all_divisors.push_back(i);
            if (i != n / i)
                all_divisors.push_back(n / i);
        }
    }
    sort(all_divisors.begin(), all_divisors.end());
    return all_divisors;
}
vector<vector<int>> alldivisors2(int n) {
    vector<vector<int>> divisors(n + 1);  // Fix: Declare as a vector of vectors

    for (int d = 1; d <= n; d++) {
        for (int a = d; a <= n; a += d) {  // Increase by d
            divisors[a].push_back(d);
        }
    }
    return divisors;  // Return a valid vector of vectors
}
void printVector(vector<int> &nums)
{
    for (auto a : nums)
    {
        cout << a << " ";
    }
    cout << endl;
}

void findallprimes(){
    //finding all primes between 1  and n ;
    int n=50;
    vector<bool> mark(n+1,true);
    mark[0]=mark[1]= false;
    //nlogn
    // i can cut only with primes  , then the complexity will O(nlog(log(n)))== O(n)
    for(int i = 2;i*i<=n;i++){
        for(int j= 2*i;j<=n;j+=i){
            mark[j] = false;
        }
    }
    for(int i=2;i<=n;i++){
        if(mark[i]) cout<<i<<" ";
    }
}

void primeFactorization(){
    int n=pow(7,4)*pow(11,2)*pow(13,2);
    vector<pair<int,int>> v;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int power=0;
            while(n%i==0){
                power++;
                n/=i;
            }
            v.push_back({i,power});
        }
    }
    if(n!=1) v.push_back({n,1});
    for(auto a: v) cout<<a.first<<" "<<a.second<<endl;
}

int factorial(int n) {
    const int MOD = 1000000007;
  if (n == 0 || n == 1) {
    return 1;
  }
  return n * factorial(n - 1);
}

const int mxn = 1e5+5;
const int inf = 1e9;
ll m;

ll bigmod(ll a,ll n){
    //complexity O(log(n)) --> works till 10^18
    if(n==0) return  1;
    if(n%2==1) return (a* bigmod(a,n-1)) %m;
    ll v = bigmod(a,n/2);
    return (v*v) %m;
}
int main()
{
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
    //given n ,m find nth fibonacci mod m
    // int n,m;
    // cin>>n>>m;
    // ll f[n+1];
    // f[0]=0;
    // f[1]=1;

    // for(int i=2;i<=n;i++){
    //     f[i] = (f[i-1]+f[i-2])%m;
    // }
    // cout<< f[n]<<endl;
    //given a,n,m , find a^n mod m;

    // ll a,n,m;
    // cin>>a>>n>>m;
    // ll ans=1;
    // for(int i=1;i<=n;i++){
    //     ans=(ans*a)%m;
    // }
    // cout<<ans%m<<endl;

    //BIG MOD

    ll a,n,mod;
    cin>>a>>n>>mod;
    m=mod;
    cout<<bigmod(a,n)<<endl;
    return 0;
}