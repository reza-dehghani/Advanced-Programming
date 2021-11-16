//رضا دهقانی // تمرین 7 فصل 7 // اجرا شد
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int hourcounter = 0, hrs = 0;
int fixcounter = 0;
class organization {
public:
	organization(const string &, const string &);
	int gethourcounter() const;
	int getfixcounter() const;
	int counter(int hourcounter, int fixcounter);
	int total_earnings(int avghours);
private:
	string firstName;
	string lastName;
};
int organization::gethourcounter() const {
	return hourcounter;
}
int organization::getfixcounter() const {
	return fixcounter;
}
organization::organization(const string &first, const string &last)
{
	firstName = first;
	lastName = last;
}
class employee : public organization
{
public:
	employee(const string &, const string &);
	string getFirstName() const;
	string getLastName() const;
	virtual double earnings() const = 0;
	virtual void print() const;
private:
	string firstName;
	string lastName;
};
employee::employee(const string &first, const string &last) : organization(first, last)
{
	firstName = first;
	lastName = last;
}
void employee::print() const
{
	cout << getFirstName() << "  " << getLastName();
}
string employee::getFirstName() const
{
	return firstName;
}
string employee::getLastName() const
{
	return lastName;
}
class fixworker : public employee
{
public:
	fixworker(const string &, const string &, double = 0.0, double = 0.0);
	void setWage(double);
	void setHours(double);
	virtual double earnings() const;
	virtual void print() const;
private:
	double wage;
	double hours;
};
double fixsalary = 0;
fixworker::fixworker(const string &first, const string &last,
	double w, double h) : employee(first, last)
{
	setWage(w);
	setHours(h);
	fixcounter++;
}
void fixworker::setWage(double w)
{
	wage = w > 0 ? w : 0;
}
void fixworker::setHours(double h)
{
	hrs += h;
	hours = h >= 0 && h <= 240 ? h : 0;
}
double fixworker::earnings() const
{
	if (hours <= 140) {
		fixsalary += wage*hours;
		return wage * hours;
	}
	else {
		fixsalary += 140 * wage + (hours - 140) * wage * 1.5;
		return 140 * wage + (hours - 140) * wage * 1.5;
	}
}
void fixworker::print() const
{
	cout << "\nfix worker: ";
	employee::print();
}

class hourworker : public employee
{
public:
	hourworker(const string &, const string &, double = 0.0, int = 0);
	void setWage(double);
	void setQuantity(int);
	virtual double earnings() const;
	virtual void print() const;
private:
	double wagePerPiece;
	int quantity;
};
double hoursalary = 0;
hourworker::hourworker(const string &first, const string &last,
	double w, int q)
	:employee(first, last)
{
	setWage(w);
	setQuantity(q);
	hourcounter++;
}
void hourworker::setWage(double w)
{
	wagePerPiece = w > 0 ? w : 0;
}
void hourworker::setQuantity(int q)
{
	hrs += q;
	quantity = q > 0 ? q : 0;
}
double hourworker::earnings() const
{
	hoursalary += quantity * wagePerPiece;
	return quantity * wagePerPiece;
}
void hourworker::print() const
{
	cout << "\nhour worker:";
	employee::print();
}

int organization::counter(int hourcounter, int fixcounter) {
	int all = hourcounter + fixcounter;
	return all;
}
int organization::total_earnings(int avg_hours)
{
	int all = organization::counter(hourcounter, fixcounter);
	if (avg_hours >= all * 200)
		return fixsalary + hoursalary;
	else
		return 0;
}
int main()
{
	organization a("Tamin", "Ejtemai");
	//واحد پولی تومان می باشد
	cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2);
	hourworker p(" Hooshang", " Amirfazli", 10000, 210);
	hourworker d(" Hootan", " Fariba", 10000, 210);
	hourworker l(" Hashem", " Morad", 10000, 190);
	hourworker o(" Hedye", " Tehrani", 10000, 246);
	fixworker h(" Rambod", " Javan", 10000, 217);
	fixworker v(" Mehran", " Modiri", 10000, 232);
	fixworker s(" Asghar", " Abdi", 10000, 210);
	p.earnings(); d.earnings(); l.earnings(); o.earnings(); h.earnings();
	v.earnings(); s.earnings();
	cout << "Organization Salaries :" << endl;
	cout << "hoursalaries = " << hoursalary << endl << "fixsalaries = " << fixsalary << endl;
	int avg_hrs = hrs;
	cout << "Sum = " << a.total_earnings(avg_hrs);
	cout << "\nNumber of employees = " << a.counter(hourcounter, fixcounter);
	if (a.total_earnings(avg_hrs) != 0) {
		cout << "\n \nSlarie Details: \n";
		p.print();
		cout << " earned  " << p.earnings() << " Tomans";
		d.print();
		cout << " earned  " << d.earnings() << " Tomans";
		l.print();
		cout << " earned  " << l.earnings() << " Tomans";
		o.print();
		cout << " earned  " << o.earnings() << " Tomans";
		h.print();
		cout << " earned " << h.earnings() << " Tomans";
		v.print();
		cout << " earned " << v.earnings() << " Tomans";
		s.print();
		cout << " earned " << s.earnings() << " Tomans";
	}
	else {
		cout << "sorry@ average hours of organization less than standard average (all employees worktimes must be over 240 hours * all employees)";
	}
	cout << "\n\n\n";
	system("pause");
}