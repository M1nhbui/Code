#include <bits/stdc++.h>

#define MAXN 900005
#define MAX 100
#define ll long long
#define ull unsigned long long
#define ldb long double
#define pll pair<long long, long long>;
#define pii pair<int, int>;
#define fi first
#define se second
#define mp make_pair
#define endl "\n"
#define sp setprecision
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define pathio "D:/Code/C++/InputOutput/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

void code()
{
    ll n;
    cin >> n;
    if (n == 2)
    {
        cout << "NO";
    }
    else if (n % 2 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return;
}

int main()
{
    // freopen(lfi);
    // freopen(lfo);
    cin.tie(0);
    cout.tie(0);

    code();

    fclose(stdin);
    fclose(stdout);
    return 0;
}