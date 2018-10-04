#include <iostream>
using namespace std;

class Shape
{
protected:
	int width;
	int height;
	
public:
	Shape(int w, int h)
	{
		width = w;
		height = h;
	}
	virtual double area() = 0;
};

class Rectangle : public Shape
{
public:
	Rectangle(int w, int h) : Shape(w, h) {}
	double area()
	{
		return width * height;
	}
};

class Triangle : public Shape
{
public:
	Triangle(int w, int h) : Shape(w, h) {}
	double area()
	{
		return (width * height) / 2.0;
	}
};

int main()
{
	//cout << "here" << endl;
	int w, h;
	cout << "Rectangle: ";
	cin >> w; cin >> h;
	Rectangle r(w, h);
	cout << "Triangle: ";
	cin >> w; cin >> h;
	Triangle t(w, h);
	cout << "Rectangle area: " << r.area() << endl;
	cout << "Triangle area:  " << t.area() << endl;
	return 0;
}









