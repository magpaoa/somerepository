//Micah Agpaoa

#include<iostream>

using namespace std;
// a simple function to multiply stocks by their sworth, nto really neccessary as a function but whatevs
float StockValue(int stocks, double worth)
{
	return stocks * worth;
}



int main()
{
	//worth and stockbumber are userinputs, while total and stocktotal are both for adding up
	float total = 0;
	float worth;
	int stocknumber;
	int stocktotal = 0;
	do 
	{

		cout << "alright, how many stocks do you have? (enter  0 to quit entering stocks)" << endl;
		//this do while is so that negative stocks can't be a thing
		do
		{
			cin >> stocknumber;
			stocktotal += stocknumber;
			//can't have negative stock amounts can we?
			if (stocknumber < 0)
			{
				cout << "impressive that you have negative stocks... unfortuantely we don't calculate that reenter please" << endl;
			}
		} while (stocknumber < 0);
		//breaks on 0
		if (stocknumber == 0)
		{
			break;
		}
		//negative stock value kind of made sense though
		cout << "how much are your stocks worth?" << endl;
		cin >> worth;

		total += StockValue(stocknumber, worth);
	} while (stocknumber != 0);
	//this just prints the total and whatnot
	cout << "you have " << stocktotal << " stocks and" << endl;
	cout << "your stocks are worth: $" << roundf(total * 100) / 100 << endl;

	cin.get();
	cin.get();
	//used to not make things just disappear
	return 0;
}