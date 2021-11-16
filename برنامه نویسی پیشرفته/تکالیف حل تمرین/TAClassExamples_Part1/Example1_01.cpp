#include <iostream> 
#include<string>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<cstdlib>
using namespace std;
int main() // سوال1:الف:برنامه ای بنویسید که کلمه ای را در قالب آرایه ای از کاراکتر ها گرفته و متقارن بودن آن را تشخیص دهد.بدون استفاده از استرینگ                                                                                                                                       
                                                                             //ب:برنامه بالا را با استفاده از استرینگ نوشته و تفاوت آنرا بیان کنید                                                                                                                                           
{//قسمت الف
char a[10];
int x, y, z = 1;
cout << "enter name:" << endl;
cin >> a;
x = strlen(a) - 1;
y = x;
for (int i = 0; i < x; i++)
{
if (a[i] == a[y])
{
z = 0;
y--;
}
else
{
	z = 1;
	break;
}
}
if (z == 0)
{
cout << "yes";
}
else
{
cout << "no";
}
_getch();
}
//............................................................................
//سوال یک قسمت ب
int main()
{
string a;
int x, y, z=1;
cout << "enter name:" << endl;
cin >> a;
x = a.length()-1;
y = x;
for (int i = 0; i < x; i++)
{
if (a[i] == a[y])
{
z = 0;
y--;
}
else
{
z=1;
break;
}
}
if (z == 0)
{
cout << "yes";
}
else
{
cout << "no";
}
_getch();
}