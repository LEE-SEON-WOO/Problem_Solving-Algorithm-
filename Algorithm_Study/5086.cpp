#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int A, B;
	bool factor = true;
	bool multiple = true;
	do
	{
		cin >> A >> B;
		if (A == 0 && B == 0)
			break;
		if (A%B == 0)
		{
			factor = true;
		}
		else
			factor = false;
		if (B%A == 0)
		{
			multiple = true;
		}
		else
			multiple = false;
		if (!factor && !multiple)
			cout << "neither\n";
		else if (!multiple&&factor)
			cout << "multiple\n";
		else if(multiple&&!factor)
			cout << "factor\n";
		factor = false;
		multiple = false;		
	} while (A != 0 && B != 0);

	return 0;
}