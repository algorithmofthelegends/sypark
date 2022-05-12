#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	int N, K, T;
	long long sum = 0;
	int count = 0;

	vector<int> A;
	cin >> N >> K >> T;
	for (int i = 0; i < N; i++)
	{
		int input_A;
		cin >> input_A;
		A.push_back(input_A);
	}
	
	sort(A.begin(), A.end());


	for (int i = 0; i < A.size(); i++)
		sum += A[i];

	if (sum != 0)
	{
		if (sum % K != 0)
		{
			cout << "NO" << endl;

		}
		else
		{
			int temp = sum / K;
			long long nsum = 0;
			for (int i = 0; i < temp; i++)
			{
				nsum += (K - A[A.size() - 1 - i]);
			}
			for (int i = 0; i < A.size() - temp; i++)
			{
				count += A[i];

			}
			if ((count <= T && (nsum == count)) || nsum == 0)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}


	}
	else
		cout << "YES" << endl;

	//for (int i = 0; i < A.size()-1; i++)
	//{
	//	int min = std::min(A[i], A[i + 1]);
	//	int max = std::min(A[i], A[i + 1]);
	//	for (int j = 1; j < min + 1; j++)
	//	{
	//		if ((max + j) % K == 0)
	//		{
	//			count += j;
	//			break;
	//		}
	//		else if (j == min)
	//		{

	//			count += j;

	//		}
	//	}
	//	/*count += min;*/
	//	sum = (A[i] + A[i + 1])%K;
	//	A[i + 1] = sum;

	//}

	//if(count <=T && sum == 0)
	//	cout << "YES";
	//else
	//	cout << "NO";
	/*sum = sum - A[A.size() - 1];
	if (sum <= T && sum % K == 0)
	{
		cout << "YES";

	}
	else
		cout << "NO";*/
	/*int max_index = max_element(A.begin(), A.end()) - A.begin();
	for (int i = 0; i < max_index; i++)
	{
		count += A[i];
		count %=K;

	}
	for (int i = A.size()-1; i > max_index; i--)
	{
		count += A[i];
		count %= K;

	}

	result = count + A[max_index];
	if (count <= T && result % K == 0)
		cout << "YES";
	else
		cout << "NO";
*/

}