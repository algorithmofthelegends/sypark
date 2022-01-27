#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main(void)
{
	int N;
	int nMin;
	int nMax;
	int nResult = 0;
	vector <int> vnA;
	vector <int> vTemp;
	vector <int> vResult;


	cin >> N;

	vResult.assign(N + 1, 0);

	for (int i = 0; i < N; i++)
	{
		int nTemp;
		cin >> nTemp;
		vnA.push_back(nTemp);


	}

	/*nMin = vnA[0];
	nMax = vnA[0];
	vTemp.push_back(vnA[0]);


	for (int i = 1; i < N; i++)
	{
		vTemp.push_back(vnA[i]);

		if (vnA[i] < nMin)
			nMin = vnA[i];
		if (vnA[i] > nMax)
			nMax = vnA[i];

		if (nMax - nMin <= 2)
		{
			vResult[i] = vResult[i - 1] + 1;
		}
		else
		{
			vTemp.erase(vTemp.begin());

			nMin = *min_element(vTemp.begin(), vTemp.end());
			nMax = *max_element(vTemp.begin(), vTemp.end());
			vResult[i] = vResult[i-1];

		}

	}*/


	/*
	for (int i = 0; i < vnA.size(); i++)
	{

		int cnt = 1;

		int nMin = vnA[i];
		int nMax = vnA[i];
		for (int j = i+1; j < vnA.size(); j++)
		{


			if (vnA[j] < nMin)
				nMin = vnA[j];

			if (vnA[j] > nMax)
				nMax = vnA[j];

			if (nMax - nMin <= 2)
				cnt++;
			else
			{
				if (j - i == 1)
					cnt = 0;
				break;
			}



		}
		vdp[i] = cnt;

	}
	*/
	/*nResult = *max_element(vResult.begin(), vResult.end());*/

	cout << nResult+1 << endl;

	return 0;


}
