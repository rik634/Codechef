// solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,A,B;
	cin >> T;
	for(int i=0;i<T;i++)
	{
	    cin >> A >> B;
	    double num = (double)(4*B)/(9*A);
	    if(num==1)
	    {
	        cout << "Equal" << endl;
	    }
	    else if(num>1)
	    {
	        cout << "Small" << endl;
	    }
	    else
	    {
	        cout << "Large" << endl;
	    }
	}

}
// time complexity: O(1)
// space complexity:O(1)
