#include<bits/stdc++.h>
using namespace std;
 
typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int> PII;
typedef pair<double, double> PDD;
const int inf = 0x3f3f3f3f;
const int N = 25e4 + 10, M = 1e5 + 10;;
const int mod = 131;
const double eps = 1e-8;
const double PI = acos(-1);
#define x first
#define y second
 
vector<int> a[N];
int pos[5];
int n, m;
 
int calc(int x, int y) {
    int cnt = 0;
    for(int i = 1; i <= m; i++) {
        cnt += (a[x][i] != a[y][i]);
    }
    return cnt;
}
 
bool check() {
    for(int i = 2; i <= n; i++) {
        if(calc(n + 1, i) > 3) {
            return false;
        }
        else if(calc(n + 1, i) == 3) {
            bool flag = false;
            for(int j = 1; j <= m; j++) {
                if(a[n + 1][j] == -1) {
                    flag = true;
                    a[n + 1][j] = a[i][j];
                    break;
                }
            }
            if(!flag) return false;
        }
    }
 
    return true;
}
 
void solve() {
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; i++) {
        a[i].push_back(0);
        for(int j = 1; j <= m; j++) {
            int x;
            scanf("%d", &x);
            a[i].push_back(x);
        }
    }
    int mx = 0, id = 0;
    for(int i = 2; i <= n; i++) {
        int cnt = calc(1, i);
        if(cnt > mx) {
            mx = cnt;
            id = i;
        }
    }
 
    if(mx <= 2) {
        puts("Yes");
        for(int i = 1; i <= m; i++) {
            printf("%d ", a[1][i]);
        }
        puts("");
        return;
    }
    else if(mx >= 5) {
        puts("No");
        return;
    }
 
    int idx = 0;
    for(int i = 1; i <= m; i++) {
        if(a[1][i] != a[id][i]) {
            pos[++idx] = i;
        }
    }
 
    for(int i = 1; i <= mx; i++) {
        for(int j = 1; j <= mx; j++) {
            if(i == j) continue;
            a[n + 1] = a[1];
            a[n + 1][pos[i]] = a[id][pos[i]];
            a[n + 1][pos[j]] = -1;
            if(check()) {
                puts("Yes");
                for(int j = 1; j <= m; j++) {
                    if(a[n + 1][j] == -1) a[n + 1][j] = 1;
                    printf("%d ", a[n + 1][j]);
                }
                puts("");
                return;
            }
        }
    }
 
    puts("No");
}
 
int main() {
//    freopen("in.txt", "r", stdin);
    solve();
    return 0;
}
