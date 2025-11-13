// contest 212
// For a given permutation of N elements whose distinct count is K,
  // - if we add a element to make the size to be N+1 and addd it at both the ends the respective value for K increases by 1
   // if we add in the middle of the permuatation, the respective value of K remains the same.
// dp logic: dp[N][K] = 2* dp[N-1][K] + (N-2)*dp[N-1][K-1]

#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
    int n =5000;
    const long long MOD = 1e9+7;
    vector<vector<int>> dp(n+1,vector<int>(n+2,0));
    dp[1][1]=1;
    dp[2][3]=2;
    for(int i=3;i<=n;i++)
    {
        for(int j=1;j<=i+1;j++)
        {
            dp[i][j]= ((long long)2*dp[i-1][j-1] + ((long long)i-2)*dp[i-1][j]) %MOD;
        }
    }
	int T,N,K;
	cin >> T;
	
	for(int i=0;i<T;i++)
	{
	    cin >> N >> K;
	    cout << dp[N][K] << endl;
	}

}

// Time complexity: O(n*n)
// Space complexity: O(n*n)
