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

	int n; cin >> n;
	while(n--) {
		int w, max_; cin >> w;
		bool canBeClosed = true;
		int wInicial = w;
		while(w--) {
			int y1, y2, gap; cin >> y1 >> y2;
			if(wInicial-1 == w) gap = abs(y1-y2);
			if(abs(y1-y2) != gap) {
				canBeClosed = false;
				break;
			}
		}
		cout<<(canBeClosed ? "yes" : "no")<<endl;
	}

  return 0;
}
