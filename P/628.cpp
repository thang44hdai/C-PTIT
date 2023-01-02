#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
using namespace std;
struct ds
{
    string id, name;
    int sl;
    friend istream &operator>>(istream &is, ds &a)
    {
        is >> a.id;
        cin.ignore();
        getline(is, a.name);
        cin >> a.sl;
        return is;
    }
    friend ostream &operator<<(ostream &os, ds &a)
    {
        os << a.id << " " << a.name << " " << a.sl << "\n";
        return os;
    }
};
bool cmp(ds a, ds b)
{
    if (a.sl != b.sl)
        return a.sl > b.sl;
    return a.id < b.id;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    ds a[n];
    for (auto &i : a)
        cin >> i;
    sort(a, a + n, cmp);
    for (auto i : a)
        cout << i;
    return 0;
}