#include <bits/stdc++.h>
#define fst first
#define snd second
#define pb(n) push_back(n)
#define SZ(x) ((int)x.size())
#define ALL(x) x.begin(),x.end()
#define fore(i,a,n) for(ll i = a; i < int(n); i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int k, n, w, b=0; cin >> k >> n >> w;

	for(int i = 1; i <= w; i++)
		b += (k*i);
		
	cout << ((b-n) > 0 ? b-n : 0);

	return 0;
}
