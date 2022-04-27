#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

const int maxn = 105;
int dp[maxn][maxn];

int main() {
    fill(dp[0], dp[0] + maxn * maxn, 0);
    for (int i = 1; i < maxn; ++i) {
        for (int j = 1; j < maxn; ++j) {
            if (i == 1 || j == 1) {
                dp[i][j] = 1;
            }
        }
    }
    for (int i = 1; i < maxn; ++i) {
        for (int j = 1; j < maxn; ++j) {
            if (j > i) {
                dp[i][j] = dp[i][j - 1];
            }
            else if (i == j) {
                dp[i][j] = dp[i][j - 1] + 1;
            }
            else {
                dp[i][j] = dp[i - j][j] + dp[i][j - 1];
            }
        }
    }
    int n;
    while (cin >> n) {
        cout << dp[n][n] << endl;
        for (int i = 1; i < n+1; ++i) {
	        for (int j = 1; j < n+1; ++j) {
	            printf("%d ", dp[i][j]);
	        }
	        printf("\n");
	    }
    }
    return 0;
}
