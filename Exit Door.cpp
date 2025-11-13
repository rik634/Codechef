// Context 212
#include <bits/stdc++.h>
using namespace std;
int exitDoor(int &N, vector<int>&P)
{
    int ans=0;
    for(int i=0;i<N;i++)
    {
        int x=0;
        int y=0;
        for(int j=0;j<i;j++)
        {
            if(P[j]<P[i])
            {
                x++;
            }
            
        }
        for(int j=i+1;j<N;j++)
        {
            if(P[j]<P[i])
            {
                y++;
            }
        }
        ans+=min(x,y);
    }
    return ans;
}
int main() {
	// your code goes here
	int T,N;
	cin >> T;
	for(int i=0;i<T;i++)
	{
	    cin >> N;
	    vector<int> P(N,0);
	    for(int j=0;j<N;j++)
	    {
	        cin >> P[j];
	    }
	    cout << exitDoor(N,P) << endl;
	}

}

// time complexity: O(n^2)
// space complexity:O(1)
