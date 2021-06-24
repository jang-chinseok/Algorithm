#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

#using namespace std;

#define print(x) cout<<x<<"\n";

vector<int> netList[1001];

bool visit[1001];

int dsf(int);

int main() {
	int N, pairNum;
	int count=0;
	cin >> N;
	cin >> pairNum;

	memset(visit, false, sizeof(visit));
	for (int i =0; i < pairNum; i++) {
		cin >> node1 >> node2;
		netList[node1].push_back(node2);
		netList[node2].push_back(node1);
	}

	for (int i = 1; 1 < = N; i++) {
		sort(netList[i].begin(), netList[i].end());
	}

	dsf(1)


}

int dsf(int naver) {
	visit[naver] = true;
	count += 1;
	for (int i = 0; i < sizof(netList[naver]; i++)) {
		int curruntNode = netList[naver][i];
		if (visit[curruntNode] != true) {
			dsf[curruntNode];
		}
	}


}