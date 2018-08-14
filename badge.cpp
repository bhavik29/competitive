#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#define MAX 1005

using namespace std;

vector<int> G[MAX];
bool vis[MAX];
int a[MAX];
int start; 

void dfs(int src){
	vis[src] = true;
	vector<int>::iterator itr;
	for(itr = G[src].begin(); itr != G[src].end(); ++itr){
		if(!vis[*itr]){
			dfs(*itr);
			break;
		}
		cout << *itr << " ";
	}
}

int main(){
	int n;
	int src;
	cin >> n;
	for(int i = 1; i<=n; i++){
		cin >> a[i];
		G[i].push_back(a[i]);
	}
	for(int j = 1; j<=n; j++){
		memset(vis,false,sizeof(vis));
		start = j;
		dfs(start);
	}
	cout << "\n";
	return 0;
}