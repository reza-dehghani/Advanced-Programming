// به نام خدا // تمرین 1 از فصل 6 // اجرا شد
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Time{
public:
	Time(int hour, int min);
	Time(int hour);
	void set_time(int h, int m);
	void print_time();
	void print_time2();
	int compare(Time d);
	int get_hour() { return hour;}
	int get_min() { return min;}
	string when();
	Time operator+(const Time& c) const;
	Time& operator+=(const Time& c);
private:
	int hour;
	int min;
};
Time::Time(int hour, int min)
{
	set_time(hour, min);
}
Time::Time(int hour)
{
	set_time(hour, 0);
}
void Time::set_time(int h, int m)
{
	if(h==24)
		h=0;
	if((h<0)||(h>24))
		abort();
	if(m==60)
		m=0;
	if((m<0)||(m>60))
		abort();
	hour = h;
	min = m;
}
void Time::print_time()
{
	cout << hour << ":" << min << "\n";
}
void Time::print_time2()
{
	cout<< hour << ":" << 00 << "\n";
}
int Time::compare(Time d)
{
	if(get_hour()>d.hour)
		return 1;
	else if(get_hour()<d.hour)
		return -1;
	if(get_hour()==d.hour){
		if(get_min()==d.min)
			return 0;
	else if(get_min()>d.min)
		return 1;
	else if(get_min()<d.min)
		return -1;
	}
}
string Time::when(){
	if((get_hour()<=11)&&(get_min()<=59))
		return "morning";
	if((get_hour()==12)&&(get_min()==0))
		return "Noon";
	if((get_hour()<=16)&&(get_min()<=59))
		return "after noon";
	if((get_hour()<=19)&&(get_min()<=59))
		return "evening";
	if((get_hour()>=20)&&(get_min()>=1)||(get_hour()<=23)&&(get_min()<=59))
	return "Night";
}
Time Time::operator+(const Time& t) const
{
	int c;
	int k = min + t.min;
	if(k>60){
		k = k - 60;
		c=1;
	}
	c += hour + t.hour;
	if (c>24)
		c = c - 24;
	return Time (c,k);
}
int main()
{
	Time test(19,60);
	Time test2(20,59);
	test.print_time();
	cout<<test.when()<<"\n";
	cout<<endl;
	test2.print_time();
	cout<<test2.when()<<"\n";
	cout<<endl;
	cout<<"Compare=\t"<<test.compare(test2);
	cout<<endl;
	cout<<"Operator overloading: time 1 + time 2:\n\n";
	Time t = test + test2;
	t.print_time(); 
	cout<<t.when();
	cout<< endl;
	system("pause");
}