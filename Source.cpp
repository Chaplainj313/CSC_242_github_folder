#include <iostream>
#include <cmath>
using namespace std;

//This program prompts user to enter circle raduis
//Then the circle area and circumference are displayed

int main()
{

	//Declare variables
	double radius, area, circumference;
	const double PI = 3.14159;


	//prompt user for radius
	cout << "Enter radius\n";
	cin >> radius;

	//calculate the area of the circle
	area = PI * pow(radius, 2);

	//print the area
	cout << "The area of a circle with radius " << radius << " is " << area << endl;

	//calculate the circumference
	circumference = 2 * PI * radius;


	//print the circumference
	cout << "The circumference of a circle with radius " << radius << " is " << circumference << endl;

	
	return 0;
}


