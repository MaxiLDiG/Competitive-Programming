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

	int n, k, i=1; cin >> n >> k;
	
	if((n*i) % 10 == k || (n*i) % 10 == 0) {
	cout << i;
		return 0;
	} else {
		while((n*i) % 10 != k || (n*i) % 10 != 0) {
			i++;
			if((n*i) % 10 == k || (n*i) % 10 == 0) break;
		}
	}
	
 cout << i;

	return 0;
}
