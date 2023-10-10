#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x;
	double y; 
	double R;
	srand((unsigned)time(NULL));
	
	cout << "R = "; cin >> R;

	for (int i = 0; i < 10; i++)
	{

		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		// розгалуження в повній формі
		if ((x <= 0 && y <= x + R && y >= 0) ||
			(x <= 0 && pow(y, 2) <= pow(R, 2) - pow(x, 2) && y <= 0) ||
			(x >= 0 && pow(y, 2) <= pow(R, 2) - pow(x, 2) && y >= 0))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

		for (int i = 0; i < 10; i++)
		{
			x = 2*R * rand() / RAND_MAX - R;
			y = 2*R * rand() / RAND_MAX - R;
			if ((y >= 1 && y <= 3 && x >= -1 && x <= 1) ||
				(x * x + y * y <= 1) ||
				(y >= -2 && y <= x - 1 && y <= -x - 1))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}