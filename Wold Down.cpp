// contest 211
#include <bits/stdc++.h>
using namespace std;

int wolfDown(int &N, string &S)
{
    int bird=0;
    for(int i=0;i<N;i++)
    {
        if(S[i]=='1')
        {
            return bird;
        }
        bird++;
    }
    return bird;
}
int main() {
	// your code goes here
	int T,N;
	cin >> T;
	for(int i=0;i<T;i++)
	{
	    cin >> N;
	    string S;
	    cin >> S;
	    cout << wolfDown(N,S) << endl;
	}

}

// Time complexity: O(N)
// Space complexity: O(1)
