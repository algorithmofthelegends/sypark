
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{

	int N;
	cin >> N;

	long long result = -1;//�ڸ��� �����
	long long temp = 11;// ���۰�  1�� ����ó�� �߱� ������ ������ 11���� ���� ����


	//string str = "11111111111111";

	//  1 1 1 1 1 1 1 1     check
	//  2 4 8 6 2 4 8 6
	//  3 9 7 1 3 9 7 1		check
	//  4 6 4 6 4 6
	//  5 5 5 5 5 5 
	//  6 6 6 6 6 6 
	//  7 9 3 1 7 9 3 1     check
	//  8 4 2 6 8 4 2 6
	//  9 1 9 1				 check
	if (N % 2 == 0 || N % 5 == 0)// 2 4 6 8 5 �� ����� �׾��� ����� 1�� �ڸ��� 1�� �ɼ� ��� ���� ó��
	{
		result = -1;

	}
	else if (N == 1)//N�� 1�� �� ���� ó��
	{
		result = 1;
	}
	else
	{
		result = 2;//N�� 1�� �� ���� ó�� �߱� ������ �������� 11  �� 2�ڸ� ���� ����
		while (temp % N != 0)
		{
			//cout << temp << endl;
			temp = (temp * 10 + 1) % N;  // temp �� 1 11 111 1111 11111�� ���� �ϱ� ������ %N�� �̸� �ؼ� ������ ���� �� ����. %N�� ���� ������ �޸� �ʰ� ��
			result++;//�ڸ��� count

		}

	}

	cout << result << endl;//��� ���

}

//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(void)
//{
//	int N;
//	cin >> N;
//
//	long long sum = 1;
//	long long temp = 1;
//	string str = to_string(N);
//
//
//	for (int j = 0; j < 19; j++)
//	{
//		if (sum % N == 0)
//		{
//			string str = to_string(sum);
//	/*		cout << str;*/
//			int len = str.length();
//			cout << len << endl;
//			break;
//		}
//
//		temp *= 10;
//		sum += temp;
//		if (j == 18)
//			cout << "-1" << endl;
//
//	}
//
//}

// 1		-> 1�ڸ�
// 3		-> 3�ڸ�
// 7		-> 6�ڸ�
// 9		-> 9�ڸ�
// 
// 11		-> 2�ڸ�
// 13		-> 6�ڸ�
// 17		-> 16�ڸ�
// 19		-> 18�ڸ�
// 
// 101		-> 4�ڸ�
// 103		-> -1
// 107		-> 18�ڸ�
// 119		-> -1