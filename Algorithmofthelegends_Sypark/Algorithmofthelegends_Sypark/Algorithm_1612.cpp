
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{

	int N;
	cin >> N;

	long long result = -1;//자리수 결과값
	long long temp = 11;// 시작값  1을 예외처리 했기 때문에 무조건 11부터 조건 따짐


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
	if (N % 2 == 0 || N % 5 == 0)// 2 4 6 8 5 의 배수는 죽었다 깨어나도 1의 자리가 1이 될수 없어서 예외 처리
	{
		result = -1;

	}
	else if (N == 1)//N이 1일 때 예외 처리
	{
		result = 1;
	}
	else
	{
		result = 2;//N이 1일 때 예외 처리 했기 때문에 나머지는 11  즉 2자리 부터 시작
		while (temp % N != 0)
		{
			//cout << temp << endl;
			temp = (temp * 10 + 1) % N;  // temp 는 1 11 111 1111 11111로 증가 하기 때문에 %N을 미리 해서 연산을 줄일 수 있음. %N을 하지 않으면 메모리 초과 뜸
			result++;//자리수 count

		}

	}

	cout << result << endl;//결과 출력

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

// 1		-> 1자리
// 3		-> 3자리
// 7		-> 6자리
// 9		-> 9자리
// 
// 11		-> 2자리
// 13		-> 6자리
// 17		-> 16자리
// 19		-> 18자리
// 
// 101		-> 4자리
// 103		-> -1
// 107		-> 18자리
// 119		-> -1