# include <iostream>
# include <cmath>
using namespace std;
int main ()
{
  int a, b, c;
  bool answer;
  cout << "Введите 3 числа: " << endl;
  cout << "Введите a: ";
  cin >> a;  
  cout << "Введите b: ";
  cin >> b;
  cout << "Введите c: ";
  cin >> c;
  answer= a==b || a==c || b==c;
  cout << "Среди трех данных целых чисел есть хотя бы одна пара совпадающих: " << boolalpha << answer << endl;
  system ("pause");
  return 0;
}
