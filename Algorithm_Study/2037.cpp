#include <iostream>
#include <cstring>
using namespace std;
char str[1005];
long long int p, w, s = 0;
void strcheck2(int i)
{
	if (i - 1 < 0)
		return;
	if (str[i - 1] == 'A' || str[i - 1] == 'B' || str[i - 1] == 'C')
	{
		s += w;
		//cout << "s더함" << endl;
	}
}
void strcheck3(int i)
{
	if (i - 1 < 0)
		return;
	if (str[i - 1] == 'D' || str[i - 1] == 'E' || str[i - 1] == 'F')
	{
		s += w;//cout << "s더함" << endl;
	}
}
void strcheck4(int i)
{
	if (i - 1 < 0)
		return;
	if (str[i - 1] == 'G' || str[i - 1] == 'H' || str[i - 1] == 'I')
	{
		s += w;//cout << "s더함" << endl;
	}
}
void strcheck5(int i)
{
	if (i - 1 < 0)
		return;
	if (str[i - 1] == 'J' || str[i - 1] == 'K' || str[i - 1] == 'L')
	{
		s += w;//cout << "s더함" << endl;
	}
}
void strcheck6(int i)
{
	if (i - 1 < 0)
		return;
	if (str[i - 1] == 'M' || str[i - 1] == 'N' || str[i - 1] == 'O')
	{
		s += w;
		//cout << "s더함" << endl;
	}

}
void strcheck7(int i)
{
	if (i - 1 < 0)
		return;
	if (str[i - 1] == 'P' || str[i - 1] == 'Q' || str[i - 1] == 'R' || str[i - 1] == 'S')
	{
		s += w;
		cout << "s더함" << endl;
	}
}
void strcheck8(int i)
{
	if (i - 1 < 0)
		return;
	if (str[i - 1] == 'T' || str[i - 1] == 'U' || str[i - 1] == 'V')
	{
		s += w;
		//cout << "s더함" << endl;
	}
}
void strcheck9(int i)
{
	if (i - 1 < 0)
		return;
	if (str[i - 1] == 'X' || str[i - 1] == 'Y' || str[i - 1] == 'W' || str[i - 1] == 'Z')
	{
		s += w;
		//cout << "s더함" << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false);

	//cout << (int)'A' << (int)' ' << (int)'Z' << endl;
	cin >> p >> w;
	cin.ignore(1, '\n');
	cin.getline(str, 1005);
	for (int i = 0; i < strlen(str); i++)
	{
		//cout << str[i] << " ";
		switch (str[i])
		{
		case ' ':
		case '1':
		case '*':
		case '0':
		case '#':
			s += p;
			continue;
		case 'A':
			strcheck2(i);
			
			s += (p);
			//cout << s << endl;
			continue;
		case 'B':
			strcheck2(i);

			s += (2 * p);
			//cout << s << endl;
			continue;
		case 'C':
			strcheck2(i);
			
			s += (3 * p);
			//cout << s << endl;
			continue;

		case 'D':
			strcheck3(i);
			s += (p);
			//cout << s << endl;
			continue;
		case 'E':
			strcheck3(i);
			s += (2 * p);
			//cout << s << endl;
			continue;
		case 'F':
			strcheck3(i);
			s += (3 * p);
			//cout << s << endl;
			continue;

		case 'G':
			strcheck4(i);
			s += (p);
			//cout << s << endl;
			continue;
		case 'H':
			strcheck4(i);
			s += (2 * p);
			//cout << s << endl;
			continue;
		case 'I':
			strcheck4(i);
			s += (3 * p);
			//cout << s << endl;
			continue;

		case 'J':
			strcheck5(i);
			s += (p);
			//cout << s << endl;
			continue;
		case 'K':
			strcheck5(i);
			s += (2 * p);
			//cout << s << endl;
			continue;
		case 'L':
			strcheck5(i);
			s += (3 * p);
			//cout << s << endl;
			continue;

		case 'M':
			strcheck6(i);
			s += (p);
			//cout << s << endl;
			continue;
		case 'N':
			strcheck6(i);
			s += (2 * p);
			//cout << s << endl;
			continue;
		case 'O':
			strcheck6(i);
			s += (3 * p);
			//cout << s << endl;
			continue;

		case 'P':
			strcheck7(i);
			s += (p);
			//cout << s << endl;
			continue;
		case 'Q':
			strcheck7(i);
			s += (2 * p);
			//cout << s << endl;
			continue;
		case 'R':
			strcheck7(i);
			s += (3 * p);
			//cout << s << endl;
			continue;
		case 'S':
			strcheck7(i);
			s += (4 * p);
			//cout << s << endl;
			continue;


		case 'T':
			strcheck8(i);
			s += (p);
			//cout << s << endl;
			continue;
		case 'U':
			strcheck8(i);
			s += (2 * p);
			//cout << s << endl;
			continue;
		case 'V':
			strcheck8(i);
			s += (3 * p);
			//cout << s << endl;
			continue;

		case 'W':
			strcheck9(i);
			s += (p);
			//cout << s << endl;
			continue;
		case 'X':
			strcheck9(i);
			s += (2 * p);
			//cout << s << endl;
			continue;
		case 'Y':
			strcheck9(i);
			s += (3 * p);
			//cout << s << endl;
			continue;
		case 'Z':
			strcheck9(i);
			s += (4 * p);
			//cout << s << endl;
			continue;
		}
	}
	cout << s <<endl;
	return 0;
}