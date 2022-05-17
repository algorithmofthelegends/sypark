#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int N, X;
	vector<int> vTime;

	int max;
	int count = 0;
	int sum = 0;
	int tmp;
	int result = 0;
	vector<int> vtemp;
	cin >> N >> X;


	for (int i = 0; i < X; i++)
	{
		int input_time;
		cin >> input_time;
		vTime.push_back(input_time);
		sum += input_time;
	}
	result = sum;
	vtemp.push_back(sum);

	for (int i = X; i < N; i++)
	{
		if (sum > result)
			result = sum;
		int input_time;
		cin >> input_time;
		vTime.push_back(input_time);
		sum += vTime[i] - vTime[i - X];
		vtemp.push_back(sum);

	}
	if(result == 0 )
		cout << "SAD" << endl;
	else
	{
		cout << result << endl;

		for (int i = 0; i < vtemp.size(); i++)
		{
			if (vtemp[i] == result)
				count++;

		}
		cout << count << endl;

	}



	/*for (int i = 0; i < N - X+1; i++)
	{
		int sum = 0;
		
		for (int j = i; j < i+X; j++)
		{
			sum += vTime[j];
		}

		result.push_back(sum);

	}
	max = *max_element(result.begin(), result.end());
	if (max == 0)
	{
		cout << "SAD" << endl;
		return 0;
	}
	else
		cout << max << endl;

	for (int i = 0; i < result.size(); i++)
	{
		if (result[i] == max)
			count++;
	}

	cout << count;
*/

}
