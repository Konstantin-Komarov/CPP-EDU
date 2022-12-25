#include<iostream>

float PI = 3.1415926;
using namespace std;

//���������� ���������

struct Triangle
{
	int side1;		//�������
	int side2;
	int side3;
	int corner1;	//����
	int corner2;
	int corner3;
};
//������� ������� ��������� � ������ ������ � ����������

Triangle* read()
{
	int s1;
	int s2;
	int s3;
	int cor1;
	int cor2;
	int cor3;
	cout <<endl<< "������� ������� 1: ";
	cin >> s1;
	cout << endl << "������� ������� 2: ";
	cin >> s2;
	cout << endl << "������� ������� 3: ";
	cin >> s3;
	cout << endl << "������� ���� 1: ";
	cin >> cor1;
	cout << endl << "������� ���� 2: ";
	cin >> cor2;
	cout << endl << "������� ���� 3: ";
	cin >> cor3;
	Triangle* triag = new Triangle;
	triag->side1 = s1;
	triag->side2 = s2;
	triag->side3 = s3;
	triag->corner1 = cor1;
	triag->corner2 = cor2;
	triag->corner3 = cor3;
	return triag;
}

//������� ������ ���������

void display(Triangle* triag)
{
	cout << endl << "������� 1 = "<<triag->side1;
	cout << endl << "������� 2 = " << triag->side2;
	cout << endl << "������� 3 = " << triag->side3;
	cout << endl << "���� 1 = " << triag->corner1;
	cout << endl << "���� 2 = " << triag->corner2;
	cout << endl << "���� 3 = " << triag->corner3;
}

//������� ��������� �������� ������

void change_side1(Triangle* triag, int size)
{
	triag->side1 = size;
}

void change_side2(Triangle* triag, int size)
{
	triag->side2 = size;
}

void change_side3(Triangle* triag, int size)
{
	triag->side3 = size;
}

//������� ��������� �������� �����

void change_corner1(Triangle* triag, int cor)
{
	triag->corner1 = cor;
}

void change_corner2(Triangle* triag, int cor)
{
	triag->corner2 = cor;
}

void change_corner3(Triangle* triag, int cor)
{
	triag->corner3 = cor;
}

//������� ��������� �������� ������

int get_side1(Triangle* triag)
{
	return triag->side1;
}

int get_side2(Triangle* triag)
{
	return triag->side2;
}

int get_side3(Triangle* triag)
{
	return triag->side3;
}

//������� ��������� �������� �����

int get_corner1(Triangle* triag)
{
	return triag->corner1;
}

int get_corner2(Triangle* triag)
{
	return triag->corner2;
}

int get_corner3(Triangle* triag)
{
	return triag->corner3;
}

//������� ��������� �������

float get_square(Triangle* triag)
{
	float square = 0;
	square= 0.5 * triag->side1 * triag->side2 * sin(triag->corner1 * PI / 180);
	return square;
}

//������� ��������� ���������

int get_perimeter(Triangle* triag)
{
	int perim = 0;
	perim = triag->side1 + triag->side2 + triag->side3;
	return perim;
}

//������� ��������� �����

float get_high(Triangle* triag, int number_of_side) // ����� �������, ������ � ������� ���� ���������
{
	int high = 0;
	if (number_of_side == 1)
	{
		high = triag->side2 * sin(triag->corner1 * PI / 180);
		return high;
	}
	if (number_of_side == 2)
	{
		high = triag->side1 * sin(triag->corner1 * PI / 180);
		return high;
	}
	high = triag->side1 * sin(triag->corner3 * PI / 180);
	return high;
}

// ������� ����������� ���� ������������
void get_type(Triangle* triag)
{
	if (((triag->side1 == triag->side2) || (triag->side2 == triag->side3) || (triag->side1 == triag->side3)) && (!(triag->side1 == triag->side2 == triag->side3)))
	{
		cout << "����������� - ��������������" << endl;
	}
	if (triag->side1 == triag->side2 == triag->side3)
	{
		cout << "����������� - ��������������" << endl;
	}
	if ((triag->corner1 = 90) || (triag->corner2 == 90) || (triag->corner3 == 90))
	{
		cout << "����������� -  �������������" << endl;
	}
}