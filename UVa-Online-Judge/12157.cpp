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

	int t; cin >> t;
	fore(i,0,t) {
		int n; cin >> n;
		double mile=0, juice=0;
		while(n--) {
			double x; cin >> x;
			mile += (ceil(double(x/30)))*10;
			juice += (ceil(double(x/60)))*15;
			if(fmod(x, 30) == 0) mile += 10; //función fmod(). Sirve para poder calcular el resto de un numero 'double'
			if(fmod(x, 60) == 0) juice += 15;
		}
		cout << "Case " << i+1 << ": ";
		if(mile < juice) cout << "Mile " << mile << endl;
		else if(mile > juice) cout << "Juice " << juice << endl;
		else cout << "Mile Juice " << mile << endl;
	}

  return 0;
}

