#include<iostream>
#include <queue>
#include <memory.h>
using namespace std;
int MoveY[8] = { -1,-2,-2,-1,1,2,2,1 };
int MoveX[8] = { -2,-1,1,2,2,1,-1,-2 };
int cnt = 0;
bool visited[300][300];
int l;
vector<vector<int>> board;
void bfs(int y, int x,int dy,int dx);
int main(void)
{
	int T;
	vector<int> result;
	cin >> T;
	
	memset(visited, false, sizeof(visited));
	for (int i = 0; i < T; i++)
	{
		
		int nowY, nowX;
		int desY, desX;
		cin >> l >> nowY >> nowX >> desY >> desX;
		for (int i = 0; i < l; i++)
		{
			vector<int>temp;
			for (int j = 0; j < l; j++)
			{
				temp.push_back(0);
			}
			board.push_back(temp);
		}

	
		bfs(nowY, nowX, desY, desX);


		result.push_back(board[desY][desX] - 1);
		memset(visited, false, sizeof(visited));
		board.clear();
		//cnt = 0;



	}
	for (int i = 0; i < result.size(); i++)
		cout << result[i] << endl;
	


}

void bfs(int y, int x, int dy, int dx)
{
	queue<pair<int, int>> q;
	q.push(make_pair(y, x));

	visited[y][x] = true;
	board[y][x] = 1;


	while (!q.empty())
	{
		int tY = q.front().first;
		int tX = q.front().second;
		q.pop();


		for (int i = 0; i < 8; i++)
		{
			int curY = tY + MoveY[i];
			int curX = tX + MoveX[i];
			if (curY < 0 || curX < 0 || curY >= l || curX >= l) continue;
			if (visited[curY][curX] == false && board[curY][curX] == 0)
			{
				visited[curY][curX] = true;
				q.push(make_pair(curY, curX));
				board[curY][curX] += board[tY][tX]+1;
				
			}
			

		}


	}



}