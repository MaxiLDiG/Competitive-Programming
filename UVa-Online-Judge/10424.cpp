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

	string n1, n2;
	while(getline(cin, n1) && getline(cin, n2) && (!n1.empty() || !n2.empty())) {
		int vn1=0, vn2=0;
		fore(i,0,SZ(n1)) {
			if(islower(n1[i])) vn1 += int(n1[i])-96;
			else if(isupper(n1[i])) vn1 += int(n1[i])-64;
		}
		fore(i,0,SZ(n2)) {
			if(islower(n2[i])) vn2 += int(n2[i])-96;
			else if(isupper(n2[i])) vn2 += int(n2[i])-64;
		}
		while(vn1 >= 10) {
			int r = vn1 % 10;
			vn1 /= 10;
			vn1 += r;
		}
		while(vn2 >= 10) {
			int r = vn2 % 10;
			vn2 /= 10;
			vn2 += r;
		}
		if(vn1 > vn2) {
			float r = (float(vn2*100))/float(vn1);
			cout << fixed << setprecision(2) << r << " %" << endl;
		} else {
			float r = (float(vn1*100))/float(vn2);
			cout << fixed << setprecision(2) << r << " %" << endl;
		}
	}

	return 0;
}
