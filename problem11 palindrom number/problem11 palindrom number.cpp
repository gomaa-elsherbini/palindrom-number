#include <iostream>
#include <string>
using namespace std;

int readPositiveNumber(string msg)
{
	int num=0;

	do
	{
		cout << msg << endl;
		cin >> num;
	} while (num<=0);

	return num;
}

int reverseNumberDigits(int num)
{
	int reversedNumber = 0;

	while (num > 0)
	{
		int reminder = num % 10;
		num = num / 10;

		reversedNumber = reversedNumber * 10 + reminder;
	}
	return reversedNumber;
}

bool checkPalindromeNumber(int num)
{
	int reversedNumber = reverseNumberDigits(num);
	return num == reversedNumber;
}

void printCheckPalindromeNumber(bool res)
{
	if (res)
		cout << " Yes it is a Palindrome number\n\n ";
	else
		cout << " No it is not a Palindrome number\n\n ";

}

int main()
{
	printCheckPalindromeNumber(checkPalindromeNumber(readPositiveNumber("please enter a number?")));

	return main();
}

/*int readNumber(string msg)
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
*/