#include <iostream>
#include <cstdio>
#include <vector>
#include <array>

using namespace std;

vector<int> graph[26];
array<unsigned int, 26> visited;
array<unsigned int, 26> visitedCache;

void clearGraph(){
	for (unsigned int x = 0; x < 26; x++){
		graph[x].clear(); 
	}
}

void fillVisited(){
	for (unsigned int i = 0; i < 26; i++){
		visited.at(i) = 0;
		visitedCache.at(i) = 0;
	}
}

void printVisited(){
	for (unsigned int i = 0; i < visited.size(); i++){
		cout << visited.at(i);
	}
	cout << endl;
}

void updateVisitedCache(){
	char output;
	for (unsigned int i = 0; i < 26; i++){
		if(visited.at(i) == 1){
			output = i + 97;
			printf("%c,", output);
			visitedCache.at(i) = 1;
		}
	}

	cout << endl;
}

unsigned int dfs(unsigned int index){
	for (unsigned int i = 0; i < graph[index].size(); i++){

		if (visited.at( graph[index].at(i) ) == 0){
			visited.at( graph[index].at(i) ) = 1;
			return dfs( graph[index].at(i) );

		}

	}
	
	return 0;
	
}

int main(){
	unsigned int cases, V, E, components = 0;
	char v1, v2;
	cin >> cases;
	for (unsigned int i = 0; i < cases; i++){
		if (i != 0){
			clearGraph(); 
			fillVisited();
			components = 0;
		} 

		cin >> V >> E;

		for (unsigned int e = 0; e < E; e++){
			cin >> v1 >> v2;
			graph[v1 - 'a'].push_back(v2 - 'a');
			graph[v2 - 'a'].push_back(v1 - 'a');
		}

		visited.at(0) = 1;
		dfs(0);
		printVisited();

		/*cout << "Case #" << i+1 << endl;
		for(unsigned int v = 0; v < E; v++){
			if (visitedCache.at(v) == 0 & graph[graph[v].at(0)].size() != 1){
				components++;
				visited.at(v) = 1;
				dfs(v);
				printVisited();
				updateVisitedCache();
			}
			
		}
		cout << components << " components connected" << endl;*/
	}

	return 0;
}