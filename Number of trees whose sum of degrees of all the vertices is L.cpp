// C++ implementation of the approach 
#include <iostream> 
using namespace std; 
#define ll long long int 

// Iterative Function to calculate (x^y) in O(log y) 
ll power(int x, ll y) 
{ 

	// Initialize result 
	ll res = 1; 

	while (y > 0) { 

		// If y is odd, multiply x with result 
		if (y & 1) 
			res = (res * x); 

		// y must be even now 
		// y = y / 2 
		y = y >> 1; 
		x = (x * x); 
	} 
	return res; 
} 

// Function to return the count 
// of required trees 
ll solve(int L) 
{ 
	// number of nodes 
	int n = L / 2 + 1; 

	ll ans = power(n, n - 2); 

	// Return the result 
	return ans; 
} 

// Driver code 
int main() 
{ 
	int L = 6; 

	cout << solve(L); 

	return 0; 
} 
