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

	string a, b;

	cin >> a >> b;

	fore(i,0,a.length()) {
		a[i] = tolower(a[i]);
		b[i] = tolower(b[i]);
	}

	fore(i,0,a.length()) {
		if(a[i] < b[i]) {
			cout << -1;
			return 0;
		} else if(a[i] > b[i]) {
			cout << 1;
			return 0;
		}
	}

	cout << 0;

	return 0;
}
