/* Enter your macros here */
#define INF 0   
#define io(v) cin>>v
#define minimum(a,b) {if(b<a){a=b;}}
#define maximum(a,b) {if(b>a){a=b;}}
#define toStr(a) #a     
#define FUNCTION(a,b) 
#define foreach(v,i) for(int i=0;i<v.size();i++)
#include <iostream>
#include <vector>
using namespace std;
//Not sure about this program need help in the above macros defined 
#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;
}
