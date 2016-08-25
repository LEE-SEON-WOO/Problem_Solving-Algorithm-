#include <iostream>
#include <cstring>
#include <list>
#include <vector>
using namespace std;
int balloon_cnt;
int balloon[1005];
int arr[1005];
bool chk[1005];
int idx = 1;
void input() {
	cin >> balloon_cnt;
	for (int i = 0; i < balloon_cnt; i++)
	{
		cin >> balloon[i];
	}
}
int main() {
	input();
	int tmp = balloon[0];
	arr[0] = 1;
	chk[0] = 1;
	int cnt = 0;
	int pop = 1;
	int i = 0;
	int go = 0;
	while (pop != balloon_cnt) {
		tmp = go = balloon[i];
		if (tmp < 0)tmp = -tmp;
		while (cnt != tmp)
		{
			if (go < 0)
			{
				i--;
			}
			else {
				i++;
			}
			if (i < 0) {
				i += balloon_cnt;
			}
			else if (i >= balloon_cnt) {
				i -= balloon_cnt;
			}
			if (chk[i] == 0) {
				cnt++;
			}
		}
		cnt = 0;
		chk[i] = 1;
		arr[idx++] = i + 1;
		pop++;
	}
	for (int i = 0; i < balloon_cnt; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}

