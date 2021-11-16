#include <iostream> 
#include<string>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<cstdlib>
using namespace std;
//برنامه ای بنویسید که یک کلمه را گرفته و تعداد حروف  ('a') را در داخل آن پیدا کند
int main()//سوال سوم
{
string word;
int count=0;
cout << "word:";
cin >> word;
for (int i = 0; i < word.length(); i++)
{
if (word[i]=='a')
{
count++;
}
}
cout << count;
_getch();
}
