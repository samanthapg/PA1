#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
	string num1; 
	int i, x, y, temp;
	x=1;
	y=1;

	cout << "Enter a number: ";
	cin >> num1; 

	int length=(num1.size());

 	for (int i=0; i < (length); i++)
 	{
 		if (num1[i] >= '0' && num1[i] <= '9')
 		{
 			temp=1;
 		}
 		else 
 		{
 			temp=0;
 		}
 		x=x*temp;
 	}
 	if (x==0)
 	{
 		cout << "Incorrect input. Input should only contain digits from 0-9\n";
 	}
 	else if (x==1)
		{
			for (int i=0; i < (length-1); i++)
			{
				if (num1[i] == (num1[length-1-i]))
				{
					temp=1;
				}
				else 
				{
					temp=0;
				}
			y=y*temp;
			}
			if (y==0)
			{
				cout <<"The number "<< num1 <<" is not a palindrome. \n"; 
			}
			else if (y==1)
			{
				cout <<"The number "<< num1 <<" is a palindrome. \n"; 
			}	
	    }
	return 0;
}