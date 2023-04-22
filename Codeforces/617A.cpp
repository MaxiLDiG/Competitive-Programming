#include <bits/stdc++.h>
#define fore(i,a,n) for(ll i = a; i < int(n); i++)
#define pb(n) push_back(n)
#define fst first
#define snd second
#define ALL(x) x.begin(),x.end()
#define SZ(x) ((int)x.size())
#define INF 1000000007
#define mp make_pair
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll x; cin >> x;
	
	if(x == 5 || x == 4 || x == 3 || x == 2 || x == 1)
		cout << 1;
	else {
		ll j = 1, k = 5;
		while(k*j < x)
			j++;
			
		cout << j;
	}

	return 0;
}

