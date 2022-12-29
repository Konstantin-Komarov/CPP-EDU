#include <iostream>
#include <vector>
#
using namespace std;
int sum;
int main()
{
    setlocale(LC_ALL, "Russian");
    int h, b;
    cout << "Значение первого вектора: ";
    cin >> h;
    cout << "Значение второго вектора: ";
    cin >> b;
    vector <int> vector_first(h);

    vector <int> vector_second;
    vector_second.reserve(b);
    sum = h + b;

    if (sum > 9 && sum < 100)
        std::cout << "Сумма элементов является двухзначным числом";
    else
        std::cout << "Сумма элементов не является двухзначным числом";
}
