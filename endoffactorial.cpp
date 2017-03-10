#include <iostream>
#include <string.h>
#include <sstream>
#include <stdlib.h>

using namespace std;

int lastChar(int n) {
	
	stringstream ss;
	ss << n;
	string x = ss.str();
	for (int i = x.length() - 1; i >= 0; --i) {
		if (x[i] != '0') {
			return (int)(x[i] - 48);
		}
	}
}

int main(int argc, char * argv[]) {
	
	int n;
	cin >> n;
	
	int last_char = lastChar(n), n1 = n;
	n = last_char;
	
	for (int i = 1; i < n1; i++) {
		n = lastChar(i * n);
	}
	
	cout << n << endl;
	
	return 0;
	
}
