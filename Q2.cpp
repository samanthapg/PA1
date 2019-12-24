#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
	float x1, x1end, x2, x2end, y1, y1end, y2, y2end, area1, area2, side1, side2;
	//x1end and x2end are the other x coordinate of the square 
	//y1end and y2end are the other y coordinate of the square


	//asking user for the coordinates and area
	cout << "Enter the information for the first square\n";
	cout << "x-coordinate: ";
	cin >> x1;
	if (!cin)
	{
		//error checking to see if input was a number.
		cout << "Input not valid. Please enter a number\n";
		exit(1);
	}

	cout << "y-coordinate: ";
	cin >> y1;
	if (!cin)
	{
		cout << "Input not valid. Please enter a number\n";
		exit(1);
	}
	cout <<"Area: ";
	cin >> area1;

	if (!cin)
	{
		cout << "Input not valid. Please enter a number\n";
		exit(1);
	}
	cout << "Enter the information for the second square\n";
	cout << "x-coordinate: ";
	cin >> x2;
	if (!cin)
	{
		cout << "Input not valid. Please enter a number\n";
		exit(1);
	}
	cout << "y-coordinate: ";
	cin >> y2;
	if (!cin)
	{
		cout << "Input not valid. Please enter a number\n";
		exit(1);
	}
	cout <<"Area: ";
	cin >> area2;
	if (!cin)
	{
		cout << "Input not valid.Please enter a number\n";
		exit(1);
	}
	
	side1=area1/2.0;
	x1end=x1+side1;
	y1end=y1-side1;
	//calculated the length of a side of the square (area/2)
	//in x1end we do x1+side because we are finding the x-cord to the right (x+ direction)
	//in y1end we do y1-side because we are finding the lower x-cord (y- direction)
	
	side2=area2/2.0;
	x2end=x2+side2;
	y2end=y2-side2;

	//The squares will not intersect if the left coord of square 1 (x1) is to the right of the right coord of square 2 (x2end)
	//They also will not intersect if the right coord of square 1 (x1end) is to the left of the left coord of square 2 (x2)
	//or if the upper coord of square 1 is below the bottom corner of square 2
	//or if the bottom coord of square 1 is on top of the upper coord of square 2
	//If none of this conditions are true, then we display The squares do not intersect. 
	//Otherwise they will intersect. 

	if (x1 > x2end || x1end < x2 || y1 < y2end || y1end > y2) 
		{
			cout << "The squares do not intersect \n"; 
		}
	else 
		{
			cout <<"The squares intersect \n";
		}
	return 0;
}

