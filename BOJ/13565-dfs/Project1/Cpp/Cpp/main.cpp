#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int dfs(int,int);
bool visit[1001][1001];
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

int map[1001][1001];
int numY, numX;
int starts;
bool chackYes = false;

int main() {
	starts = 0;
	string inputs;
	cin >> numY >> numX;

	for (int i = 0; i < numY; i++) {
			cin >> inputs;
			for (int j = 0; j < numX; j++) {
				int num;
				if (inputs[j] == '1') num = 1;
				else num = 0;
				map[i][j] = num;
			}
	}
	memset(visit, false, sizeof(visit)); //false로 초기화
	for (int i = 0; i < numX; i++) {
		if (chackYes != true) {
			dfs(0, i);
		}
	}
	if (chackYes == true)	printf("YES");
	else	printf("NO");
	
	return 0;
}

int dfs(int posY, int posX) {
	visit[posY][posX] = true;
	for (int i = 0; i < 4; i++) {
		int	newy = posY + dy[i], newx = posX + dx[i];
		
		if (0 < newx && newx < numX && 0 < newy && newy < numY) {
			if (visit[newy][newx] == false  && map[newy][newx] == 0){
				if (newy == numY-1&&chackYes!=true) {
					chackYes = true;
					return 0;
				}
				else
					dfs (newy, newx);
			}
		}
	}
	return 0;
}