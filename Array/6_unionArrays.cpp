// ramnitcode27
// Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.
// Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in the union.



#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
	// Time Complexity: O(mlog(m)+nlog(n))
    int doUnion(int a[], int n, int b[], int m)  {
        set<int> s;
        for (int i=0; i<n; i++) s.insert(a[i]);
        for (int i=0; i<m; i++) s.insert(b[i]);
        return s.size();
    }

	// Time Complexity: O(nlog(n))
	void intersection(int a[], int b[], int n, int m){
		sort(a, a+n);
		sort(b, b+m);
    	int i = 0, j = 0;
    	while(i < n && j < m) {
        	if(a[i] > b[j]) j++;
        	else if(b[j] > a[i]) i++;
        	else {
            	cout << a[i] << " ";
            	i++;
            	j++;
        	}
    	}
	}
};

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}