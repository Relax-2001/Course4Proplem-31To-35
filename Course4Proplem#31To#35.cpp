
#include <iostream>
#include<cmath>

using namespace std;

// #31
int ReadNumber()
{
	int Number = 0;

	cout << "Please enter a number\n";
	cin >> Number;

	return Number;
}

void PowerNumberTo2_3_4(int Number)
{
	int a, b, c;

	a = Number * Number;
	b = Number * Number * Number;
	c = Number * Number * Number * Number;

	cout << a << " " << b << " " << c << "\n";
}

// #32
int ReadPower()
{
	int Power = 0;
	cout << "Enter Power\n";
	cin >> Power;

	return Power;
}

int GetPowerdNumber(int Power , int Number)
{
	int P = 1;

	if (Power == 0)
	{
		// Any number powerd to zero gives 1
		return 1;
	}

	for (int i = 1; i <= Power; i++)
	{
		P *= Number;
	}

	return P;
}

// #33
int ReadNumberInRange(int From , int To)
{
	int Number = 0;

	do
	{
		cout << "Enter a number between " << From << " and " << To << "\n";
		cin >> Number;

	} while (Number > From || Number < To);

	return Number;

}

char GetGradeLetter(int Number)
{

	if (Number >= 90)
		return 'A';
	else if (Number >= 80)
		return 'B';
	else if (Number >= 70)
		return 'C';
	else if (Number >= 60)
		return 'D';
	else if (Number >= 50)
		return 'E';
	else
		return 'F';

}

// #34
float ReadTotalSales()
{
	int TotalSales = 0;
	cout << "Enter total sales\n";
	cin >> TotalSales;

	return TotalSales;
}

float GetCommision(float TotalSales)
{

	if (TotalSales >= 1000000)
		return 0.01;
	else if (TotalSales >= 500000)
		return 0.02;
	else if (TotalSales >= 100000)
		return 0.03;
	else if (TotalSales >= 50000)
		return 0.05;
	else
		return 0.00;


}

float CalculateTotalCommision(float TotalSales)
{
	return GetCommision(TotalSales) * TotalSales;
}

// #35
struct PiggyBankContent
{
	int Pennies, Nickles, Dimes, Quarters, Dollars;
};

PiggyBankContent ReadPiggyBankContent()
{
	PiggyBankContent PiggyBankContent;

	cout << "Enter amount of Pennies\n";
	cin >> PiggyBankContent.Pennies;

	cout << "Enter amount of nickles\n";
	cin >> PiggyBankContent.Nickles;

	cout << "Enter amount of Dimes\n";
	cin >> PiggyBankContent.Dimes;

	cout << "Enter amount of Quarters\n";
	cin >> PiggyBankContent.Quarters;

	cout << "Enter amount of Dollars\n";
	cin >> PiggyBankContent.Dollars;

	return PiggyBankContent;

}

int CalculateTotalPennies(PiggyBankContent PiggyBankContent)
{
	int TotalPennies = PiggyBankContent.Pennies * 1 + PiggyBankContent.Nickles * 5 +
		PiggyBankContent.Dimes * 10 + PiggyBankContent.Quarters * 25 + PiggyBankContent.Dollars * 100;
	return TotalPennies;
}

int main()
{

	// #31
	/*PowerNumberTo2_3_4(ReadNumber());*/

	// #32
	//cout << "Result = " << GetPowerdNumber(ReadPower(), ReadNumber());

	// #33
	//cout << "Result = " << GetGradeLetter(ReadNumberInRange(100 , 0));

	// #34
	/*float TotalSales = ReadTotalSales();

	cout << "Commision persinte = " << GetCommision(TotalSales) << "\n";

	cout << "Total commision = " << CalculateTotalCommision(TotalSales) << "\n";*/

	// #35
	/*int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());

	cout << "Total Pennies = " << TotalPennies << "\n";

	cout << "Total dollars = " << (float) TotalPennies / 100 << "\n";*/


	return 0;
}

