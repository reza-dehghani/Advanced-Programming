// تمرين 2-2 / رضا دهقاني / اجرا شد
#include <iostream>
#include <conio.h>
#include <string>
#include <vector>
using namespace std;
void main()
{
		//مقدار دهي اوليه براي اين برنامه منطقي نيست!
	//بنابراين از کد اسکي استفاده مي کنيم
	int i=65;
	vector<char>list(26);
	for(int k=0;k<26;k++)
	{
		list[k]=i;
		i++;
	}		
		// چاپ نتيجه
		for(int j=0;j<26;j++)
		{
		cout<<list[j]<<endl;
		}
	_getch();
}