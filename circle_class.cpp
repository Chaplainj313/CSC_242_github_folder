#include <iostream>
using namespace std;

//This program prompts user to enter circle raduis
//Then the circle area is displayed


class Circle
{
public:

	Circle();
	Circle(double r);
	void setRadius(double r);
	double getRadius();
	double area();
	double perimeter();
	

private:
	double radius;
	const double PI = 3.14159;
	
};


Circle::Circle()
{
	radius = 1;
}

Circle::Circle(double r)
{
	radius = r;
}


void Circle::setRadius(double r)
{

	if (r >= 0)
		radius = r;

}

double Circle::getRadius()
{
	return radius;
}

double Circle::area()
{
	return PI * pow(radius, 2);
}

double Circle::perimeter()
{
	return 2 * PI * radius;
}




int main()
{

	Circle c1(25);

	cout << "The area of the circle is: " << c1.area();
	
	return 0;

}