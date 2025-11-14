// contest 211
#include <bits/stdc++.h>
using namespace std;

int buyChairs(int &W, int & P, int &K)
{
    int wood = min(W,K);
    int style=2*wood;
    if((K-wood)>=0)
    {
        style+=(K-wood);
    }
    return style;
    
}
int main() {
	// your code goes here
	int T,W,P,K;
	cin >> T;
	for(int i=0;i<T;i++)
	{
	    cin >>  W >> P >> K;
	    cout << buyChairs(W,P,K) << endl;
	}

}

// Time complexity: O(1)
// Space complexity: O(1)
