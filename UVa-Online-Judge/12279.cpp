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

	int n, i = 1; cin >> n;
	
	while(n != 0) {
		int a=0, b=0;
		fore(i,0,n) {
			int x; cin >> x;
			if(x == 0) b++;
			else a++;
		}
		cout << "Case " << i << ": " << a-b << endl;
		++i;
		cin >> n;
	}

	return 0;
}

