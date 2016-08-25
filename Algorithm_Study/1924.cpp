#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int m, d;
	int sum = 0;
	cin >> m >> d;
	//m--;
	//d--;
	if ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12))
	{
		sum -= 31;
		//cout << "sum = " << sum << " ";
	}
	else if ((m == 4) || (m == 6) || (m == 9) || (m == 11))
	{

		sum -= 30;
		//cout << "sum = " << sum << " ";
	}
	else if (m == 2)
	{
		sum -= 28;
		//cout << "sum = " << sum << " ";
	}
	for (int i = 1; i <= m; i++)
	{
		if ((i == 1) || (i == 3) || (i == 5) || (i == 7) || (i == 8) || (i == 10) || (i == 12))
		{
			sum += 31;
			//cout << "sum = " << sum << " ";
		}
		else if ((i == 4) || (i == 6) || (i == 9) || (i == 11))
		{
			
			sum += 30;
			//cout << "sum = " << sum << " ";
		}
		else if (i == 2)
		{
			sum += 28;
			//cout << "sum = " << sum << " ";
		}
			
	}
	//cout << sum <<" "<< d << endl;
	switch ((sum + d)%7)
	{
	case 0:
		cout << "SUN";
		break;
	case 1:
		cout << "MON";
		break;
	case 2:
		cout << "TUE";
		break;
	case 3:
		cout << "WED";
		break;
	case 4:
		cout << "THU";
		break;
	case 5:
		cout << "FRI";
		break;
	case 6:
		cout << "SAT";
		break;
	}
	

	return 0;
}