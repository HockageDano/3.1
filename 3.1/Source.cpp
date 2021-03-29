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
			cout << "Введiть нову назву рiдини: ";
			cin >> name;
		}
		void Ro() {
			cout << "Введiть нову густину рiдини: ";
			cin >> ro;
		}
	};

	class Solution : public Liquid {
	public:
		float variable;
		void Mol() {
			cout << "Введiть нову вiдносну кiлькiсть речовини: ";
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
	cout << "Введiть назву, густину та вiдносну кiлькiсть речовини: " << endl;
	cout << "Назва: ";
	cin >> b;
	cout << "Густина: ";
	cin >> c;
	cout << "Вiдносна кiлькiсть речовини: ";
	cin >> d;
	cout << "Чи бажаєте ви змiнити назву/густину або вiдносну клькiсть речовини?" << endl;
	cout << "1. Так" << endl;
	cout << "2. Нi" << endl;
	cin >> a;
	if (a == 1)
	{
		HOH.Name();
		HOH.Ro();
		mol.Mol();
	}
	cout << "=============================================" << endl;
	cout << "Ви змiнили назву речовини з " << b << " на " << HOH.name << ";" << endl;
	if (HOH.ro > c)
	{
		cout << "Густина нової речовини бiльша на " << HOH.ro - c << endl;
	}
	if (HOH.ro < c)
	{
		cout << "Густина нової речовини менша на " << c - HOH.ro << endl;
	}
	if (HOH.ro == c)
	{
		cout << "Густини обох речовин однаковi!" << endl;
	}

	if (mol.variable > d)
	{
		cout << "Вiдносна кiлькiсть нової речовини бiльша на " << mol.variable - d << endl;
	}
	if (mol.variable < d)
	{
		cout << "Вiдносна кiлькiсть нової речовини менша на " << d - mol.variable << endl;
	}
	if (mol.variable == d)
	{
		cout << "Вiдносна кiлькiсть обох речовин однаковi!" << endl;
	}

	cout << "=============================================" << endl;


	return 0;
}