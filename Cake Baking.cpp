// solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N,M;
	cin >> N >> M;
	int f = M/N;
	if(f>=2)
	{
	    cout << N <<endl;
	}
	else
	{
	    cout << M%N << endl;
	}

}

// time complexity: O(1)
// space complexity: O(1)
