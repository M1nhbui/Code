#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 900005
#define MAX 100
#define ll long long

#define ll long long
#define ull unsigned long long
#define endl "\n"
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define vecll vector<long long>
#define pb push_back
#define pathio "C:/Users/buile/OneDrive/Code/C++/InputOutput/"

void read()
{
    // ios_base::sync_with_stdio(false);
    // freopen("name.inp", "r", stdin);
    // freopen("name.out", "w", stdout);
    freopen(pathio "input.txt", "r", stdin);
    freopen(pathio "output.txt", "w", stdout);
    cin.tie(NULL);
    cout.tie(NULL);
    return;
}
ll n, a[MAXN], b[MAXN], c[MAXN], l = 0, r = 0;

int main()
{
    read();
    cin >> n;
    FOR(i, 1, n)
    {
        cin >> a[i];
        b[i] = 1e9;
        c[i] = 1e9;
    }
    FOR(i, 1, n)
    {
        ll index = lower_bound(b + 1, b + 1 + n, a[i]) - b;
        b[index] = a[i];
        l = max(l, index);
    }
    FOD(i, n, 1)
    {
        ll index = lower_bound(c + 1, c + 1 + n, a[i]) - c;
        c[index] = a[i];
        r = max(r, index);
    }
    cout << n - max(l, r);
    return 0;
}