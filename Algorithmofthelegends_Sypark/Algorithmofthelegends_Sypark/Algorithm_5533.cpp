#include<iostream>
#include<vector>
using namespace std;

int main(void)
{

	int N;
	cin >> N;
	vector<int>v1, v2, v3;
	vector<int>v1result, v2result, v3result;

	for (int i = 0; i < N; i++)
	{
		int p1, p2, p3;

		cin >> p1 >> p2 >> p3;

		v1.push_back(p1);
		v2.push_back(p2);
		v3.push_back(p3);



	}
	for (int i = 0; i < N; i++)
	{
		int sum = 0;
		bool bflag1 = false;
		bool bflag2 = false;
		bool bflag3 = false;
		for (int j = 0; j < N; j++)
		{
			if (i != j)
			{
				if (v1[i] == v1[j])
				{
					bflag1 = true;
				}
				if (v2[i] == v2[j])
				{
					bflag2 = true;
				}
				if (v3[i] == v3[j])
				{
					bflag3 = true;
				}
			}
		}
		if (bflag1 == false)
			sum += v1[i];
		if (bflag2 == false)
			sum += v2[i];
		if (bflag3 == false)
			sum += v3[i];

		cout << sum << endl;


		

	}


	//for (int i = 0; i < N; i++)
	//	cout << v1[i] + v2[i] + v3[i] << endl;


}