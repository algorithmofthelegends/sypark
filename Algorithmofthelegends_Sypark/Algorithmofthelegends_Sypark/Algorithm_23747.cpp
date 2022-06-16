#include<iostream>
#include<vector>
#include <queue>
#include <memory.h>
using namespace std;



void bfs(int y, int x);
bool visited[1001][1001];//방문 체크
vector<vector<char>> v;
vector<vector<char>> vResult;//결과
int MoveX[4] = { -1,0,1,0 };// 좌우
int MoveY[4] = { 0,-1,0,1 };//위 아래
queue<pair<int, int>> Ward;
int R, C, Hr, Hc;
int main(void)
{


	string log;
	int nowX, nowY;//현재 위치
	cin >> R >> C;
	memset(visited, false, sizeof(visited));

	for (int i = 0; i < R; i++)
	{
		vector<char>temp;
		vector<char>temp2;
		for (int j = 0; j < C; j++)
		{
			char in;
			cin >> in;
			temp.push_back(in);
			temp2.push_back('#');

		}

		v.push_back(temp);
		vResult.push_back(temp2);
	}


	cin >> Hr >> Hc >> log;
	nowY = Hr - 1;
	nowX = Hc - 1;



	for (int i = 0; i < log.size(); i++)
	{

		if (log[i] == 'W')
		{
			Ward.push(make_pair(nowY, nowX));
		}
		if (log[i] == 'U')
			nowY--;
		if (log[i] == 'D')
			nowY++;
		if (log[i] == 'L')
			nowX--;
		if (log[i] == 'R')
			nowX++;

	}
	vResult[nowY][nowX] = '.';
	int temp = Ward.size();
	for (int i = 0; i < temp; i++)
	{
		bfs(Ward.front().first, Ward.front().second);
		/*memset(visited, false, sizeof(visited));*/
		Ward.pop();
	}
	int vY, vX;

	for (int i = 0; i < 4; i++)
	{
		vY = nowY + MoveY[i];
		vX = nowX + MoveX[i];
		if (vY < 0 || vX < 0 || vY >= R || vX >= C) continue;// overflow , underflow check

		vResult[vY][vX] = '.';
	}
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			printf("%c", vResult[i][j]);
		}
		printf("\n");

	}


	return 0;
}


void bfs(int y, int x)
{

	visited[y][x] = true;
	queue<pair<int, int>> q;
	vResult[y][x] = '.';
	q.push(make_pair(y, x));
	while (!q.empty())
	{
		int curY = q.front().first;
		int curX = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nextY = curY + MoveY[i];
			int nextX = curX + MoveX[i];
			if (nextY < 0 || nextX < 0 || nextY >= R || nextX >= C) continue;// overflow , underflow check
			if (visited[nextY][nextX] == false && v[curY][curX] == v[nextY][nextX])    /*v[curY][i] == v[nextY][i] && v[i][curX] == v[i][nextX])*/
			{
				visited[nextY][nextX] = true;
				q.push(make_pair(nextY, nextX));
				vResult[nextY][nextX] = '.';

			}

		}

	}

}