#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
int dfs(int,int);
//vector<int> map[1001];
bool visit[1001][1001];
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

int map[1001][1001];
int main() {

	
	
	



	return 0;
}



int dfs(int posX,int posY) {
	visit[posY][posX] = true;
	
	
	for (int i = 0; i < 4; i++) {
	int	newy = posY + dy[i];
	int	newx = posX + dx[i];
	if (0 < newx && newx < 1001 && 0 < newy && newy < 1001) {
		if (visit[newy][newx] != false)
			//if(newx==map[newy][newx])  // 이 좌표가 x끝점이고 연결되어 있을 경우.
			//return yes;
			//	else
			//	return no;
			dfs(newx, newy);

		}
	}

	/*
	for (int i : map[x]) {
		if ()
			dfs(i);
	}*/

	return 0;
}