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

	int n; cin >> n;
	int cantidad_partidos = n * (n-1), cont=0;
	
	vi local, visitante;
	
	fore(i,0,n) {
		int a, b; cin >> a >> b;
		local.pb(a);
		visitante.pb(b);
	}
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(i != j && local[i] == visitante[j]) cont++;
		}
	}
	
	cout << cont;

	return 0;
}

