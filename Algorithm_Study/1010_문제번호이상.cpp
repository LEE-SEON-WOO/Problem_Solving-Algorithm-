#include <iostream>
#include <string>
#include <cmath>
#include <map>
using namespace std;
typedef long long int INT;
int main()
{
	ios::sync_with_stdio(false);
	string str1, str2, str3;
	map<string, pair<INT, INT> > _map;
	_map["black"].first = 0;
	_map["black"].second = pow(10, 0);
	_map["brown"].first = 1;
	_map["brown"].second = pow(10, 1);
	_map["red"].first = 2;
	_map["red"].second = pow(10, 2);
	_map["orange"].first = 3;
	_map["orange"].second = pow(10, 3);
	_map["yellow"].first = 4;
	_map["yellow"].second = pow(10, 4);
	_map["green"].first = 5;
	_map["green"].second = pow(10, 5);
	_map["blue"].first = 6;
	_map["blue"].second = pow(10, 6);
	_map["violet"].first = 7;
	_map["violet"].second = pow(10, 7);
	_map["grey"].first = 8;
	_map["grey"].second = pow(10, 8);
	_map["white"].first = 9;
	_map["white"].second = pow(10, 9);
	cin >> str1 >> str2 >> str3;
	cout<<(_map[str1].first * 10 + _map[str2].first)*_map[str3].second;
	return 0;
}