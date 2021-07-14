#include "std_lib_facilities.h"

int main()
{
	int rice1 = 1000;
	int rice2 = 1000000;
	int rice3 = 1000000000;

	int squarecount1 = 1;
	int squarecount2 = 1;
	int squarecount3 = 1;

	int temprice1 = 1;
	int temprice2 = 1;
	int temprice3 = 1;

	while (temprice1 < rice1)
	{
		temprice1 = temprice1 + pow(2,squarecount1);
		++squarecount1;
	}

	cout << "The number of squares to reach " << rice1 << " number of rice is " << squarecount1 << ".\n";

	while (temprice2 < rice2)
	{
		temprice2 = temprice2 + pow(2, squarecount2);
		++squarecount2;
	}

	cout << "The number of squares to reach " << rice2 << " number of rice is " << squarecount2 << ".\n";

	while (temprice3 < rice3)
	{
		temprice3 = temprice3 + pow(2, squarecount3);
		++squarecount3;
	}

	cout << "The number of squares to reach " << rice3 << " number of rice is " << squarecount3 << ".\n";

	keep_window_open();
	return 0;

}