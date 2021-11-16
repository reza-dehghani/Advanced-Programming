// تمرین 5 فصل 2 // رضا دهقانی // اجرا شد
// در این سوال چون بازه اعداد مشخص می توانیم از مد و مرتب سازی کمک بگیریم
// یعنی ابتدا با استفاده از تابع سورت وکتور را مرتب می کنیم
// سپس با استفاده از مد بیشترین تکرار را در اعداد پیدا می کنیم مشابه سوال ۳
#include <iostream>
#include <algorithm>
#include <vector>
#include <conio.h>
using namespace std;
	int most_Frequent(vector<int> arr,int n)
	{
	int i,j,grand=0,count=0;
	vector<int>rep(n,0);
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		if(arr[i]==arr[j]){
		count++;
		}
		}
	rep[i]=count;
	count=0;
	}
	//cout<<"here"<<rep[0]<<endl;
	grand=rep[0];
	int big=arr[0];
	for(i=0;i<n;i++){
		if(rep[i]>grand)
			big=arr[i];
		}
	return big;
	}
void main()
{
	int n;
	cout<<"Welcome Enter the numbers of numbers then enter numbs";
	cout<<'\n';
	cin>>n;
	vector<int>arr(n);
	int i,j;
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr.begin(),arr.end());
	cout<<endl<<"The most frequent number is:";
	cout<<'\t'<<most_Frequent(arr,n);
	cout<<endl<<"Enter any key for Exit";
	_getch();
}