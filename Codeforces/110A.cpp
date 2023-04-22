#include <bits/stdc++.h>
#define fore(i,a,n) for(ll i = a; i < int(n); i++)
#define pb(n) push_back(n)
#define fst first
#define snd second
#define ALL(x) x.begin(),x.end()
#define SZ(x) ((int)x.size())
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n,count=0; cin >> n;
	
	while(n > 0) {
		if(n % 10 == 4 || n % 10 == 7) {
			count++;
		}
		n /= 10;
	}
	
	cout << (count == 4 || count == 7 ? "YES" : "NO");

	return 0;
}

