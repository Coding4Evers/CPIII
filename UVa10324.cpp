#include <iostream>
#include <cstring>
#include <cstdio>
#define DEBUG(x) cerr << #x << " = " << x << endl;
using namespace std;
const int N = 1e6 + 5;
string s;
int nxt[N];

int main() {
    freopen("test.inp", "r", stdin);
    int caseNo = 0;
    while (cin >> s) {
        int n, L, R;
        memset(nxt, -1, sizeof(nxt));
        nxt[s.size() - 1] = s.size();
        for (int i = s.size() - 2; i >= 0; i --) {
            if (s[i] != s[i + 1]) nxt[i] = i + 1;
            else nxt[i] = nxt[i + 1];
        }
        printf("Case %d:\n", ++ caseNo);
        scanf("%d", &n);
      //  cout << s << endl;
        for (int i = 1; i <= n; i ++) {
            scanf("%d %d", &L, &R);
            if (L > R) swap(L, R);
            if (L == R) puts("Yes");
            else {
                if (nxt[L] <= R) puts("No");
                else puts("Yes");
              //  cout << L << " " << R << ": " << nxt[L] << endl;
            }
        }
    return 0;
}
