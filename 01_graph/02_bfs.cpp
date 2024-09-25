/*


void bfs(vector<vector<int> > &adj, vector<bool> vis, int s) {

  // STEP-1 :   create a  queue for BFS
  queue<int> q;

  //   STEP-2 :   mark source node as visited and enqueue it
  vis[s] = true;
  q.push(s);

  //   STEP-3 :   while queue is not empty
  while (!q.empty()) {
    //   dequeue a vertex from queue
    int u = q.front();
    q.pop();
    cout << u << " ";

    //   for all the vertices adjacent to dequeued vertex u
    for (auto &v : adj[u]) {
      //   if v is not visited
      if (!vis[v]) {
        //   mark it visited and enqueue it
        vis[v] = true;
      }
    }
  }
}

*/