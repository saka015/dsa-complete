//  using BFS
/*

bool isCyclicConnected(vector<int> adj[], int s, int V, vector<bool> &visited) {
  // Create a queue for BFS
  queue<int> q;

  // Enqueue the current node
  q.push(s);

  while (!q.empty()) {
    // Dequeue a vertex from queue and print it
    int v = q.front();
    q.pop();

    if (visited[v] == 1) {
      return true; // Cycle detected
    }

    visited[v] = 1; // Mark as visited

    // Visit adjacent nodes
    for (auto it : adj[v]) {
      if (visited[it] == 0) {
        q.push(it);
      }
    }
  }
  return false;
}

bool isCyclicDisconnected(vector<int> adj[], int V) {
  // Mark all the vertices as not visited
  vector<bool> visited(V, false);

  for (int i = 0; i < V; i++) {
    if (!visited[i] && isCyclicConnected(adj, i, V, visited))
      return true;
  }
  return false;
}

int main() {
  if (isCyclicConnected) {
    return true;
  }
}

*/

// using DFS

/*
bool isCyclicUtil(int v, vector<vector<int>>& adj, bool visited[], int parent) {
    visited[v] = true;

    // Recur for all adjacent vertices
    for (int i : adj[v]) {
        if (!visited[i]) {
            if (isCyclicUtil(i, adj, visited, v))
                return true;
        }
        // If visited and not parent, cycle exists
        else if (i != parent)
            return true;
    }
    return false;
}

bool isCyclic(int V, vector<vector<int>>& adj) {
    bool* visited = new bool[V]{false};

    // Check for cycle in all components
    for (int u = 0; u < V; u++) {
        if (!visited[u])
            if (isCyclicUtil(u, adj, visited, -1))
                return true;
    }
    return false;
}
*/