#include <iostream>

using namespace std;

class Point
{
private:
	int _x; //mX
	int _y;
public:
	Point() {};
	Point(int x, int y) { this->_x = x; this->_y = y; }
	~Point() { cout << "This is destructor call" << endl; }
	void setX(int x) { this->_x = x; };
	void setY(int y) { this->_y = y; };
	int getX() { return _x; };
	int getY() { return _y; };
	void print();
};



void Point::print() { cout << "Point: (" << _x << "," << _y << ")" << endl; }

int main()
{
	Point a(1, 2);
	Point b;
	Point* c = new Point(3, 5);
	c->print();
	a.print();
	delete(c);
	a.setX(10);
	a.setY(20);
	a.print();

	return 0;
}