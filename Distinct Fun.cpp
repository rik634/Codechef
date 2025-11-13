// Contest 212
// Basic Intuition: When we scan the elements from right to left, every time the current element is previously appeared, we can XOR this prefix with some value. 
// key ideas: Whenever we are forced to do XOR operation on some prefix [1....k] of an array, we can choose very large value for X>=0 and make the whole prefix distinct for sure. 
// for the array [1,2,0,2,3,2,1,0]. 2 occurs again. so, we will xor it with 1000. then the values for the prefix will be [1001,1002,1000,1002]. again the same process is repeated
#include <bits/stdc++.h>
using namespace std;

int distinctFun(int &N, vector<int>& A)
{
    int count=0;
    unordered_map<int,int> mp;
    for(int i=N-1;i>=0;i--)
    {
        if(mp.count(A[i]))
        {
            mp.clear();
            count++;
        }
        mp[A[i]]++;
    }
    return count;
}
int main() {
	// your code goes here
	int T,N;
	cin >> T;
	for(int i=0;i<T;i++)
	{
	    cin>> N;
	    vector<int> A(N,0);
	    for(int j=0;j<N;j++)
	    {
	        cin>> A[j];
	    }
	    cout << distinctFun(N,A) << endl;
	}

}

// time complexity: O(n)
// space complexity: O(n)
