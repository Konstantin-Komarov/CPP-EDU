#include <iostream>
#include <vector>
#
using namespace std;
int sum;
int main()
{
    setlocale(LC_ALL, "Russian");
    int h, b;
    cout << "�������� ������� �������: ";
    cin >> h;
    cout << "�������� ������� �������: ";
    cin >> b;
    vector <int> vector_first(h);

    vector <int> vector_second;
    vector_second.reserve(b);
    sum = h + b;

    if (sum > 9 && sum < 100)
        std::cout << "����� ��������� �������� ����������� ������";
    else
        std::cout << "����� ��������� �� �������� ����������� ������";
}
