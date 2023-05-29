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
	int n, t=1;
	while(cin >> n, n) {
		int avg=0, moves=0;
		vi v;
		fore(i,0,n) {
			int x; cin >> x;
			v.pb(x);
			avg += v[i];
		}
		avg /= n;
		fore(i,0,n) if(v[i] > avg) moves += v[i]-avg;
		cout << "Set #" << t++ << "\nThe minimum number of moves is " << moves << ".\n\n";
	}
	return 0;
}
