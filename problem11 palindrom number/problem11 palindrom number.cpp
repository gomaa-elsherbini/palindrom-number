#include <iostream>
#include <string>
using namespace std;


int readNumber(string msg)
{
	int num;
	cout << msg << endl;
	cin >> num;
	return num;
}

int getLength(string str)
{
	int length = 0;
	int counter = 0;

	while (str[counter])
	{
		length++;
		counter++;
	}
	return length;
}

int reverseNumber(int num)
{
	string reversedNumber = "";
	string str = to_string(num);
	int length = getLength(str);

	for (int i = length-1; i>=0; i--)
	{
		reversedNumber += str[i];
	}
	return  stoi(reversedNumber);
}

void checkPalindromeNumber(int num)
{
	if (num == reverseNumber(num))
	{
		cout << "Yes, it is a Palindrome number.\n\n";
	}
	else
	{
		cout << "No, it is Not a Palindrome number.\n\n";
	}
}

int main()
{
	checkPalindromeNumber(readNumber("enter Number?"));

	return main();
}