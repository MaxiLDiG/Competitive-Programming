#include <bits/stdc++.h>
#define fore(i,a,n) for(ll i = a; i < int(n); i++)
#define pb(n) push_back(n)
#define fst first
#define snd second
#define ALL(x) x.begin(),x.end()
#define SZ(x) ((int)x.size())
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, sum=0, c=0, total=0; cin >> n;
	vi v(n);
	
	fore(i,0,n) {
		int x;
		cin >> x;
		v.pb(x);
		total += x;
	}
	
	sort(v.rbegin(), v.rend());
	
	fore(i,0,SZ(v)) {
		sum += v[i];
		c++;
		if(sum > total-sum) break;
	}
	
	cout << c;

	return 0;
}

