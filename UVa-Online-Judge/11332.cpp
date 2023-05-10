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

int g(int n) {
	if(n == 0) {
		return n;
	} else {
		return g(n&10 + n/10);
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x;
	while(true) {
		cin >> x;
		if(x == 0) break;
		cout << g(x) << endl;
	}

	return 0;
}

