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
	vector<string> v, birthday = {"Happy", "birthday", "to", "you", "Happy", "birthday",
	"to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
	while(n--) {
		string s; cin >> s;
		v.pb(s);
	}
	if(SZ(v) <= 16) {
		for(int i = 0, j = 0; i < SZ(birthday); i++, j++) {
			if(j == SZ(v)) j = 0;
			cout << v[j] << ": " << birthday[i] << endl;
		}
	} else {
		int l = 2;
		while(l*SZ(birthday) < SZ(v)) l++;
		for(int i = 0, j = 0, k = 0; i < l*SZ(birthday); i++, j++, k++) {
			if(j == SZ(birthday)) j = 0;
			if(k == SZ(v)) k = 0;
			cout << v[k] << ": " << birthday[j] << endl;
		}
	}

  return 0;
}
