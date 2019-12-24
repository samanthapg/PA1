#include <iostream>
#include <locale>
using namespace std;

int main()
{
	char letter, result, asciichar;
	int opn, ascii1, ascii2,ascii3, wrap1;
	cout << "Enter a single letter followed by a 1 to change case, 2 to reverse alphabet or 3 to encrypt\n";
	cout << "Enter char and operation: ";
	cin >> letter;
	cin >> opn;

if (isalpha(letter))
{
	if (opn==1)
	{
		if (isupper(letter))
		{
			result=(tolower(letter));
			cout <<"Result: "<< result <<"\n";
		}
		else 
		{
			result=(toupper(letter));
			cout <<"Result: "<< result <<"\n";
		}
	}
	else if (opn==2)
	{
		if (isupper(letter))
			{
				ascii1=int(letter);
				ascii2=ascii1-65;
				ascii3=90-ascii2;
				asciichar=char(ascii3);
				result=(tolower(asciichar));
				cout <<"Result: "<< result <<"\n";
			}
		else 
			{
				ascii1=int(letter);
				ascii2=ascii1-97;
				ascii3=122-ascii2;
				asciichar=char(ascii3);
				result=(toupper(asciichar));
				cout <<"Result: "<< result <<"\n";
			}
	}
	else if (opn==3)
	{
		if (isupper(letter))
		{
			ascii1=int(letter);
			if (ascii1>=85)
			{
				wrap1=90-ascii1;
				ascii2=96-wrap1;
				ascii3=ascii2+6;
				asciichar=char(ascii3);
			}
			else 
			{
				ascii2=ascii1+6;
				asciichar=char(ascii2);
			}
		}
		else 
		{
			ascii1=int(letter);
			if (ascii1>=117)
			{
				wrap1=122-ascii1;
				ascii2=64-wrap1;
				ascii3=ascii2+6;
				asciichar=char(ascii3);
			}
			else 
			{
				ascii2=ascii1+6;
				asciichar=char(ascii2);
			}	
		}
		result=asciichar;
		cout <<"Result: "<<result <<"\n";
		
	}
	
	else
	{
		cout << "Operation input not valid\n";
	}
}
else 
{	
	cout <<"Please enter a single letter\n";	
}

	return 0;
}