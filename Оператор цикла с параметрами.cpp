#include <bits/stdc++.h>
using namespace std;
int main() {
	srand((int)time(0));
	int N;
	N = rand() % 20 + 1;
	cout << "Number N: " << N << endl;
	
	double f = 1, s = 0;
	for(int i = 1; i <= N; i++) {
		f *= i;
		s += f;
		cout << i << " : "<< f << " : "<< s << endl;
	}
	cout << "Result: " << s << endl;
	return 0;
}