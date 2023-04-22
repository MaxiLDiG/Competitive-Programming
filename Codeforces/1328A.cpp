#include <bits/stdc++.h>
#define fst first
#define snd second
#define mp make_pair
#define pb(n) push_back(n)
#define SZ(x) ((int)x.size())
#define ALL(x) x.begin(),x.end()
#define fore(i,a,n) for(ll i = a; i < int(n); i++)
#define INF 1000000007
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

	int t; cin >> t;

	vi v;

	while(t--) {
		ll a, b, k=0, l=0;
		cin >> a >> b;
		if(a < b) {
			v.pb(b-a);
			continue;
		}

		if(a % b == 0) v.pb(0);
		else {
			k = a/b;
			l = ((k+1)*b)-a;
			v.pb(l);
		}
	}

	fore(i,0,SZ(v)) cout << v[i] << endl;

  return 0;
}
