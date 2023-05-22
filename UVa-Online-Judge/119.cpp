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

	int x;
	while(cin >> x) {
		map<string, int> v;
		fore(i,0,x) {
			string s;
			cin >> s;
			v[s] = 0;
		}
		fore(i,0,SZ(v)) {
			string s; cin >> s;
			int cant, cantP;
			cin >> cant >> cantP;
			v[s] = cant;
			int cantM = v[s]/cantP;
			while(cantP--) {
				string sp; cin >> sp;
				v[sp] += cantM;
				v[s] -= cantM;
			}
		}
		for(auto& elem : v) {
			cout << elem.fst << ' ' << elem.snd << endl;
		}
	}

  return 0;
}
/*
5
dave laura owen vick amr
dave 200 3 laura owen vick
owen 500 1 dave
amr 150 2 vick owen
laura 0 2 amr vick
vick 0 0
3
liz steve dave
liz 30 1 steve
steve 55 2 liz dave
dave 0 2 steve liz
*/
