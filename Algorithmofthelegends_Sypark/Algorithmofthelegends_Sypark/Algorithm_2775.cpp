//#include<iostream>
//#include <memory.h>
//#include <vector>
//#include <string>
//using namespace std;
//
//
//int main(void)
//{
//
//	int T;
//	vector<int> K, N;
//	int sum[15][15];
//	vector<int> result;
//	memset(sum, 0, sizeof(sum));
//
//	for (int i = 0; i < 15; i++)
//		sum[0][i] = i;
//
//
//	for (int i = 1; i < 15; i++)
//	{
//		for (int j = 0; j < 15; j++)
//		{
//			for (int k = 0; k <= j; k++)
//			{
//				sum[i][j] += sum[i - 1][k];
//
//			}
//
//
//
//		}
//	}
//	cin >> T;
//
//
//	for (int i = 0; i < T; i++)
//	{
//		int k, n;
//		cin >> k >> n;
//		
//		result.push_back(sum[k][n]);
//
//	}
//
//	for (int i = 0; i < result.size(); i++)
//		cout << result[i] << endl;
//
//}