#include <iostream>
#include <stdlib.h>
using namespace std;

int countdig (int num);

int main()
{
	int num1, num2, dig1,dig2,rem1,rem2,temp1,temp2,x1,x2,count, maxdig;
	cout << "Enter two numbers between 0-100: ";
	cin >> num1;
	if (!cin)
	{
		cout << "Input not valid. Please enter an integer from 1 to 100\n";
		exit(1);
	}
	cin >> num2;
	if (!cin)
	{
		cout << "Input not valid. Please enter a number from 1 to 100\n";
		exit(1);
	}
//find number of digits
	dig1=countdig(num1);
	dig2=countdig(num2);
//copies of numbers entered
	temp1=num1;
	temp2=num2;
	x1=num1;
	x2=num2;

	if (num1>num2)
	{
	//loop to divide both numbers by 3 (while comparing their remainders) until number2 (smallest) reaches 0. 	
	//every time the remainders are equal, increment a counter	
		while (num2>0)
		{
			num1=num1/3;
			rem1=temp1-(3*num1);
			num2=num2/3;
			rem2=temp2-(3*num2);
			if (rem1==rem2)
			{
				count=count+1;
			}
			temp1=num1;
			temp2=num2;
			rem2=temp2;
		}
		//when num2 reaches 0, all the remainders of num2 are going to be 0 so we check to see if any of the remainders of num1 is going to be zero
		while (num1>0)
		{
			num1=num1/3;
			rem1=temp1-(3*num1);
			if (rem1==0)
			{
				count=count+1;
			}
			temp1=num1;
		}

	}
	else 
	{
		//same process as before (only difference is changing num1 and num2 because num2 in this case is going to be larger or equal)
		while (num1>0)
		{
			num1=num1/3;
			rem1=temp1-(3*num1);
			num2=num2/3;
			rem2=temp2-(3*num2);
			if (rem1==rem2)
			{
				count=count+1;
			}
			temp1=num1;
			temp2=num2;
			rem1=temp1;
		}
		while (num2>0)
		{
			num2=num2/3;
			rem2=temp2-(3*num2);
			if (rem2==0)
			{
				count=count+1;
			}
			temp2=num2;
		}
	}
		
//finding which number has more digits
 	if (dig1>dig2)
 	{
 			maxdig=dig1;
 	}
 	else if (x1==x2)
 	{
 			maxdig=count;
 	}
 	else
 	{
 		maxdig=dig2;
 	}
 		//hamming distance will be the number of digits minus the number of equal remainders=different remainders
 		cout <<"Hamming Distance Between " << x1 <<" and " <<x2 << " when numers are in ternary format is " << (maxdig-count) <<".\n";

	return 0;
}

//function to count the number of digits in the numbers inputed by the user
//if th input is not a number from 1 to 100  the program will terminate
int countdig (int num)
{
	int dig;
	if (num >= 0 && num<= 2)
	{
		dig=1;
	}
	else if (num >=3 && num<=8)
	{
		dig=2;
	}
	else if (num >=9 && num<=26)
	{
		dig=3;
	}
	else if (num >=27 && num<=80)
	{
		dig=4;
	}
	else if (num >=81 && num<=100)
	{
		dig=5;
	}
	else 
	{
		cout <<"Please enter 2 integers between 0-100\n";
		exit(1);
	}
	return dig;
}
