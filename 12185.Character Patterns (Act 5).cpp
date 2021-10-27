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
		int s; cin >> s;

		s++;

		int xs = 0, xe = s;
		int xsadv = 1, xeadv = -1;
		for(int i = 0; i < 1+a*(s); i++) {
			int y = i/s;

			for(int j = 0; j < 1+b*(s); j++) {
				int x = j/s;
				int xmod = j%s;
				if (i%(s)==0 or j%(s)==0) cout << '*';
				else {
					if (x%2) { // odd
						if(xmod==xe) cout << (y%2? '\\': '/');
						else cout << '.';
					}
					else {
						if (xmod == xs) cout << (y%2? '/': '\\');
						else cout << '.';
					}
				}
			}
			if (y%2==0) { xs++; xe--; } 
			else { xs--; xe++; }
			
			cout << endl;
		}
		if (n) cout << endl;
	}
}