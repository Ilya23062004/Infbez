#include <iostream>
#include <string>
using namespace std;


int main()
{


	/*for (int i = 0;i <= 255;i++)
	{
		cout << "code = " << i << " " << "char = " << char(i) << endl;
	}

}*/
	int sdvig;
	string str = " ";
	getline(cin, str);
	cin >> sdvig;

	for (int i = 0; i < str.length(); i++) {

		int l = int(unsigned char(str[i])) + sdvig;

		if (str[i] == ' ')
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

		if (sdvig >= 33)
		{
			while (sdvig >= 33) sdvig = sdvig - 33;

		}
		/*if (l > 223)
		{
			while (l > 223)
			{
				l = l - 32;
			}
			cout << char(l);
		}*/

		if (l > 255)
		{
			l = l - 32;

			cout << unsigned char(l);
		}


		cout << unsigned char(l);
	}

}
