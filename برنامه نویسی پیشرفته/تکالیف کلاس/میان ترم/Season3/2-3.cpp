// رضا دهقانی // سوال 2 از تمارین فصل 3 // اجرا شد
#include <iostream>
#include <conio.h>
#include <vector>
 
using namespace std;
void func1(vector <int>&adad,int start, int end)
{
	    if (start >= end)
    return;
      
    int temp = adad[start];  
    adad[start] = adad[end];
    adad[end] = temp;
      
    return func1(adad, start + 1, end - 1);
}
void print(vector<int>bordar){
	for(int i=0;i<bordar.size();i++)
		cout<<bordar[i]<<"\t";
	cout<<endl;
}
void main ()
{
	vector<int>bordar;
	int a,adad,i,size;
	cout<<"Welcome, Please enter number and after end enter -1"<<endl;
	while(1){
		cin>>adad;
		if(adad==-1)
			break;
		bordar.push_back(adad);
	}
	cout<<"===================================="<<endl;
	cout<<"Vector before change:"<<endl;
	print(bordar);
	size=bordar.size();
	func1(bordar,0,size-1);
	cout<<"Vector after change:"<<endl;
	print(bordar);
	cout<<endl;
	system("pause");
}