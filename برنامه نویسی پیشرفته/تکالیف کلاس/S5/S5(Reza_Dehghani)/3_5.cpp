// به نام خدا // تمرین 3 از فصل ۵ // اجرا شد
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


class Date {
public:
    Date(int d, int m, int y);
    void set_date(int d, int m, int y);
    void print_date();
    void inc_one_day();
    bool equals(Date d);
	int compare (Date d2);
	string day_of_week (Date d2);

    int get_day() { return day; }
    int get_month() { return month; }
    int get_year() { return year; }
private:
    int day;
    int month;
    int year;
};

Date::Date(int d, int m, int y)
{
    set_date(d, m, y);
}

bool is_leap_year(int year)
{
    int r = year % 33;
    return r==1 || r==5 || r==9 || r==13 || r==17 || r==22 || r==26 || r==30;
}

int days_of_month(int m, int y)
{
    if (m < 7)
        return 31;
    else if (m < 12)
        return 30;
    else if (m == 12)
        return is_leap_year(y) ? 30 : 29;
    else
        abort();
}

void Date::set_date(int d, int m, int y)
{
    if (y < 0 || m < 1 || m > 12 || d < 1 || d > days_of_month(m, y))
        abort();

    day = d;
    month = m;
    year = y;
}

void Date::inc_one_day()
{
    day++;
    if (day > days_of_month(month, year)) {
        day = 1;
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }
}

void Date::print_date()
{
    cout << day << '/' << month << '/' << year << endl;
}

bool Date::equals(Date d) {
    return day == d.day && month == d.month && year == d.year;
}

int Date::compare (Date d2)
	{
		if(get_year()>d2.year)
			return 1;
		else if (get_year()<d2.year)
			return -1;
		else if(get_year()==d2.year){
			if(get_month()>d2.month)
				return 1;
			else if(get_month()<d2.month)
				return -1;
			else if (get_month()==d2.month){
				if(get_day()>d2.day)
					return 1;
				else if (get_day()<d2.day)
					return -1;
				else if(get_day()==d2.day)
					return 0;
			}
	}
	}

int days_between(Date d1, Date d2) {

	if(d1.compare(d2)==1)
		swap(d1,d2);
    int count = 1;
    while (!d1.equals(d2)) {
        d1.inc_one_day();
        count++;
    }
    return count;
}
string Date::day_of_week(Date d2){
	d2.year=get_year();
	int count=0,count2;
	string firstday,dayweek;
	d2.month=get_month();
	d2.day=1;
	string days[7] = {"fri","sat","sun","mon","tue","wed","thu"};
	
	if(d2.month==1)
		count=0;
	if(d2.month==2)
		count=3;
	if(d2.month==3)
		count=6;
	if(d2.month==4)
		count=2;
	if(d2.month==5)
		count=5;
	if(d2.month==6)
		count=1;
	if(d2.month==7)
		count=4;
	if(d2.month==8)
		count=6;
	if(d2.month==9)
		count=1;
	if(d2.month==10)
		count=3;
	if(d2.month==11)
		count=5;
	if(d2.month==12)
		count=0;

		firstday=days[count];
		count2=count;

		while(d2.day<get_day()){
			d2.day++;
			count2++;
		if(count2==7){
			count2=0;
			}
		}
		dayweek=days[count2];
		return dayweek;

}

int main()
{
	//for testing just change bd Date, in above
    Date bd(19, 9 , 1399);

	//Please don't change the today Date
    Date today(15, 3, 1397);

    cout << bd.day_of_week(today) << endl;
	system("pause");
}