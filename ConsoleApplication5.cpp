#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string s = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя";
	string b = "АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";

	string str;
	string str1 = " ";

	int sdvig, nums, numb;

	cout << "Введите строку ";
	getline(cin, str);
	cout << "Введите сдвиг ";
	cin >> sdvig;

	for (int i = 0; i < str.size(); i++) {

		nums = s.find(str[i]);
		numb = b.find(str[i]);

	/*	if (str[i] == ' ')
		{
			cout << " ";
			continue;
		}

		if (str[i] == '!')
		{
			cout << "!";
			continue;
		}

		if (str[i] == ',')
		{
			cout << ",";
			continue;
		}

		if (str[i] == '.')
		{
			cout << ".";
			continue;
		}

		if (str[i] == '?')
		{
			cout << "?";
			continue;
		}

		if (str[i] == ':')
		{
			cout << ":";
			continue;
		}

		if (str[i] == ' " ')
		{
			cout << str[i];
			continue;
		}*/
		if (nums == -1 && numb == -1) {
			str1.push_back(str[i]);
		}

			if (numb + sdvig <= 32 and numb != -1) {
				str1.push_back(b[numb + sdvig]);
			}
			if (numb + sdvig > 32 and numb != -1) {
				str1.push_back(b[numb + sdvig - 33]);
			}
			if (nums + sdvig <= 32 and nums != -1) {
				str1.push_back(s[nums + sdvig]);
			}
			
			if (nums + sdvig > 32 and nums != -1) {
				str1.push_back(s[nums + sdvig - 33]);
			}
			
	}

	cout << str1;

	return 0;
}