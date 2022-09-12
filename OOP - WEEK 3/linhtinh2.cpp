#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const ll big = 1e6;
int a[5005][5005];
int f[5005][5005];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            f[i][j] = 0;
        }
    }
    int maxx = INT_MIN;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            // Nếu nó là 1 thì tìm max của [i-1][j], [i-1][j-1] và [i][j - 1] sau đó cộng thêm 1;
            if(a[i][j] == 1)
            {
                f[i][j] = max(f[i - 1][j], max(f[i - 1][j - 1], f[i][j - 1])) + 1;
                maxx = max(maxx, f[i][j]);
            }
        }
    }
    cout << maxx << endl;
}