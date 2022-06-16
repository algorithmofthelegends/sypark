#include<iostream>
#include <vector>
#include <math.h>
#include <memory.h>
using namespace std;

long long v[5001][5001];

bool visited[5001];
long long dfs(int start);

int main(void)
{
	int N;
	int v1, v2, d;
	cin >> N;
	memset(v, -1, sizeof(v));
	memset(visited, false, sizeof(visited));
	for (int i = 0; i < N - 1; i++)
	{

		cin >> v1 >> v2 >> d;
		v[v1][v2] = d;
		v[v2][v1] = d;

	}

	cout << dfs(1) << endl;
}

long long dfs(int start)//dfs 
{
	long long cnt = 0;
	visited[start] = true;
	
	for (int i = 1; i < 5001; i++)
	{

		if (visited[i] == false && v[start][i] != -1)
		{
			cnt = max(cnt, dfs(i) + v[start][i]);// ºñ±³ 
		}
		

	}
	
	return cnt;

}



