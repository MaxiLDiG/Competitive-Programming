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
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int q; cin >> q;
	vector<int> v;

	while(q--) {
		int n=0; cin >> n;
		ll sum = 0;
		fore(i,0,n) {
			int x; cin >> x;
			sum += x;
		}
		sum = ceil((double)sum/n);
		v.pb(sum);
	}

	fore(i,0,SZ(v)) cout << v[i] << '\n';

  return 0;
}
