#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 100000000
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

int n, q, a[MAXN];
ll ST[100000000];

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

// id: vị trí của đỉnh trên mảng lưu cây
// l: lưu vị trí đầu mà nút này quản lý
// r: lưu vị trí cuối nút này quả lý
// i, v: cập nhật a[i] = v;
void update(int id, int l, int r, int i, int v)
{
    if (i < l || r < i)
    {
        // i nằm ngoài đoạn [l, r], ta bỏ qua nút i
        return;
    }
    if (l == r)
    {
        // Đoạn chỉ gồm 1 phần tử, không có nút con
        ST[id] = v;
        return;
    }

    // Gọi đệ quy để xử lý các nút con của nút id
    int mid = (l + r) / 2;
    update(id * 2, l, mid, i, v);
    update(id * 2 + 1, mid + 1, r, i, v);

    // Cập nhật lại giá trị max của đoạn [l, r] theo 2 nút con:
    ST[id] = ST[id * 2] + ST[id * 2 + 1];
}

// id: vị trí của đỉnh trên mảng lưu cây
// l: lưu vị trí đầu mà nút này quản lý
// r: lưu vị trí cuối nút này quả lý
// u, v: Tìm phần tử lớn nhất trong [u, v]
ll get(int id, int l, int r, int u, int v)
{
    if (v < l || r < u)
    {
        // Đoạn [u, v] không giao với đoạn [l, r], ta bỏ qua đoạn này
        return 0;
    }
    if (u <= l && r <= v)
    {
        // Đoạn [l, r] nằm hoàn toàn trong đoạn [u, v] mà ta đang truy vấn, ta trả lại
        // thông tin lưu ở nút id
        return ST[id];
    }
    int mid = (l + r) / 2;
    // Gọi đệ quy với các con của nút id
    ll leftChild = get(id * 2, l, mid, u, v);
    ll rightChild = get(id * 2 + 1, mid + 1, r, u, v);
    return (leftChild + rightChild);
}

int main()
{
    read();
    cin >> n >> q;
    FOR(i, 1, n)
    {
        ST[i] = 0;
    }
    for (int i = 1; i <= q; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x == 1)
        {
            update(1, 1, n, y, z);
        }
        else if (x == 2)
        {
            cout << get(1, 1, n, y, z) << endl;
        }
    }
    return 0;
}