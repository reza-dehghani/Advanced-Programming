// به نام خدا // رضا دهقانی // تمرین 5 فصل 7 // اجرا شد
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class IllegalArgumentException {};

class Shape {
public:
	Shape(int init_x, int init_y) : x(init_x), y(init_y) {}
	int get_x() const { return x; }
	int get_y() const { return y; }
	void move(int dx, int dy);


	// برای تعریف مساحت خط ابتدا متود مجازی خالص را در اینجا تعریف می کنیم و مقدار اولیه آن را مساوی صفر قرار می دهیم
	//virtual int masahat() = 0;
	virtual void scale(int s) = 0;
	virtual void print() = 0;
protected:
	int x;
	int y;
};

void Shape::move(int dx, int dy)
{
	x += dx;
	y += dy;
}

class line : public Shape {
public:
	line(int init_x, int init_y, int w);
	virtual void scale(int s);
	virtual void print();
private:
	int width;
};

line::line(int init_x, int init_y, int w)
	: Shape(init_x, init_y)
{
	if (w <= 0)
		throw IllegalArgumentException();
	width = w;
}

void line::scale(int s)
{
	width *= s;
}

void line::print()
{
	cout << "line: " << x << ',' << y << ',' << width<< endl;
}
/* سپس آن را در اینجا تعریف می کنیم: مساحت خط برابر است با انتگرال خط که باید در اینجا پیاده سازی شود اما به دلیل پیچیدگی
از آن صرف نظر می کنیم
virtual int masahat() {
	return dx 
}*/
int main()
{
	vector<Shape*> shapes;

	while (true) {
		cout << "l. New Line\n";
		cout << "p. Display Shapes\n";
		cout << "m. Move\n";
		cout << "s. Scale\n";
		cout << "w. Masahat\n";
		cout << "q. Exit\n";

		char ch;
		cin >> ch;

	
		if (ch == 'l') {
			int x, y, w;
			cout << "enter x, y, and width";
			cin >> x >> y >> w;

			line *lin = new line(x, y, w);
			shapes.push_back(lin);
		}
		else if (ch == 'p') {
			for (int i = 0; i < shapes.size(); i++)
				shapes[i]->print();
			cout << endl;

		}
		else if (ch == 'm') {
			int dx, dy;
			cout << "enter dx, dy: ";
			cin >> dx >> dy;
			for (int i = 0; i < shapes.size(); i++)
				shapes[i]->move(dx, dy);

		}
		else if (ch == 's') {
			int s;
			cout << "enter s: ";
			cin >> s;
			for (int i = 0; i < shapes.size(); i++)
				shapes[i]->scale(s);
		}
		else if (ch == 'w') {
			cout << "Description in source code";
		}
			/* در نهایت در این جا آنرا فراخوانی می کنیم

			int s;
			cout << "Rect line: "<< shapes[0]->line()<<endl;
		*/
		else if (ch == 'q') {
			for (int i = 0; i < shapes.size(); i++)
				delete shapes[i];
			break;
		}
	}
}