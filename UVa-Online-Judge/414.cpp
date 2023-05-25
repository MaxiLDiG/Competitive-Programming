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
	int n;
	while(cin >> n && n) {
		cin.ignore();
	  int shortestB=1e9, totalVoid=0;
	  vector<string> v;
	  fore(i,0,n) {
			string s; getline(cin, s);
	    v.pb(s);
	    int initialB=0,finalB=0;
	    fore(i,1,SZ(s)) {
	      if(s[i-1] == 'X' && s[i] != 'X') initialB = i;
	      if(s[i-1] != 'X' && s[i] == 'X') finalB = i;
	    }
			shortestB = min(shortestB, finalB-initialB);
	  }
	  fore(i,0,SZ(v)) {
			int initialB=0,finalB=0;
			fore(j,1,SZ(v[i])) {
				if(v[i][j-1] == 'X' && v[i][j] != 'X') initialB = j;
				if(v[i][j-1] != 'X' && v[i][j] == 'X') finalB = j;
			}
	  	totalVoid += finalB-initialB-shortestB;
	  }
	  cout << totalVoid << '\n';
	}
  return 0;
}
