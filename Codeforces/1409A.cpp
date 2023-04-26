#include <bits/stdc++.h>
#define fore(i,a,n) for(ll i = a; i < int(n); i++)
#define ALL(x) x.begin(),x.end()
#define SZ(x) ((int)x.size())
#define pb(n) push_back(n)
#define INF 1000000007
#define mp make_pair
#define snd second
#define fst first
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	
	vi v;
	
	while(t--) {
		int a, b;
		cin >> a >> b;
		if(a > b) {
			int x = a-b, k=10, l=0;
			while(x >= 1) {
				l += x/k;
				if(k == x) {
					l++;
					v.pb(l);
					break;
				}
				k--;
			}
			v.pb(l);
		} else if(a < b) {
			int x = b-a, k=10, l=0;
			while(x >= 1) {
				l += x/k;
				if(k == x) {
					l++;
					v.pb(l);
					break;
				}
				k--;
			}
			v.pb(l);
		} else {
			v.pb(0);
		}
	}
	
	fore(i,0,SZ(v)) cout << v[i] << endl;

	return 0;
}
