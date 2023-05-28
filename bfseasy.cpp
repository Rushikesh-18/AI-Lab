#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void bfsUtil(vector<vector<int>>& graph, vector<bool>& visited, queue<int>& q) {
    if (q.empty()) {
        return;
    }

    int current_node = q.front();
    q.pop();
    cout << current_node << " "; // Process the current node

    for (int neighbor : graph[current_node]) {
        if (!visited[neighbor]) {
            q.push(neighbor);
            visited[neighbor] = true;
        }
    }

    bfsUtil(graph, visited, q);   //iterative mdhi while use}
}

void bfs(vector<vector<int>>& graph, int start_node)
 {
    vector<bool> visited(graph.size(), false);
    queue<int> q;

    q.push(start_node);
    visited[start_node] = true;

    bfsUtil(graph, visited, q);
}

int main() {
    // Create a sample graph
    int num_nodes = 5;
    vector<vector<int>> graph(num_nodes);

    // Add edges to the graph
graph[0]={1,2};
graph[1]={0,4};
graph[2]={0,3};
graph[3]={2};
graph[4]={1};
    int start_node = 0;

    cout << "BFS Traversal: ";
    bfs(graph, start_node);

    return 0;
}
