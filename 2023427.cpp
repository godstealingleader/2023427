#include <iostream>
#include <string>

int main()
{
	using namespace std;
	const int month_nember = 12;
	string month[month_nember]
	{
		"Jan",	"Feb",	"Mar",	"Apr",
		"May",	"Jun",	"Jul",	"Aug",
		"Sept",	"Oct",	"Nov",	"Dec",
	};
	int sell[month_nember]{ 0 }, sum = 0;
	for (int i = 0; i < month_nember; i++)
	{
		cout << "in " << month[i] << " this book sold:";
		cin >> sell[i];
		sum = sum + sell[i];
	}
	cout << "in this year, this book sold " << sum << endl<<"and ";
	for (int i = 0; i < month_nember; i++)
	{
		cout << month[i] << " sold " << sell[i] << endl;
	}

	return 0;
}