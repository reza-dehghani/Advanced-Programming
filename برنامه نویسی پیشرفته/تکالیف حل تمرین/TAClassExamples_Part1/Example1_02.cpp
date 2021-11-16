#include <iostream> 
#include<string>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<cstdlib>
using namespace std;


//برنامه ای بنویسید که اسم وفامیل وشماره دانشجویی وشماره ملی یک دانشجو را گرفته و به صورت گفته شده چاپ کند
int main()//تمرین دوم
{
string information;
string name , last_name;
long int nat_code, stu_number;
cout << "enter first name:";
cin >> name;
cout <<endl<< "enter last name:";
cin >> last_name;
cout << endl << "enter national coade:";
cin >> nat_code;
cout << endl << "enter student number:";
cin >> stu_number;
information =  '('+ name+ ','+ last_name+ ','+ to_string(nat_code) + ',' + to_string(stu_number) +')' ;
system("cls");
for (int i = 0; i < information.length(); i++)
{
cout << information[i];
}
_getch();
}
