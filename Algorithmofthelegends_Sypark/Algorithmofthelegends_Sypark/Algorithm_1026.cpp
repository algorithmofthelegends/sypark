#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int N;

	vector<int>A;
	vector<int>B;
	vector<int>ATemp;
	vector<int>Brank;
	int nRank = 0;
	int result = 0;

	cin >> N;


	for (int i = 0; i < N; i++)
	{
		int nTemp;
		cin >> nTemp;
		A.push_back(nTemp);
		Brank.push_back(0);
		ATemp.push_back(0);

	}

	for (int i = 0; i < N; i++)
	{
		int nTemp;
		cin >> nTemp;
		B.push_back(nTemp);

	}
	sort(A.begin(), A.end());

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (B[i] < B[j])
			{
				Brank[i]++;

			}
			else if (B[i] == B[j])
			{
				if (i < j)
					Brank[i] ++;

			}


		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == Brank[j])
			{
				ATemp[j] = A[i];

			}


		}

	}
	A = ATemp;
	for (int i = 0; i < N; i++)
	{

		result += A[i] * B[i];

	}

	cout << result;

}