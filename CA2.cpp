#include <iostream> 
#include <iomanip> 
#include "windows.h"
#include "math.h"

using namespace std;

int main()
{
	int xmax = 6, xmin = 3;
	float h;
	cout << "Enter h =";
	cin >> h;
	float y, x;
	while (x<=xmax)
	{
		y = tan(x*x)-3+2*x;
		cout << setw(10) << "x=" << x << setw(10) << "y=" << y << endl;
		x += h;
	}
	system("pause");
	return 0;
}
