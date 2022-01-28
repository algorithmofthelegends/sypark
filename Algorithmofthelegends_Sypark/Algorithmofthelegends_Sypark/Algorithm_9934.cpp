#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

int main(void)
{

	int K;
	vector<int> vTemp;;
	vector<int> vHead;
	queue<int> nQueue[10];
	int nCount;
	cin >> K;
	vHead.push_back(0);
	for (int i = 0; i < K; i++)
	{
		vHead.push_back(pow(2, i) + vHead[i]);
	}
	nCount = pow(2, K) - 1;
	
	for (int i = 0; i < pow(2, K) - 1; i++)
	{
		int nTemp;
		int nTemp2;
		cin >> nTemp;
		vTemp.push_back(nTemp);

	}

	for (int i = 0; i < vTemp.size(); i++)
	{

		for (int j = 0; j < K; j++)
		{
			int nSu = pow(2, j + 1);

			if (i % nSu == vHead[j])
			{
				nQueue[K-j-1].push(vTemp[i]);
				break;
			}
		}
	}



	for (int i = 0; i < K ; i++)
	{
		int nCount = nQueue[i].size();
		for (int j = 0; j < nCount; j++)
		{
			if (!nQueue[i].empty())
			{
				int nTemp = nQueue[i].front();
				cout << nTemp << " ";
				nQueue[i].pop();
			}
		}
		cout << endl;
	}

}