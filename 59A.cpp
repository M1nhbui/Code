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

void code()
{
    string s;
    cin >> s;
    ll cntl = 0, cntu = 0;
    FOR(i, 0, s.size() - 1)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            cntl++;
        }
        else
        {
            cntu++;
        }
    }
    if (cntl >= cntu)
    {
        FOR(i, 0, s.size() - 1)
        {
            s[i] = tolower(s[i]);
        }
    }
    else
    {
        FOR(i, 0, s.size() - 1)
        {
            s[i] = toupper(s[i]);
        }
    }
    cout << s;
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