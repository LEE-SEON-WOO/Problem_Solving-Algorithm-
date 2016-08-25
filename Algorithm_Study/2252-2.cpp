#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;
struct graph
{
	//int index;//노드 번호
	vector<int> inlink;//in 연결된 노드들
					   //list<int> outlink;//out 연결된 노드들
	//int visit;//방문했는지 아닌지 검사
	int in = 0;//in edge
	//int out = 0;//out edge
};
graph a[32100];
list<int> res;
vector<int> _res;
int main()
{
	int num = 0;//총 노드의 갯수
	int comp = 0;//비교 횟수
	int in1, in2;//입력받는 노드

	
	cin >> num >> comp;
	int si = num;
	for (int i = 0;i < comp;i++)
	{
		cin >> in1 >> in2;
		a[in2].inlink.push_back(in1);//1 5 가 입력 됬을 때 5가 1에게로 연결
		a[in1].in++;
	}
	for (int i = 1; i <= num; i++)
	{
		if (a[i].in == 0)
			res.push_back(i);
	}

	while (!res.empty())
	{
		/*if (si == 0)
		{
			break;
		}
		if (a[j].in == -1)
		{
			j++;
			continue;
		}*/
		//////////
		int i = res.front();
		res.pop_front();
		_res.push_back(i);
		for (int j = 0; j < a[i].inlink.size(); j++)
		{
			a[a[i].inlink[j]].in--;
			if (a[a[i].inlink[j]].in == 0)
				res.push_back(a[i].inlink[j]);
		}


		//in이 0인거대로 넣기
		//if (a[j].in == 0)
		//{
			//res.push_back(j);
			//a[j].in = -1;//이제 검사 안해도 되니까 -1로 바꿈
			//si--;
			//for (int k = 0;k < a[j].inlink.size();k++)
			//{
				//a[a[j].inlink[k]].in--;//연결된 애들 in 줄이기
									   //뒤에 꺼 값이 변하면 그냥 원래 j로
									   /*   if (a[j].inlink[k]>j)
									   {
									   flag = 2;
									   }
									   else if (j == num)
									   {
									   flag = 1;
									   }*/
			//}
			/*if (flag == 1)*/
			//j = 1;
			//continue;
		//}
		//j++;
	}

	for (int i = _res.size() - 1;i >= 0;i--)
	{
		cout << _res[i] << " ";
	}
	cout << endl;
	return 0;
}


