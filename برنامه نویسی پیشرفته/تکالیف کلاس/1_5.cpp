// به نام خدا // تمرین ۱ از فصل ۵ // اجرا شد
#include <iostream>
#include <cstdlib>
using namespace std;


class Date {
public:
    Date(int d, int m, int y);
    void set_date(int d, int m, int y);
    void print_date();

    int get_day() { return day; }
    int get_month() { return month; }
    int get_year() { return year; }
	int compare (Date d2)
	{
		if(get_day()>d2.day)
			return 1;
		if(get_day()==d2.day)
			return 0;
		if(get_day()<d2.day)
			return -1;
	}
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

void Date::print_date()
{
    cout << day << '/' << month << '/' << year;
}

int main()
{
    Date bd(31, 6, 1352);
    bd.print_date();
    cout << '\n';
	Date d1(29, 6, 1352);
	Date d2(30, 6, 1352);
	cout<<d1.compare(d2);
    cout << endl;
	system("pause");
}