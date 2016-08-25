#include <iostream>
using namespace std;

struct coordinator {
	int x1;
	int y1;
	int r;
}typedef cood;
cood cor[51];
int main()
{
	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	while (T--)
	{
		cood st, de;
		cin >> st.x1 >> st.y1 >> de.x1 >> de.y1;
		int n;
		cin >> n;
		int res = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> cor[i].x1 >> cor[i].y1 >> cor[i].r;
			int slen = (st.x1 - cor[i].x1)*(st.x1 - cor[i].x1) + (st.y1 - cor[i].y1)*(st.y1 - cor[i].y1);
			int dlen = (de.x1 - cor[i].x1)*(de.x1 - cor[i].x1) + (de.y1 - cor[i].y1)*(de.y1 - cor[i].y1);
			if (slen < (cor[i].r*cor[i].r) || dlen < cor[i].r*cor[i].r)
				if (!(slen < cor[i].r*cor[i].r && dlen < cor[i].r*cor[i].r))
					res++;
		}
		cout << res << endl;
	}

	return 0;
}