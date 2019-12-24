#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;

double grade2num (string test);
double gpacalc (double grade1, double grade2, double grade3, double grade4, double grade5);

int main()
{
string class1, class2, class3, class4, class5;
double grade1, grade2, grade3, grade4, grade5;
double GPA;

//asking user for grades in the 5 classes
//calls function grade2num which returns a double saved in grade().
cout <<"Enter grade for class 1: ";
cin >> class1;
grade1=grade2num(class1);

cout <<"Enter grade for class 2: ";
cin >> class2;
grade2=grade2num(class2);

cout <<"Enter grade for class 3: ";
cin >> class3;
grade3=grade2num(class3);

cout <<"Enter grade for class 4: ";
cin >> class4;
grade4=grade2num(class4);

cout <<"Enter grade for class 5: ";
cin >> class5;
grade5=grade2num(class5);

GPA= gpacalc(grade1, grade2, grade3, grade4, grade5);
//calling function gpacalc to calculate the average from the 5 classes
cout << "GPA: "<< fixed << setprecision(2)<< GPA <<"\n";


return 0;
}

double grade2num (string test)
{
	//the function checks the grade entered and assigns to it a value.
	// If it is not an accepted letter or input, it displays Error: Incorrect input!. 

	double grade;
	if (test == "A") 
		{grade=4.0;}
	else if (test == "A-")
		{grade=3.7;}
	else if (test == "B+")
		{grade=3.3;}
	else if (test == "B")
		{grade=3.0;}
	else if (test == "B-")
		{grade=2.7;}
	else if (test == "C+")
		{grade=2.3;}
	else if (test == "C")
		{grade=2.0;}
	else if (test == "C-")
		{grade=1.7;}
	else if (test == "D")
		{grade=1.0;}
	else if (test == "F")
		{grade=0.0;}
	else 
		{
			cout <<"Error: incorrect input! \n";
			exit(1);
		}
	return grade;
//the function then returns a double. 
}

double gpacalc (double grade1, double grade2, double grade3, double grade4, double grade5){
	double gpa;
	gpa=(grade1+grade2+grade3+grade4+grade5)/5;
	return gpa;
	//gpacalc calculates the average by adding the five numbers and dividing the result by 5 (number of grades entered).
	//function then returns a double which is the gpa.
}
