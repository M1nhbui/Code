#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;
#define MAXN 900005
#define MAX 100
#define ll long long
#define ull unsigned long long
#define ldb long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define endl "\n"
#define sp setprecision
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define vecll vector<long long>
#define vecldb vector<long double>
#define vecpll vector<pair<long long, long long>>
#define vecpldb vector<pair<long double, long double>>
#define pathio "C:/Users/buile/OneDrive/Code/C++/InputOutput/"
// #define pathio "/home/minhbui/Documents/Code/IO/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

ll arr[200010];

void code()
{
    string n;
    cin >> n;
    ll m = n.size();
    n = " " + n;
    for (ll i = 1; i <= m; i++)
    {
        arr[i] = arr[i - 1] + n[i] - '0';
        arr[i] %= 3;
    }
    ll x = arr[m];
    ll c[3] = {1, 0, 0};
    ll res = 0;
    for (ll i = 1; i <= m; i++)
    {
        ll y = arr[i];
        for (ll j = 0; j < 3; j++)
        {
            if (((y - j) % 3 + 3) % 3 == x)
            {
                res += c[j];
            }
        }
        c[y]++;
    }
    if (x != 0)
    {
        res--;
    }
    cout << res;
    return;
}

int main()
{
    freopen(lfi);
    freopen(lfo);
    cin.tie(0);
    cout.tie(0);

    code();

    fclose(stdin);
    fclose(stdout);
    return 0;
}
// ██████╗░██╗░░░██╗██╗  ██╗░░░░░███████╗  ███╗░░░███╗██╗███╗░░██╗██╗░░██╗
// ██╔══██╗██║░░░██║██║  ██║░░░░░██╔════╝  ████╗░████║██║████╗░██║██║░░██║
// ██████╦╝██║░░░██║██║  ██║░░░░░█████╗░░  ██╔████╔██║██║██╔██╗██║███████║
// ██╔══██╗██║░░░██║██║  ██║░░░░░██╔══╝░░  ██║╚██╔╝██║██║██║╚████║██╔══██║
// ██████╦╝╚██████╔╝██║  ███████╗███████╗  ██║░╚═╝░██║██║██║░╚███║██║░░██║
// ╚═════╝░░╚═════╝░╚═╝  ╚══════╝╚══════╝  ╚═╝░░░░░╚═╝╚═╝╚═╝░░╚══╝╚═╝░░╚═╝