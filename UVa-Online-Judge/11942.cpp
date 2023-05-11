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

	int n; cin >> n;
	cout << "Lumberjacks:" << endl;
	while(n--) {
		bool increasing = true, decreasing = true;
		vi v(10);
		fore(i,0,10)
			cin >> v[i];
		fore(i,0,9) {
			if(v[i] > v[i+1]) increasing = false;
			if(v[i] < v[i+1]) decreasing = false;
		}
		if(increasing || decreasing) cout << "Ordered" << endl;
		else cout << "Unordered" << endl;
	}

	return 0;
}
