#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct TreeNode
{
	char left=NULL;
	char right=NULL;
}typedef TreeNode;
TreeNode A[27];
void preorder(int a)
{
	if (a < 0)
		return;
	cout << (char)(a + (int)'A');
	preorder(A[a].left - 'A');
	preorder(A[a].right - 'A');
}
void inorder(int a)
{
	if (a < 0)
		return;
	inorder(A[a].left - 'A');
	cout << (char)(a + (int)'A');
	inorder(A[a].right - 'A');
}
void postorder(int a)
{
	if (a < 0)
		return;
	postorder(A[a].left - 'A');
	postorder(A[a].right - 'A');
	cout << (char)(a + (int)'A');
}
int main()
{
	ios::sync_with_stdio(false);
	int N;

	char r, L, R;
	TreeNode T;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> r >> L >> R;
		A[r - 'A'].left = L;
		A[r - 'A'].right = R;
	}
	preorder(0);
	cout << "\n";
	inorder(0);
	cout << "\n";
	postorder(0);
	cout << "\n";
	return 0;
}