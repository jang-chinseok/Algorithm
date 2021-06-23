#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define coutln(x) cout << x<< "\n";
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
vector<int> g[1001];
//array<bool,1001> visit;
bool visit[1001];

int dfs(int);

int main(int argc, char** argv) {
	int N, M, S;
	int node1, node2;
	cin>>N>>M>>S;
	//N사이즈 결정하는 친구. 
		memset(visit, false, sizeof(visit));
	for(int i=0; i<M; i++ ){
		
		cin>>node1>>node2;
		g[node1].push_back(node2);
		g[node2].push_back(node1);
		
	}
	for(int i = 1; i<=N; i++){
	sort(g[i].begin(), g[i].end());
	}
	dfs(S);
		
	return 0;
}
int dfs(int naver){
	visit[naver]=true;
	cout<<naver<<" ";
	for(int i=0; i<g[naver].size(); i++){
		int currntNaver=g[naver][i];
		if (visit[currntNaver]!=true)
			dfs(currntNaver);
	}
	
}

