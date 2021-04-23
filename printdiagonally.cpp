// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
	
	public:
	vector<int> downwardDigonal(int n, vector<vector<int>> A)
	{
		// Your code goes here
		vector<vector<int>> ans(n+n-1);
		for(int i=0; i<n; i++){
		    for (int j=0; j<n; j++){
		        ans[i+j].push_back(A[i][j]);
		    }
		}
	    vector<int> ans2;
	    for(int i=0; i<ans.size(); i++){
	        for(int j=0; j<ans[i].size(); j++){
	            ans2.push_back(ans[i][j]);
	        }
	    }
	    return ans2;
	}

};

// { Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}
  // } Driver Code Ends
