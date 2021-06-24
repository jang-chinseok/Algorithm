#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

vector<int> netList[1001];

bool visit[1001];

int dfs(int);
int count=0;
int main() {
	int N, pairNum;
	::count = 0;
	cin >> N;
	cin >> pairNum;
	int node1, node2;
	memset(visit, false, sizeof(visit));
	for (int i = 0; i < pairNum; i++) {
		cin >> node1 >> node2;
		netList[node1].push_back(node2);
		netList[node2].push_back(node1);
	}

	for (int i = 1; i <= N; i++) {
		sort(netList[i].begin(), netList[i].end());
	}

	dfs(1);
	cout << ::count;

	return 0;
}

int dfs(int naver) {
	visit[naver] = true;
	
	for (int i = 0; i < netList[naver].size(); i++) {
		int curruntNode = netList[naver][i];
		if (visit[curruntNode] != true) {
			dfs(curruntNode);
			::count += 1;
		}
	}
	

	return 0;
}