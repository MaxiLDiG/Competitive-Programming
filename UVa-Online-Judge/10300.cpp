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
		double f, germanysBudget=0; cin >> f;
		while(f--) {
			double farmSize, nAnimals, environmentf;
			cin >> farmSize >> nAnimals >> environmentf;
			double animalSize = farmSize / nAnimals, prime = animalSize * environmentf * nAnimals;
			germanysBudget += prime;
		}
		cout << germanysBudget << endl;
	}

  return 0;
}
/*
1 1 1
2 2 2
3 3 3
2 3 4
8 9 2    1 + 4 + 9 + 12 + 18
*/
