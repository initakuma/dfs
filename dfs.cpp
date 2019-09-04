#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

void addEdge(vll adj[], ll u, ll v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void DFSUtil(ll u, vll adj[], vector<bool> &visited){
	visited[u] = true;
	cout<<u<<" ";
	for(ll i=0;i<adj[u].size();i++){
		if(visited[adj[u][i]] == false) DFSUtil (adj[u][i], adj, visited);
	}
}
void DFS(vll adj[], ll V){
	vector<bool> visited(V,false);//Init visited vector 
	for(ll u=0;u<V;u++){
		if(visited[u]==false) DFSUtil(u, adj, visited);
	}
}

int main(){
	ll V=5;
	vll adj[V];

	addEdge(adj, 0, 1); 
  	addEdge(adj, 0, 4); 
  	addEdge(adj, 1, 2); 
	addEdge(adj, 1, 3); 
	addEdge(adj, 1, 4); 
	addEdge(adj, 2, 3); 
	addEdge(adj, 3, 4); 

	DFS(adj, V); 
	cout<<endl;
	return 0; 
}
