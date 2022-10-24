#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int dp[n][3] = {0};
    for(int i=0;i<n;i++) for(int j=0;j<3;j++) cin >> dp[i][j];
    
    for(int i=1;i<n;i++)
    {
        dp[i][0] = min(dp[i-1][1],dp[i-1][2]) + dp[i][0];
        dp[i][1] = min(dp[i-1][0],dp[i-1][2]) + dp[i][1];
        dp[i][2] = min(dp[i-1][0],dp[i-1][1]) + dp[i][2];
    }
    cout << min(dp[n-1][0], min(dp[n-1][1], dp[n-1][2]));
}