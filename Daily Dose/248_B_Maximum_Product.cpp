#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/1406/B

int main()
{
	int t;cin>>t;
	while(t--)
	{
		ll n;cin>>n;
		ll a[n];
		for(long long i = 0;i < n;i++){
		    cin >> a[i];
		}
		sort(a,a+n);
		cout<<max({a[0]*a[1]*a[n-1]*a[n-2]*a[n-3],a[0]*a[1]*a[2]*a[3]*a[n-1],a[n-5]*a[n-4]*a[n-1]*a[n-2]*a[n-3]})<<"\n";
	}
}
 		  	 			 				 	 			 	 	  				