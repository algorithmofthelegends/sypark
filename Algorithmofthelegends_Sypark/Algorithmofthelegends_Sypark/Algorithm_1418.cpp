#include<iostream>
using namespace std;
int main(void)
{
	int N, K;
	cin >> N >> K;// Input
	int cnt = 0;
	int temp;
	for (int i = 1; i <= N; i++)//for N    1부터 N까지 for문돌림
	{
		int tmp = i;
		temp = 0;
		for (int j = 2; j <= K; j++)//for <=K       K보다 작은걸 구하기 때문에 K보다 작게함. N까지 하면 시간 초과 뜸
		{
			while (tmp % j == 0)//쪼갤수 있을 때 까지 쪼갬
			{
				tmp /= j;
			}

		}
		if (tmp == 1)//count   숫자 세줌
			cnt++;

	}
	cout << cnt;



	//for (int i = 2; i <= N; i++)
	//{
	//	int temp = i;
	//	int temp2;
	//	//int c = 2;
	//	//cout << i <<"------------------" << endl;
	//	for (int j = 2; j <= temp; j++)
	//	{
	//		while (temp % j == 0)
	//		{
	//			//cout << j << endl;
	//			temp /= j;

	//		}
	//		temp2 = j;
	//	}
	//	if (temp2 <= K)
	//		cnt++;
	//	//cout << "===============" << endl;
	//}
	//cout <<cnt+1;



		//while (temp != 1)
		//{
		//	if (temp % c == 0)
		//	{
		//		//cout << c << endl;
		//		temp /= c;
		//	}
		//	else
		//		c++;

		//}
		//if (K >= c)
		//	cnt++;
	//cout << cnt;
}

//#include <iostream>
//using namespace std;
//int main() {
//	int N;
//	cin >> N;
//	if (N == 1)
//		return 0;
//
//
//	for (int i = 2; i <= N; i++) {
//		while (N % i == 0) {
//			cout << i << endl;
//			N /= i;
//		}
//	}
//
//}