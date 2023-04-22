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

	int n; cin >> n;
	
	if(n > 0) {
		cout << "I hate ";
		for(int i = 0; i < n-1; i++) {
			cout << "that I love ";
			i++;
			if(i < n-1) cout << "that I hate ";
		}
		cout << "it";
	}

	return 0;
}

