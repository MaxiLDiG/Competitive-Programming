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
		int n, sum=0, min_x = 1e9, max_x = 0; cin >> n;
		fore(i,0,n) {
			int x;
			cin >> x;
			sum += x;
			max_x = max(max_x, x);
			min_x = min(min_x, x);
		}
		sum /= n;
		int optimal_parking = ((sum - min_x)*2) + ((max_x - sum)*2);
		v.pb(optimal_parking);
	}

	fore(i,0,SZ(v)) cout << v[i] << '\n';

  return 0;
}
