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
		cout << (b%a ? "NO": "YES") << endl;
	}
	return 0;
}