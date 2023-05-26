#include <bits/stdc++.h>
#define fore(i,a,n) for(int i = a; i < int(n); i++)
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
	int l;
	while(cin >> l && l) {
		string s; cin >> s;
		int distance = 1e9, posR = -1, posD = -1;
		fore(i,0,SZ(s)) {
			if(s[i] == 'Z') {
				distance = 0;
				break;
			} else if(s[i] == 'D') {
				if(s[posR] == 'R') distance = min(distance, abs(i-posR));
				posD = i;
			} else if(s[i] == 'R') {
				if(s[posD] == 'D') distance = min(distance, abs(i-posD));
				posR = i;
			} else continue;
		}
		cout << distance << "\n";
	}
  return 0;
}
