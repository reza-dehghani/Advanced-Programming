/* به نام خدا // رضا دهقانی // تمرین 5 از فصل 4 // اجرا شد */
#include <iostream>
#include <vector>
using namespace std;
long int summer (vector <int> a, int n);

int main(void){
	vector <int> a;
	long int num;
	int n;
	cout<<"Please Enter numbers after end Enter +\n";
	while (cin>>num)
		a.push_back(num);
	n=a.size();
	cout<<"n = \t"<<n<<endl<<summer(a,n)<<"\n";
	system("pause");
}
long int summer (vector <int> a, int n)
{
	int i=0,res=0,previus=0,assign=1,assign2=0;
	if(n==1)
		return a[0];
	if (n==2)
		return a[1];
	if (n==3)
		return summer(a,1)*summer(a,2)+summer(a,2)*a[2];
	if(n%2==0)
	{
		previus=n-4;
		while(previus!=0){
			previus-=2;
			if(assign==0)
			assign=1;
			else if(assign!=0)
				assign=0;
		}
		if(assign==1)
		{
		res = summer(a,n-1)-a[n-1];
		assign=0;
		return res;
		}
		else if(assign!=1)
		{
			res = summer(a,n-1) + a[n-1];
			assign=1;
			return res;
		}
	}
		if (n%2!=0)
		{
			i=n-3;
			while(i!=0){
			i-=2;
			if(assign2==0)
			assign2=1;
			else if(assign2!=0)
				assign2=0;
		}
			if(assign2==1){
			res = summer(a,n-2) - a[n-2]*a[n-1];
			assign2=0;
			return res;
			}
			if(assign2!=1)
			{
				res = summer(a,n-2) + a[n-2]*a[n-1];
				assign2=1;
				return res;
			}
}
}