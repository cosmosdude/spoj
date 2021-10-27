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
	for(int i = 0; i < 1+count*3; i++) cout << "*";
}

void period(int count) {
	for(int j = 0; j < 1+count*3; j++) cout << (j%3?'.':'*');
}

int main() {
	int n; cin >> n;
	while(n--) {
		int a, b; cin >> a >> b;
		for(int i = 0; i < 1+a*3; i++) {
			if (i%3==0) full(b);
			else period(b);			
			cout << endl;
		}
		if (n) cout << endl;
	}
}