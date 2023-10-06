//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int countSquares(int N) {
        int n = N-1;
        double l = 0, r = n;
        for(int i = 0; i < 100; i++){
            double mid = l + ( r - l ) /  2.0;
            if(mid * mid > n) r = mid;
            else l = mid;
        }
        return floor(l);
    }
    
};
//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.countSquares(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends
