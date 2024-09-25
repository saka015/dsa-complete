#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
  unordered_map<int, list<int> > adj;

  void addEdge(int u, int v, bool direction) {

    // create an edge from u to v
    adj[u].push_back(v);
    if (direction == 0) {
      adj[v].push_back(u);
    }
  }

  void print() {
    for (auto &x : adj) {
      cout << x.first << " -> ";
      for (auto &y : x.second) {
        cout << y << " ";
      }
      cout << endl;
    }
  }
};

int main() {
  int n;
  cout << "Enter number of nodes: ";
  cin >> n;

  int m;
  cout << "Enter number of edges: ";
  cin >> m;

  Graph g;

  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    // undirected graph
    g.addEdge(u, v,0);
  }

  //   print graph
  g.print();
}
