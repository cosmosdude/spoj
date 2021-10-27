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

int main() {
	int n; cin >> n;
	while(n--) {
		int a, b; cin >> a >> b;
		for(int i = 0; i < a; i++) {
			for(int j = 0; j < b; j++) cout << ((i+j)%2 ? '.':'*');
			cout << endl;
		}
		if (n) cout << endl;
	}
}