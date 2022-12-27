#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double a,b,c,ac,bc,p;
	cout << "Vvedite koordinatu a: ";
	cin >> a;
	cout << "Vvedite koordinatu b: ";
	cin >> b;
	cout << "Vvedite koordinatu c: ";
	cin >> c;
	ac = abs(a-c);
	bc = abs(b-c);
	p = ac*bc;
	cout << "Dlina AC: " << ac << endl;
	cout << "Dlina BC: " << bc << endl;
	cout << "Proizvedenie dlin AC i BC: " << p;
	return 0;
}
