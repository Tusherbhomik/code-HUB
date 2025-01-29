#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define nl endl
class Solution {
public:
    int util(int n, int k) {
        if (n == 1)return 0;
        return (util(n - 1, k) + k) % n;
    }
    int findTheWinner(int n, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        return 1+util(n,k);// for making i index based
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);

    

    return 0;
}