/*--- DEBUG TEMPLATE STARTS HERE ---*/
void show(int x) {cerr << x;}
void show(long long x) {cerr << x;}
void show(double x) {cerr << x;}
void show(char x) {cerr << '\'' << x << '\'';}
void show(const string &x) {cerr << '\"' << x << '\"';}
void show(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void show(pair<T, V> x) { cerr << '{'; show(x.first); cerr << ", "; show(x.second); cerr << '}'; }
template<typename T>
void show(T x) {int f = 0; cerr << "{"; for (auto &i: x) cerr << (f++ ? ", " : ""), show(i); cerr << "}";}

void debug_out(string s) {
    s.clear();
    cerr << s << '\n';
}
template <typename T, typename... V>
void debug_out(string s, T t, V... v) {
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    cerr << "        "; // 8 spaces
    cerr << s.substr(0, s.find(','));
    s = s.substr(s.find(',') + 1);
    cerr << " = ";
    show(t);
    cerr << endl;
    if(sizeof...(v)) debug_out(s, v...);
}
#define dbg(x...) cerr << "LINE: " << __LINE__ << endl; debug_out(#x, x); cerr << endl; 
/*--- DEBUG TEMPLATE ENDS HERE ---*/
//#pragma GCC optimize("Ofast")
//#pragma GCC optimization ("O3")
//#pragma comment(linker, "/stack:200000000")
//#pragma GCC optimize("unroll-loops")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds; 
#define ll long long
#define F first
#define S second
#define pb emplace_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define setpr(x) cout << setprecision(x) << fixed
#define caseout(i) cout << "Case " << i << ": "
using namespace std;
using namespace __gnu_pbds;

template <class T>
using ordered_set =  __gnu_pbds::tree<T,__gnu_pbds::null_type,less<T>,__gnu_pbds::rb_tree_tag,__gnu_pbds::tree_order_statistics_node_update>;
template<typename T, typename U>
T& amax(T& x, U y) {if(y > x) x = y; return x;}
template<typename T, typename U>
T& amin(T& x, U y) {if(y < x) x = y; return x;}
const ll inf = 1e18;
const long double ep = 0.0000001;
const long double pi = acos(-1.0);
const ll MOD = 1000000007;
const int mod = 998244353;
const int TWO_MOD_INV = 500000004;
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());

#ifdef LOCAL
#include "dbg.h"
#else
#define dbg(x...)
#endif
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
#endif

