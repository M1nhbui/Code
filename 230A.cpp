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
#define fi first
#define se second

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

ll s, n;
pair<ll, ll> a[MAXN];

int main()
{
    read();
    cin >> s >> n;
    FOR(i, 1, n)
    {
    	cin >> a[i].fi >> a[i].se;
    }
    sort(a + 1, a + 1 + n);
    FOR(i, 1, n)
    {
    	if (s > a[i].fi)
    	{
    		s += a[i].se;
    	}
    	else
    	{
    		cout << "NO";
    		return 0;
    	}
    }
    cout << "YES";
    return 0;
}