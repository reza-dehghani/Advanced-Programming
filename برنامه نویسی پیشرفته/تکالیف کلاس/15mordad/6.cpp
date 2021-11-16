//رضا دهقانی // تمرین 6 فصل 7 // اجرا شد
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class employee
{
public:
	employee(const string &, const string &, const string &);
	string getFirstName() const;
	string getLastName() const;
	string getcode() const;
	virtual double earnings() const = 0;
	virtual void print() const;
private:
	string firstName;
	string lastName;
	string codemelli;
};
employee::employee(const string &first, const string &last, const string &code)
{
	firstName = first;
	lastName = last;
	codemelli = code;
}
void employee::print() const
{
	cout << getFirstName() << "  " << getLastName() << "  " << getcode();
}
string employee::getFirstName() const
{
	return firstName;
}
string employee::getLastName() const
{
	return lastName;
}
string employee::getcode() const
{
	return codemelli;
}

class fixworker : public employee
{
public:
	fixworker(const string &, const string &, const string &, double = 0.0, double = 0.0);
	void setWage(double);
	void setHours(double);
	virtual double earnings() const;
	virtual void print() const;
private:
	double wage;
	double hours;
};


fixworker::fixworker(const string &first, const string &last, const string &code,
	double w, double h) : employee(first, last, code)
{
	setWage(w);
	setHours(h);
}
void fixworker::setWage(double w)
{
	wage = w > 0 ? w : 0;
}
void fixworker::setHours(double h)
{
	hours = h >= 0 && h < 240 ? h : 0;
}
double fixworker::earnings() const
{
	if (hours <= 140)
		return wage * hours;
	else
		return 140 * wage + (hours - 140) * wage * 1.5;
}
void fixworker::print() const
{
	cout << "\nfix worker: ";
	employee::print();
}

class hourworker : public employee
{
public:
	hourworker(const string &, const string &, const string&, double = 0.0, int = 0);
	void setWage(double);
	void setQuantity(int);
	virtual double earnings() const;
	virtual void print() const;
private:
	double wagePerPiece;
	int quantity;
};


hourworker::hourworker(const string &first, const string &last, const string &code,
	double w, int q)
	:employee(first, last, code)
{
	setWage(w);
	setQuantity(q);
}
void hourworker::setWage(double w)
{
	wagePerPiece = w > 0 ? w : 0;
}
void hourworker::setQuantity(int q)
{
	quantity = q > 0 ? q : 0;
}
double hourworker::earnings() const
{
	return quantity * wagePerPiece;
}
void hourworker::print() const
{
	cout << "\nhour worker:";
	employee::print();
}


int main()
{
	//واحد پولی تومان می باشد
	cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2);
	hourworker p(" Hooshang", " Amirfazli", "0651237539", 10000, 180);
	fixworker h(" Reza", " Namvand", "4653214598", 10000, 180);
	p.print();
	cout << " earned  " << p.earnings() << " Tomans";
	h.print();
	cout << " earned " << h.earnings() << " Tomans";
	cout << endl;
	system("pause");

}