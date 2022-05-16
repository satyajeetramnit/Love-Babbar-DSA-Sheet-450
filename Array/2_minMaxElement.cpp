// ramnitcode27
// Maximum and minimum of an array using minimum number of comparisons

#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}

// O(nlogn)
// pair<long long, long long> getMinMax(long long a[], int n) {
//     sort(a,a+n);
//     return ( pair<long long,long long>(a[0],a[n-1]) );
// }

// O(n)
pair<long long, long long> getMinMax(long long a[], int n) {
    int mini=INT_MAX,maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]<mini) mini=a[i];
        if(a[i]>maxi) maxi=a[i];
    }
    return ( pair<long long,long long>(mini,maxi) );
}