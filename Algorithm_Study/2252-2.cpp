#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;
struct graph
{
	//int index;//��� ��ȣ
	vector<int> inlink;//in ����� ����
					   //list<int> outlink;//out ����� ����
	//int visit;//�湮�ߴ��� �ƴ��� �˻�
	int in = 0;//in edge
	//int out = 0;//out edge
};
graph a[32100];
list<int> res;
vector<int> _res;
int main()
{
	int num = 0;//�� ����� ����
	int comp = 0;//�� Ƚ��
	int in1, in2;//�Է¹޴� ���

	
	cin >> num >> comp;
	int si = num;
	for (int i = 0;i < comp;i++)
	{
		cin >> in1 >> in2;
		a[in2].inlink.push_back(in1);//1 5 �� �Է� ���� �� 5�� 1���Է� ����
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


		//in�� 0�ΰŴ�� �ֱ�
		//if (a[j].in == 0)
		//{
			//res.push_back(j);
			//a[j].in = -1;//���� �˻� ���ص� �Ǵϱ� -1�� �ٲ�
			//si--;
			//for (int k = 0;k < a[j].inlink.size();k++)
			//{
				//a[a[j].inlink[k]].in--;//����� �ֵ� in ���̱�
									   //�ڿ� �� ���� ���ϸ� �׳� ���� j��
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


