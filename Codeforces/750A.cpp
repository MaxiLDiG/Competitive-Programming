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

	int n, k, l=0,i=1; cin >> n >> k;
	
	while(l <= 240-k) {
		l += 5*i;
		if(l > 240-k) {
			i--;
			break;
		}
		i++;
	}
	
	cout << (i > n ? n : i);

	return 0;
}
