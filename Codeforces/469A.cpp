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

	int n; cin >> n;

	vi lx,ly;

	int p; cin >> p;

	while(p--) {
		int x;
		cin >> x;
		lx.pb(x);
	}

	int q; cin >> q;

	while(q--) {
		int x;
		cin >> x;
		ly.pb(x);
	}

	bool become_on_guy = true;

	for(int i = 1; i <= n; i++) {
		if(find(ALL(lx), i) != lx.end() || find(ALL(ly), i) != ly.end()) continue;
		else become_on_guy = false;
	}
	
	cout << (become_on_guy ? "I become the guy." : "Oh, my keyboard!");

  return 0;
}
