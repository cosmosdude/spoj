#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>
#include <algorithm>
#include <cstring>
#include <numeric>
#include <iostream>
#include <list>
#include <forward_list>

using namespace std;

void full(int count) {
	for(int i = 0; i < 1+count; i++) cout << "*";
}

void period(int count, int mul = 2) {
	mul++;
	for(int j = 0; j < 1+count*mul; j++) cout << (j%mul?'.':'*');
}

int main() {
	int n; cin >> n;
	while(n--) {
		int a, b; cin >> a >> b;
		int h, w; cin >> h >> w;
		h++;
		for(int i = 0; i < 1+a*h; i++) {
			if (i%h==0) full(b*(w+1));
			else period(b,w);			
			cout << endl;
		}
		if (n) cout << endl;
	}
}