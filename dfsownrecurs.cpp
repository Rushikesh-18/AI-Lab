#include <iostream>
#include <vector>

using namespace std;

void dfsUtil(vector<vector<int>>& graph, vector<bool>& visited, int current_node) {
    visited[current_node] = true;
    cout << current_node << " "; // Process the current node

    for (int neighbor : graph[current_node]) {
        if (!visited[neighbor]) {
            dfsUtil(graph, visited, neighbor);
        }
    }
}

void dfs(vector<vector<int>>& graph, int start_node) {
    int num_nodes = graph.size();
    vector<bool> visited(num_nodes, false);

    dfsUtil(graph, visited, start_node);
}

int main() {
    // Create a sample graph
    int num_nodes = 4;
    vector<vector<int>> graph(num_nodes);

    // Add edges to the graph
    // /*graph[0] = {1, 2};
    // graph[1] = {0, 2, 3, 4};
    // graph[2] = {0, 1, 4};
    // graph[3] = {1, 4, 5};
    // graph[4] = {1, 2, 3};
    // graph[5] = {3};*/
    graph[0]={1,3};
graph[1]={2,0};
graph[2]={1,3};
graph[3]={2,0};

    int start_node = 0;

    cout << "DFS Traversal: ";
    dfs(graph, start_node);

    return 0;
}
