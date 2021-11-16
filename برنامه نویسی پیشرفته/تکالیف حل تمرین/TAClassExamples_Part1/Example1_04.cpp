#include <iostream>
#include <string>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

int main()
{ // برنامه ای بنویسید که دو کلمه را در در قالب آرایه ای از کارکتر ها گرفته با استفاده از توابع گفته شده

	int a;
	char x1[10];
	char x2[10];

	cout << "enter first word" << endl;
	cin >> x1;
	cout << endl
		<< "enter second word" << endl;
	cin >> x2;
	system("cls");

	while(1)
	{
		cout << endl;
		cout << "enter 1 to organiz:" << endl;          //الف:به ترتیب حروف الفبا مرتب کند
		cout << "enter 2 for paste two words:" << endl; //ب:دو رشته را بهم چسبانده
		cout << "enter 3 for copy to another:" << endl; //ج:یکی را در دیگری کپی کند
		cout << "enter 4 for first displace:" << endl;  //د:دو کاراکتر اول یک رشته را با دیگری جابخ جا کند
		cout << "enter 5 for the last move:" << endl;   //ه:دو کاراکتر اول یک رشته را به انتهای رشته دیگر بچسباند
		cin >> a;
		system("cls");
		switch (a)
		{
		
		case 1:
		{int result = strcmp(x1, x2);

		if (result < 0)
			cout << x1 << endl
			<< x2;

		if (result == 0)
			cout << x1 << '=' << x2;

		if (result > 0)
			cout << x2 << endl
			<< x1;
		}
			break;

		case 2:
		{strcat_s(x1, x2);

		cout << "word1: " << x1 << endl;
		cout << "word2: " << x2 << endl;
		}
			break;

		case 3:
		{strcpy_s(x1, x2);

		cout << "word1: " << x1 << endl;
		cout << "word2: " << x2 << endl;
		}
			break;

		case 4:

		{	strncpy_s(x1, x2, 2);

		cout << "word1: " << x1 << endl;
		cout << "word2: " << x2 << endl;
		}
			break;

		case 5:

		{strncat_s(x1, x2, 2);

		cout << "word1: " << x1 << endl;
		cout << "word2: " << x2 << endl;
		}
			break;

		default:
		{cout << "Error.";
		system("PAUSE");
		}
			break;
		}
	}

	return 0;
}