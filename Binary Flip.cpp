// contest 212
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,N;
	cin >> T;
	for(int i=0;i<T;i++)
	{
	    cin >> N;
	    string S;
	    cin >> S;
	    int one=0;
	    int zero=0;
	    for(int j=0;j<N-1;j++)
	    {
	        if(S[j]=='1' && S[j+1]=='1')
	        {
	            one++;
	        }
	        else if(S[j]=='0' && S[j+1]=='0')
	        {
	            zero++;
	        }
	    }
	    cout << max((zero-one+1)/2,0) << endl;
	}

}


// time complexity: O(n)
// space complexity: O(1)
