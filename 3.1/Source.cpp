#include <iostream>
#include <string>

using namespace std;

	class Liquid {
	public:
		string name;
		float ro;
		int a;
		int b;
		void Name() {
			cout << "����i�� ���� ����� �i����: ";
			cin >> name;
		}
		void Ro() {
			cout << "����i�� ���� ������� �i����: ";
			cin >> ro;
		}
	};

	class Solution : public Liquid {
	public:
		float variable;
		void Mol() {
			cout << "����i�� ���� �i������ �i���i��� ��������: ";
			cin >> variable;
		}
	};

int main() {

	setlocale(LC_ALL, "ru");

	Solution mol;
	Liquid HOH;
	int a;
	string b;
	float c;
	float d;
	cout << "����i�� �����, ������� �� �i������ �i���i��� ��������: " << endl;
	cout << "�����: ";
	cin >> b;
	cout << "�������: ";
	cin >> c;
	cout << "�i������ �i���i��� ��������: ";
	cin >> d;
	cout << "�� ������ �� ��i���� �����/������� ��� �i������ ����i��� ��������?" << endl;
	cout << "1. ���" << endl;
	cout << "2. �i" << endl;
	cin >> a;
	if (a == 1)
	{
		HOH.Name();
		HOH.Ro();
		mol.Mol();
	}
	cout << "=============================================" << endl;
	cout << "�� ��i���� ����� �������� � " << b << " �� " << HOH.name << ";" << endl;
	if (HOH.ro > c)
	{
		cout << "������� ���� �������� �i���� �� " << HOH.ro - c << endl;
	}
	if (HOH.ro < c)
	{
		cout << "������� ���� �������� ����� �� " << c - HOH.ro << endl;
	}
	if (HOH.ro == c)
	{
		cout << "������� ���� ������� �������i!" << endl;
	}

	if (mol.variable > d)
	{
		cout << "�i������ �i���i��� ���� �������� �i���� �� " << mol.variable - d << endl;
	}
	if (mol.variable < d)
	{
		cout << "�i������ �i���i��� ���� �������� ����� �� " << d - mol.variable << endl;
	}
	if (mol.variable == d)
	{
		cout << "�i������ �i���i��� ���� ������� �������i!" << endl;
	}

	cout << "=============================================" << endl;


	return 0;
}