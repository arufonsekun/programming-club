#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

#define INF 100000000

vector<int> distances;
vector<vector<int> > graph;
vector<vector<int> > weight;
//vector<int> connections;
//vector <int> visited;
int v,a;

void show_distances(){
	for (int i = 0; i < distances.size(); i++){
		printf("Vertex: %d -> %d\n", i+1, distances.at(i));
	}
}

void near_away(){
	int biggest = 0, smaller;

	for (int i = 0; i < v; i++){
		if (distances[i] > biggest){
			biggest = distances[i];
		}
	}

	smaller = biggest;

	for (int e = 0; e < v; e++){
		if (distances[e] < smaller && distances[e] != 0){
			smaller = distances[e];
		}
	}
    printf("Maior distancia: %d\n", biggest);
    printf("Menor distancia: %d\n", smaller);

}

void dijkstra(int vertex, int a){
    
	for (int i = 0; i < graph.at(vertex).size(); i++){
        
		if (distances[graph[vertex][i]-1] > weight[vertex][i] + distances[vertex-1]){
			distances[graph[vertex][i]-1] = weight[vertex][i] + distances[vertex-1];
		}
	}

	for (int x : graph.at(vertex)){
        if (a != 0)
            dijkstra(x, a-1);
    }

}

int main(){
	int v1, v2, w;
	int main_vertex;

	cin >> v >> a;

	graph.resize(a+2);
	weight.resize(a+2);
	
	//inputs the edges
	for (int i = 0; i < a; i++){
		cin >> v1 >> v2 >> w;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
		weight[v1].push_back(w);
		weight[v2].push_back(w);
    
	}

	//set the distances
	for (int e = 0; e < v; ++e){
		distances.push_back(INF);
	}

	cin >> main_vertex;
	//set the reference vertex with distance 0
	distances[main_vertex-1] = 0;
	dijkstra(main_vertex, a);
    near_away();
    show_distances();
    
    return 0;
}
