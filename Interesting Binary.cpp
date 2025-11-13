// contest 212
#include <bits/stdc++.h>
using namespace std;

int interestingBinary(int &N, vector<int>& A)
{
    vector<vector<int>> dp(N,vector<int>(3,INT_MAX/10));
    
    auto cost =[&A](int i, int x)
    {
        if(A[i]>x)
        {
            return INT_MAX/10;
        }
        return x-A[i];
    };
    
    dp[0][0]=cost(0,0);
    dp[0][1]=cost(0,1);
    dp[0][2]=cost(0,2);
    for(int i=1;i<N;i++)
    {
        for(int j=0;j<=2;j++)
        {
            for(int k=0;k<=2 ;k++)
            {
                if(j==k)
                {
                    continue;
                }
                dp[i][j]=min(dp[i][j],dp[i-1][k]+cost(i,j));
            }
        }
    }
    return min(dp[N-1][0],min(dp[N-1][1],dp[N-1][2]));
}
int main() {
	// your code goes here
	int T,N;
	cin >> T;
	for(int i=0;i<T;i++)
	{
	    cin >> N;
	    vector<int> A(N,0);
	    for(int j=0;j<N;j++)
	    {
	        cin >> A[j];
	    }
	    cout << interestingBinary(N,A) << endl;
	}

}

// time complexity: O(n*3*3
// space complexity: O(n*3)
